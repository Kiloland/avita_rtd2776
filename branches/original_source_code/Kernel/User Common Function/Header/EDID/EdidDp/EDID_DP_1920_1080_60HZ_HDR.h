
    // EDID Header
    0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,

    // General Info
    0x5A, 0x63, 0x32, 0xBC, 0x01, 0x01, 0x01, 0x01, 0x09, 0x1A, 0x01, 0x03,

    // Basic Parameter: First Segment Encoding: RGB444+YUV444+YUV422
    0xB5, 0x3C, 0x22, 0x78, 0x3E,

    // Color Characteristic Info
    0x64, 0x35, 0xA5, 0x54, 0x4F, 0x9E, 0x27, 0x12, 0x50, 0x54,

    // Established Timing Info
    0xBF, 0xEF, 0x80,

    // Standard Timing Info
    0xD1, 0xC0, 0xD1, 0xE8, 0xD1, 0xFC, 0x95, 0x00, 0x90, 0x40,
    0x81, 0x80, 0x81, 0x40, 0x81, 0xC0,

    // Prefer Timing: 1080P@60Hz
    0x02, 0x3A, 0x80, 0x18, 0x71, 0x38, 0x2D, 0x40, 0x58,
    0x2C, 0x25, 0x00, 0x55, 0x50, 0x21, 0x00, 0x00, 0x1E,

    // Display Product Name
    0x00, 0x00, 0x00, 0xFC, 0x00, 0x52, 0x54, 0x4B,
    0x20, 0x48, 0x44, 0x52, 0x20, 0x46, 0x48, 0x44, 0x36, 0x30,

    // Series #
    0x00, 0x00, 0x00, 0xFF, 0x00, 0x64, 0x65, 0x6D,
    0x6F, 0x73, 0x65, 0x74, 0x2D, 0x31, 0x0A, 0x20, 0x30, 0x20,

    // Dispaly Range Limit
    0x00, 0x00, 0x00, 0xFD, 0x00, 0x32,
    0x4B, 0x54, 0x54, 0x13, 0x01, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,

    // Check Sum
    0x01, 0xDB,

    // Ext General INFO
    0x02, 0x03, 0x37, 0xF2,

    // Video Data Block
    0x4F,
    0x04, 0x05, 0x10, 0x13, 0x14, 0x1F, 0x20,
    0x21, 0x22, 0x27, 0x48, 0x49, 0x4A, 0x4B, 0x4C,

    // Audio Data Block
    0x23, 0x09, 0x7F, 0x07,

    // Spealer Allocation Data Block
    0x83, 0x01, 0x00, 0x00,

    // AMD VSDB (FreeSync)
    0x68, 0x1A, 0x00, 0x00, 0x01, 0x01, 0x30, 0x90, 0xE6,

    // HDMI VSDB
    0x66, 0x03, 0x0C, 0x00, 0x10, 0x00, 0x38,

    // Data Block-Colorimetry
    0xE3, 0x05, 0xC0, 0x00,

    // Data Block-HDR
    0xE6, 0x06, 0x05, 0x01, 0x69, 0x69, 0x4F,

    // Detail Timing-1080P@60
    0x02, 0x3A, 0x80, 0x18, 0x71, 0x38, 0x2D, 0x40, 0x58,
    0x2C, 0x25, 0x00, 0x55, 0x50, 0x21, 0x00, 0x00, 0x1E,

    // Detail Timing-1080i@60
    0x01, 0x1D, 0x80, 0x18, 0x71, 0x1C, 0x16, 0x20, 0x58,
    0x2C, 0x25, 0x00, 0x55, 0x50, 0x21, 0x00, 0x00, 0x9E,

    // Zero Padding
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

    // Check Sum
    0x53,
