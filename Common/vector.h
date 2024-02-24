#pragma once

#include "darwin_service.pb.h"

namespace darwin {

    proto::Vector3 CreateBasicVector3(double x, double y, double z);
    proto::Vector4 CreateBasicVector4(double x, double y, double z, double w);
    double GetLength(const proto::Vector3& vector3);
    double DotProduct(
        const proto::Vector3& vector3_left,
        const proto::Vector3& vector3_right);
    proto::Vector3 CrossProduct(
        const proto::Vector3& vector3_left,
        const proto::Vector3& vector3_right);
    proto::Vector3 Normalize(const proto::Vector3& vector3);
    proto::Vector3 CreateRandomNormalizedVector3();
    proto::Vector3 MultiplyVector3ByScalar(
        const proto::Vector3& vector3, double scalar);

} // End namespace darwin.