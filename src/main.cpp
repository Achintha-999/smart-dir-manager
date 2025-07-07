#include <iostream>
#include <filesystem>
#include <map>
#include <string>
#include <vector>

namespace fs = std::filesystem;


const std::map<std::string, std::string> extension_categories = {
    {".jpg", "Images"}, {".png", "Images"}, {".pdf", "Documents"},
    {".txt", "Text"}, {".zip", "Archives"}, {".mp3", "Music"}, {".mp4", "Videos"}
};

void organize_files(const fs::path& target_dir) {
    try {
    
        for (const auto& [ext, category] : extension_categories) {
            fs::create_directory(target_dir / category);
        }

    
        for (const auto& entry : fs::directory_iterator(target_dir)) {
            if (entry.is_regular_file()) {
                const auto ext = entry.path().extension().string();
                if (extension_categories.count(ext)) {
                    const auto dest = target_dir / extension_categories.at(ext) / entry.path().filename();
                    fs::rename(entry.path(), dest);
                    std::cout << "Moved: " << entry.path().filename() << " → " << dest.parent_path().filename() << "\n";
                }
            }
        }
    } catch (const fs::filesystem_error& e) {
        std::cerr << "Error: " << e.what() << "\n";
    }
}

int main() {
    std::string path;
    std::cout << "Enter directory path to organize: ";
    std::getline(std::cin, path);

    if (!fs::exists(path)) {
        std::cerr << "Error: Directory doesn't exist!\n";
        return 1;
    }

    organize_files(path);
    std::cout << "Organization complete!\n";
    return 0;
}