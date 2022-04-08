#pragma once


namespace InfinityEngine
{

	struct FUniversalPlatformMath
	{

		static FORCE_INLINE bool IsNaN(const float A)
		{
			return ((*(uint32*)&A) & 0x7FFFFFFFU) > 0x7F800000U;
		}

		static FORCE_INLINE bool IsNaN(const double A)
		{
			return ((*(uint64*)&A) & 0x7FFFFFFFFFFFFFFFULL) > 0x7FF0000000000000ULL;
		}

		static FORCE_INLINE bool IsFinite(const float A)
		{
			return ((*(uint32*)&A) & 0x7F800000U) != 0x7F800000U;
		}

		static FORCE_INLINE bool IsFinite(const double A)
		{
			return ((*(uint64*)&A) & 0x7FF0000000000000ULL) != 0x7FF0000000000000ULL;
		}

		template<typename T>
		static constexpr T Abs(const T A)
		{
			return (A >= static_cast<T>(0)) ? A : -A;
		}

		template<typename T>
		static constexpr T Sign(const T A)
		{
			return (A > static_cast<T>(0)) ? static_cast<T>(1) : ((A < static_cast<T>(0)) ? static_cast<T>(-1) : static_cast<T>(0));
		}

		template<typename T>
		static constexpr T Min(const T A, const T B)
		{
			return (A <= B) ? A : B;
		}

		template<typename T>
		static constexpr T Max(const T A, const T B)
		{
			return (A >= B) ? A : B;
		}

		static FORCE_INLINE float Sin(const float Value)
		{
			return sinf(Value);
		}

		static FORCE_INLINE double Sin(const double Value)
		{
			return sin(Value);
		}

		static FORCE_INLINE float Asin(const float Value)
		{
			return asinf((Value < -1.0f) ? -1.0f : ((Value < 1.0f) ? Value : 1.0f));
		}

		static FORCE_INLINE double Asin(const double Value)
		{
			return asin((Value < -1.0) ? -1.0 : ((Value < 1.0) ? Value : 1.0));
		}

		static FORCE_INLINE float Sinh(const float Value)
		{
			return sinhf(Value);
		}

		static FORCE_INLINE double Sinh(const double Value)
		{
			return sinh(Value);
		}

		static FORCE_INLINE float Cos(const float Value)
		{
			return cosf(Value);
		}

		static FORCE_INLINE double Cos(const double Value)
		{
			return cos(Value);
		}

		static FORCE_INLINE float Acos(const float Value)
		{
			return acosf((Value < -1.0f) ? -1.0f : ((Value < 1.0f) ? Value : 1.0f));
		}

		static FORCE_INLINE double Acos(const double Value)
		{
			return acos((Value < -1.0) ? -1.0 : ((Value < 1.0) ? Value : 1.0));
		}

		static FORCE_INLINE float Tan(const float Value)
		{
			return tanf(Value);
		}

		static FORCE_INLINE double Tan(const double Value)
		{
			return tan(Value);
		}

		static FORCE_INLINE float Atan(const float Value)
		{
			return atanf(Value);
		}

		static FORCE_INLINE double Atan(const double Value)
		{
			return atan(Value);
		}

		static FORCE_INLINE float Atan2(const float Y, const float X)
		{
			return atan2f(Y, X);
		}

		static FORCE_INLINE double Atan2(const double Y, const double X)
		{
			return atan2(Y, X);
		}

		static FORCE_INLINE float Sqrt(const float Value)
		{
			return sqrtf(Value);
		}

		static FORCE_INLINE double Sqrt(const double Value)
		{
			return sqrt(Value);
		}

		static FORCE_INLINE float Pow(const float A, const float B)
		{
			return powf(A, B);
		}

		static FORCE_INLINE double Pow(const double A, const double B)
		{
			return pow(A, B);
		}

		static FORCE_INLINE float InvSqrt(const float A)
		{
			return 1.0f / sqrtf(A);
		}

		static FORCE_INLINE double InvSqrt(const double A)
		{
			return 1.0 / sqrt(A);
		}

	};

}