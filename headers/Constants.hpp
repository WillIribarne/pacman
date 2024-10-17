#ifndef CONSTANTS_HPP
#define CONSTANTS_HPP

inline constexpr unsigned int ANCHO_VENT = 1080;
inline constexpr unsigned int ALTO_VENT = 900;
inline constexpr unsigned int FRAMERATE = 60;
inline constexpr unsigned int ROWS = 31;
inline constexpr unsigned int COLUMNS = 28;
inline constexpr float X_TILE_SIZE = ANCHO_VENT / COLUMNS;
inline constexpr float Y_TILE_SIZE = ALTO_VENT / ROWS;

#endif // CONSTANTS_HPP