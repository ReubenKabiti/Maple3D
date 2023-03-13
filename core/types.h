#ifndef TYPES_H
#define TYPES_H
#include <glm/glm.hpp>

#ifdef MAPLE_INCLUDE_GLM
using vec2 = glm::vec<2, float>;
using vec3 = glm::vec<3, float>;
using vec4 = glm::vec<4, float>;

using ivec2 = glm::vec<2, int>;
using ivec3 = glm::vec<3, int>;
using ivec4 = glm::vec<4, int>;

using bvec2 = glm::vec<2, bool>;
using bvec3 = glm::vec<3, bool>;
using bvec4 = glm::vec<4, bool>;
#endif // MAPLE_INCLUDE_GLM
#endif // TYPES_H
