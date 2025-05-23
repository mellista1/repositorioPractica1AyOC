typedef uint32_t fat32_t;
    
typedef uint16_t ext4_t;

typedef uint8_t ntfs_t;


fat32_t* new_fat32();
  
fat32_t* copy_fat32(fat32_t* file);
ext4_t* copy_ext4(ext4_t* file);
ntfs_t* copy_ntfs(ntfs_t* file);
  
void rm_fat32(fat32_t* file);
void rm_ext4(ext4_t* file);
void rm_ntfs(ntfs_t* file);