namespace offsets
{

	namespace System_Byte {
		// Offsets
		constexpr auto m_value = 0x0;

		// Methods
		constexpr auto CompareTo_object = 0x1FCD40;
		constexpr auto CompareTo_byte = 0x1FCD30;
		constexpr auto Equals_object = 0x1FCE10;
		constexpr auto Equals_byte = 0x1DF590;
		constexpr auto GetHashCode = 0x15EE20;
		constexpr auto Parse_string_IFormatProvider = 0x14EB690;
		constexpr auto Parse_string_NumberStyles_IFormatProvider = 0x14EB6C0;
		constexpr auto Parse_string_NumberStyles_NumberFormatInfo = 0x14EB5A0;
		constexpr auto TryParse_string_byte = 0x14EBEC0;
		constexpr auto TryParse_string_NumberStyles_IFormatProvider_byte = 0x14EBDE0;
		constexpr auto TryParse_string_NumberStyles_NumberFormatInfo_byte = 0x14EBE70;
		constexpr auto ToString = 0x1FD420;
		constexpr auto ToString_string = 0x1FD450;
		constexpr auto ToString_IFormatProvider = 0x1FD3F0;
		constexpr auto ToString_string_IFormatProvider = 0x1FD490;
		constexpr auto GetTypeCode = 0x1FCEA0;
		constexpr auto System_IConvertible_ToBoolean_IFormatProvider = 0x1FCEB0;
		constexpr auto System_IConvertible_ToChar_IFormatProvider = 0x1FCF10;
		constexpr auto System_IConvertible_ToSByte_IFormatProvider = 0x1FD180;
		constexpr auto System_IConvertible_ToByte_IFormatProvider = 0x15EE20;
		constexpr auto System_IConvertible_ToInt16_IFormatProvider = 0x1FD060;
		constexpr auto System_IConvertible_ToUInt16_IFormatProvider = 0x1FD2D0;
		constexpr auto System_IConvertible_ToInt32_IFormatProvider = 0x1FD0C0;
		constexpr auto System_IConvertible_ToUInt32_IFormatProvider = 0x1FD330;
		constexpr auto System_IConvertible_ToInt64_IFormatProvider = 0x1FD120;
		constexpr auto System_IConvertible_ToUInt64_IFormatProvider = 0x1FD390;
		constexpr auto System_IConvertible_ToSingle_IFormatProvider = 0x1FD1E0;
		constexpr auto System_IConvertible_ToDouble_IFormatProvider = 0x1FD000;
		constexpr auto System_IConvertible_ToDecimal_IFormatProvider = 0x1FCF80;
		constexpr auto System_IConvertible_ToDateTime_IFormatProvider = 0x1FCF70;
		constexpr auto System_IConvertible_ToType_Type_IFormatProvider = 0x1FD240;
	}

	namespace System_Math {
		// Class
		constexpr auto System_Math_TypeInfo = 0x31A48C0;

		// Static Offsets
		constexpr auto doubleRoundLimit = 0x0;
		constexpr auto roundPower10Double = 0x8;

		// Methods
		constexpr auto Acos_double = 0x165B440;
		constexpr auto Asin_double = 0x165B450;
		constexpr auto Atan_double = 0x165B470;
		constexpr auto Atan2_double_double = 0x165B460;
		constexpr auto Ceiling_double = 0x165B480;
		constexpr auto Cos_double = 0x165B490;
		constexpr auto Cosh_double = 0x165B4A0;
		constexpr auto Floor_double = 0x165B4D0;
		constexpr auto InternalRound_double_int_MidpointRounding = 0x165B4E0;
		constexpr auto InternalTruncate_double = 0x165B740;
		constexpr auto Sin_double = 0x165C1D0;
		constexpr auto Tan_double = 0x165C210;
		constexpr auto Sinh_double = 0x165C1E0;
		constexpr auto Round_double = 0x165BEB0;
		constexpr auto Round_double_MidpointRounding = 0x165BD30;
		constexpr auto Round_double_int_MidpointRounding = 0x165BEC0;
		constexpr auto Round_Decimal = 0x165C050;
		constexpr auto SplitFractionDouble_double = 0x165C1F0;
		constexpr auto Truncate_double = 0x165C220;
		constexpr auto Sqrt_double = 0x165C200;
		constexpr auto Log_double = 0x165B910;
		constexpr auto Log10_double = 0x165B7A0;
		constexpr auto Exp_double = 0x165B4C0;
		constexpr auto Pow_double_double = 0x165BD20;
		constexpr auto Abs_int = 0x165B370;
		constexpr auto AbsHelper_int = 0x165B210;
		constexpr auto Abs_long = 0x165B290;
		constexpr auto AbsHelper_long = 0x165B180;
		constexpr auto Abs_float = 0x165B430;
		constexpr auto Abs_double = 0x165B360;
		constexpr auto Max_sbyte_sbyte = 0x165B9C0;
		constexpr auto Max_byte_byte = 0x165B930;
		constexpr auto Max_short_short = 0x165BB10;
		constexpr auto Max_ushort_ushort = 0x165B950;
		constexpr auto Max_int_int = 0x165BA70;
		constexpr auto Max_uint_uint = 0x165B940;
		constexpr auto Max_long_long = 0x165B920;
		constexpr auto Max_ulong_ulong = 0x165B9B0;
		constexpr auto Max_float_float = 0x165B960;
		constexpr auto Max_double_double = 0x165BA80;
		constexpr auto Max_Decimal_Decimal = 0x165B9D0;
		constexpr auto Min_sbyte_sbyte = 0x165BD10;
		constexpr auto Min_byte_byte = 0x165BBD0;
		constexpr auto Min_short_short = 0x165BBE0;
		constexpr auto Min_ushort_ushort = 0x165BBB0;
		constexpr auto Min_int_int = 0x165BCE0;
		constexpr auto Min_uint_uint = 0x165BD00;
		constexpr auto Min_long_long = 0x165BBC0;
		constexpr auto Min_ulong_ulong = 0x165BCF0;
		constexpr auto Min_float_float = 0x165BBF0;
		constexpr auto Min_double_double = 0x165BB20;
		constexpr auto Min_Decimal_Decimal = 0x165BC40;
		constexpr auto Log_double_double = 0x165B7B0;
		constexpr auto Sign_int = 0x165C190;
		constexpr auto Sign_long = 0x165C1B0;
		constexpr auto Sign_double = 0x165C0D0;
		constexpr auto DivRem_long_long_long = 0x165B4B0;
		constexpr auto _cctor = 0x165C2D0;
	}

	namespace System_Number {
		// Methods
		constexpr auto NumberBufferToDecimal_byte_Decimal = 0x1666C90;
		constexpr auto NumberBufferToDouble_byte_double = 0x1666CA0;
		constexpr auto FormatDecimal_Decimal_string_NumberFormatInfo = 0x16661B0;
		constexpr auto FormatDouble_double_string_NumberFormatInfo = 0x16662D0;
		constexpr auto FormatInt32_int_string_NumberFormatInfo = 0x1666350;
		constexpr auto FormatUInt32_uint_string_NumberFormatInfo = 0x16666B0;
		constexpr auto FormatInt64_long_string_NumberFormatInfo = 0x16664C0;
		constexpr auto FormatUInt64_ulong_string_NumberFormatInfo = 0x1666810;
		constexpr auto FormatSingle_float_string_NumberFormatInfo = 0x1666630;
		constexpr auto HexNumberToInt32_Number_NumberBuffer_int = 0x1666970;
		constexpr auto HexNumberToInt64_Number_NumberBuffer_long = 0x16669F0;
		constexpr auto HexNumberToUInt32_Number_NumberBuffer_uint = 0x1666AB0;
		constexpr auto HexNumberToUInt64_Number_NumberBuffer_ulong = 0x1666B30;
		constexpr auto IsWhite_char = 0x1666BC0;
		constexpr auto NumberToInt32_Number_NumberBuffer_int = 0x1666CB0;
		constexpr auto NumberToInt64_Number_NumberBuffer_long = 0x1666D10;
		constexpr auto NumberToUInt32_Number_NumberBuffer_uint = 0x1666D90;
		constexpr auto NumberToUInt64_Number_NumberBuffer_ulong = 0x1666DF0;
		constexpr auto MatchChars_char_string = 0x1666C20;
		constexpr auto MatchChars_char_char = 0x1666BE0;
		constexpr auto ParseDecimal_string_NumberStyles_NumberFormatInfo = 0x1666E60;
		constexpr auto ParseDouble_string_NumberStyles_NumberFormatInfo = 0x1666FD0;
		constexpr auto ParseInt32_string_NumberStyles_NumberFormatInfo = 0x1667280;
		constexpr auto ParseInt64_string_NumberStyles_NumberFormatInfo = 0x16674D0;
		constexpr auto ParseNumber_char_NumberStyles_Number_NumberBuffer_StringBuilder_NumberFormatInfo_bool = 0x1667740;
		constexpr auto ParseSingle_string_NumberStyles_NumberFormatInfo = 0x1668230;
		constexpr auto ParseUInt32_string_NumberStyles_NumberFormatInfo = 0x1668550;
		constexpr auto ParseUInt64_string_NumberStyles_NumberFormatInfo = 0x1668790;
		constexpr auto StringToNumber_string_NumberStyles_Number_NumberBuffer_NumberFormatInfo_bool = 0x16689F0;
		constexpr auto TrailingZeros_string_int = 0x1668B30;
		constexpr auto TryParseDecimal_string_NumberStyles_NumberFormatInfo_Decimal = 0x1668B90;
		constexpr auto TryParseDouble_string_NumberStyles_NumberFormatInfo_double = 0x1668D10;
		constexpr auto TryParseInt32_string_NumberStyles_NumberFormatInfo_int = 0x1668E90;
		constexpr auto TryParseInt64_string_NumberStyles_NumberFormatInfo_long = 0x16690D0;
		constexpr auto TryParseSingle_string_NumberStyles_NumberFormatInfo_float = 0x16692A0;
		constexpr auto TryParseUInt32_string_NumberStyles_NumberFormatInfo_uint = 0x1669450;
		constexpr auto TryParseUInt64_string_NumberStyles_NumberFormatInfo_ulong = 0x1669690;
		constexpr auto TryStringToNumber_string_NumberStyles_Number_NumberBuffer_NumberFormatInfo_bool = 0x16699B0;
		constexpr auto TryStringToNumber_string_NumberStyles_Number_NumberBuffer_StringBuilder_NumberFormatInfo_bool = 0x16698E0;
	}

	namespace System_Type {
		// Class
		constexpr auto System_Type_TypeInfo = 0x31A65C8;

		// Offsets
		constexpr auto _impl = 0x10;

		// Static Offsets
		constexpr auto FilterAttribute = 0x0;
		constexpr auto FilterName = 0x8;
		constexpr auto FilterNameIgnoreCase = 0x10;
		constexpr auto Missing = 0x18;
		constexpr auto Delimiter = 0x20;
		constexpr auto EmptyTypes = 0x28;
		constexpr auto defaultBinder = 0x30;

		// Methods
		constexpr auto _ctor = 0x657F30;
		constexpr auto get_MemberType = 0xE69850;
		constexpr auto get_DeclaringType = 0x2FCD80;
		constexpr auto get_DeclaringMethod = 0x2FCD80;
		constexpr auto get_ReflectedType = 0x2FCD80;
		constexpr auto GetType_string_Func_AssemblyName_Assembly__Func_Assembly_string_bool_Type__bool = 0x20BC4C0;
		constexpr auto MakePointerType = 0x20BD7F0;
		constexpr auto MakeByRefType = 0x20BD730;
		constexpr auto MakeArrayType = 0x20BD690;
		constexpr auto MakeArrayType_int = 0x20BD6E0;
		constexpr auto GetTypeCode_Type = 0x20BBF10;
		constexpr auto GetTypeCodeImpl = 0x20BBDB0;
		constexpr auto get_DefaultBinder = 0x20BDC30;
		constexpr auto CreateBinder = 0x20B9D50;
		constexpr auto get_TypeHandle = 0x20BE570;
		constexpr auto GetTypeHandle_object = 0x20BBFF0;
		constexpr auto GetArrayRank = 0x20BA1C0;
		constexpr auto GetConstructor_BindingFlags_Binder_CallingConventions_Typearray_ParameterModifierarray = 0x20BA4E0;
		constexpr auto GetConstructor_BindingFlags_Binder_Typearray_ParameterModifierarray = 0x20BA380;
		constexpr auto GetConstructor_Typearray = 0x20BA230;
		constexpr auto GetConstructors = 0x20BA640;
		constexpr auto GetMethod_string_BindingFlags_Binder_Typearray_ParameterModifierarray = 0x20BB590;
		constexpr auto GetMethod_string_Typearray = 0x20BB3F0;
		constexpr auto GetMethod_string_BindingFlags = 0x20BB740;
		constexpr auto GetMethod_string = 0x20BB7F0;
		constexpr auto GetMethods = 0x20BB8A0;
		constexpr auto GetField_string = 0x20BB100;
		constexpr auto GetFields = 0x20BB120;
		constexpr auto FindInterfaces_TypeFilter_object = 0x20B9F10;
		constexpr auto GetProperty_string_BindingFlags_Binder_Type_Typearray_ParameterModifierarray = 0x20BB9A0;
		constexpr auto GetProperty_string_BindingFlags = 0x20BBB90;
		constexpr auto GetProperty_string_Type_Typearray = 0x20BBA90;
		constexpr auto GetProperty_string_Type = 0x20BBC40;
		constexpr auto GetProperty_string = 0x20BB900;
		constexpr auto GetProperties = 0x20BB8E0;
		constexpr auto GetNestedType_string = 0x20BB8C0;
		constexpr auto GetMember_string = 0x20BB3A0;
		constexpr auto GetMember_string_BindingFlags = 0x20BB3C0;
		constexpr auto GetMember_string_MemberTypes_BindingFlags = 0x20BB330;
		constexpr auto get_IsNested = 0x20BE150;
		constexpr auto get_Attributes = 0x20BDAB0;
		constexpr auto get_GenericParameterAttributes = 0x20BDDA0;
		constexpr auto get_IsVisible = 0x20BE380;
		constexpr auto get_IsNotPublic = 0x20BE1C0;
		constexpr auto get_IsPublic = 0x20BE220;
		constexpr auto get_IsNestedPublic = 0x20BE130;
		constexpr auto get_IsNestedAssembly = 0x20BE100;
		constexpr auto get_IsExplicitLayout = 0x20BDFF0;
		constexpr auto get_IsClass = 0x20BDF10;
		constexpr auto get_IsInterface = 0x20BE010;
		constexpr auto get_IsValueType = 0x20BE360;
		constexpr auto get_IsAbstract = 0x20BDE80;
		constexpr auto get_IsSealed = 0x20BE240;
		constexpr auto get_IsEnum = 0x20BDF80;
		constexpr auto get_IsSerializable = 0x20BE270;
		constexpr auto get_IsArray = 0x20BDEB0;
		constexpr auto get_IsSzArray = 0x2F4190;
		constexpr auto get_IsGenericType = 0x2F4190;
		constexpr auto get_IsGenericTypeDefinition = 0x2F4190;
		constexpr auto get_IsGenericParameter = 0x2F4190;
		constexpr auto get_GenericParameterPosition = 0x20BDDF0;
		constexpr auto get_ContainsGenericParameters = 0x20BDAD0;
		constexpr auto GetGenericParameterConstraints = 0x20BB1B0;
		constexpr auto get_IsByRef = 0x20BDED0;
		constexpr auto get_IsPointer = 0x20BE1E0;
		constexpr auto get_IsPrimitive = 0x20BE200;
		constexpr auto get_IsCOMObject = 0x20BDEF0;
		constexpr auto get_HasElementType = 0x20BDE60;
		constexpr auto get_IsContextful = 0x20BDF60;
		constexpr auto get_IsMarshalByRef = 0x20BE0E0;
		constexpr auto IsValueTypeImpl = 0x20BD620;
		constexpr auto MakeGenericType_Typearray = 0x20BD780;
		constexpr auto IsContextfulImpl = 0x20BCA20;
		constexpr auto IsMarshalByRefImpl = 0x20BD480;
		constexpr auto GetGenericArguments = 0x20BB140;
		constexpr auto GetGenericTypeDefinition = 0x20BB260;
		constexpr auto GetRootElementType = 0x20BBD50;
		constexpr auto GetEnumNames = 0x20BAE30;
		constexpr auto GetEnumValues = 0x20BB040;
		constexpr auto GetEnumRawConstantValues = 0x20BAEF0;
		constexpr auto GetEnumData_stringarray_Array = 0x20BA660;
		constexpr auto GetEnumUnderlyingType = 0x20BAF20;
		constexpr auto IsEnumDefined_object = 0x20BCAF0;
		constexpr auto GetEnumName_object = 0x20BAB10;
		constexpr auto BinarySearch_Array_object = 0x20B9C20;
		constexpr auto IsIntegerType_Type = 0x20BD1C0;
		constexpr auto IsSubclassOf_Type = 0x20BD550;
		constexpr auto IsInstanceOfType_object = 0x20BD180;
		constexpr auto IsAssignableFrom_Type = 0x20BC780;
		constexpr auto IsEquivalentTo_Type = 0x20BD120;
		constexpr auto ImplementInterface_Type = 0x20BC5E0;
		constexpr auto FormatTypeName = 0x20BA150;
		constexpr auto FormatTypeName_bool = 0x20BA170;
		constexpr auto ToString = 0x20BD840;
		constexpr auto Equals_object = 0x20B9E80;
		constexpr auto Equals_Type = 0x20B9E20;
		constexpr auto op_Equality_Type_Type = 0xAC45C0;
		constexpr auto op_Inequality_Type_Type = 0x1253A30;
		constexpr auto GetHashCode = 0x20BB2D0;
		constexpr auto GetType = 0x1075BB0;
		constexpr auto internal_from_name_string_bool_bool = 0x20BE5D0;
		constexpr auto GetType_string = 0x20BC300;
		constexpr auto GetType_string_bool = 0x20BC270;
		constexpr auto GetType_string_bool_bool = 0x20BC0E0;
		constexpr auto GetTypeFromHandle_RuntimeTypeHandle = 0x20BBF80;
		constexpr auto internal_from_handle_IntPtr = 0x20BE5C0;
		constexpr auto _cctor = 0x20BD890;
	}

	namespace System_Globalization_NumberFormatInfo {
		// Class
		constexpr auto System_Globalization_NumberFormatInfo_TypeInfo = 0x319F048;

		// Offsets
		constexpr auto numberGroupSizes = 0x10;
		constexpr auto currencyGroupSizes = 0x18;
		constexpr auto percentGroupSizes = 0x20;
		constexpr auto positiveSign = 0x28;
		constexpr auto negativeSign = 0x30;
		constexpr auto numberDecimalSeparator = 0x38;
		constexpr auto numberGroupSeparator = 0x40;
		constexpr auto currencyGroupSeparator = 0x48;
		constexpr auto currencyDecimalSeparator = 0x50;
		constexpr auto currencySymbol = 0x58;
		constexpr auto ansiCurrencySymbol = 0x60;
		constexpr auto nanSymbol = 0x68;
		constexpr auto positiveInfinitySymbol = 0x70;
		constexpr auto negativeInfinitySymbol = 0x78;
		constexpr auto percentDecimalSeparator = 0x80;
		constexpr auto percentGroupSeparator = 0x88;
		constexpr auto percentSymbol = 0x90;
		constexpr auto perMilleSymbol = 0x98;
		constexpr auto nativeDigits = 0xA0;
		constexpr auto m_dataItem = 0xA8;
		constexpr auto numberDecimalDigits = 0xAC;
		constexpr auto currencyDecimalDigits = 0xB0;
		constexpr auto currencyPositivePattern = 0xB4;
		constexpr auto currencyNegativePattern = 0xB8;
		constexpr auto numberNegativePattern = 0xBC;
		constexpr auto percentPositivePattern = 0xC0;
		constexpr auto percentNegativePattern = 0xC4;
		constexpr auto percentDecimalDigits = 0xC8;
		constexpr auto digitSubstitution = 0xCC;
		constexpr auto isReadOnly = 0xD0;
		constexpr auto m_useUserOverride = 0xD1;
		constexpr auto m_isInvariant = 0xD2;
		constexpr auto validForParseAsNumber = 0xD3;
		constexpr auto validForParseAsCurrency = 0xD4;

		// Static Offsets
		constexpr auto invariantInfo = 0x0;

		// Methods
		constexpr auto _ctor = 0x12E6CE0;
		constexpr auto OnSerializing_StreamingContext = 0x12E6340;
		constexpr auto OnDeserializing_StreamingContext = 0x2F5370;
		constexpr auto OnDeserialized_StreamingContext = 0x2F5370;
		constexpr auto _ctor_CultureData = 0x12E6620;
		constexpr auto get_InvariantInfo = 0x12E6E70;
		constexpr auto GetInstance_IFormatProvider = 0x12E60C0;
		constexpr auto Clone = 0x12E5FC0;
		constexpr auto get_CurrencyDecimalDigits = 0x32D3C0;
		constexpr auto get_CurrencyDecimalSeparator = 0x544B40;
		constexpr auto get_IsReadOnly = 0xD59320;
		constexpr auto get_CurrencyGroupSizes = 0x12E6CF0;
		constexpr auto get_NumberGroupSizes = 0x12E6F80;
		constexpr auto get_PercentGroupSizes = 0x12E7000;
		constexpr auto get_CurrencyGroupSeparator = 0x75B6F0;
		constexpr auto get_CurrencySymbol = 0x544B30;
		constexpr auto get_CurrentInfo = 0x12E6D70;
		constexpr auto get_NaNSymbol = 0x2F8F60;
		constexpr auto get_CurrencyNegativePattern = 0xF248E0;
		constexpr auto get_NumberNegativePattern = 0xF248D0;
		constexpr auto get_PercentPositivePattern = 0x10EA6C0;
		constexpr auto get_PercentNegativePattern = 0x9E2620;
		constexpr auto get_NegativeInfinitySymbol = 0x5202F0;
		constexpr auto get_NegativeSign = 0x32CD20;
		constexpr auto get_NumberDecimalDigits = 0x2FF4D0;
		constexpr auto get_NumberDecimalSeparator = 0x65D6A0;
		constexpr auto get_NumberGroupSeparator = 0x534820;
		constexpr auto get_CurrencyPositivePattern = 0xF24910;
		constexpr auto get_PositiveInfinitySymbol = 0x520300;
		constexpr auto get_PositiveSign = 0x9160D0;
		constexpr auto get_PercentDecimalDigits = 0x9E2640;
		constexpr auto get_PercentDecimalSeparator = 0x520310;
		constexpr auto get_PercentGroupSeparator = 0x5202A0;
		constexpr auto get_PercentSymbol = 0x2FF710;
		constexpr auto get_PerMilleSymbol = 0x2FF640;
		constexpr auto GetFormat_Type = 0x12E6030;
		constexpr auto ReadOnly_NumberFormatInfo = 0x12E63D0;
		constexpr auto ValidateParseStyleInteger_NumberStyles = 0x12E6550;
		constexpr auto ValidateParseStyleFloatingPoint_NumberStyles = 0x12E6480;
	}

	namespace UnityEngine_Camera {
		// Class
		constexpr auto UnityEngine_Camera_TypeInfo = 0x3204580;

		// Static Offsets
		constexpr auto onPreCull = 0x0;
		constexpr auto onPreRender = 0x8;
		constexpr auto onPostRender = 0x10;

		// Methods
		constexpr auto get_nearClipPlane = 0x183EDF0;
		constexpr auto set_nearClipPlane_float = 0x183F7E0;
		constexpr auto get_farClipPlane = 0x183ED40;
		constexpr auto set_farClipPlane_float = 0x183F650;
		constexpr auto get_fieldOfView = 0x183ED80;
		constexpr auto set_fieldOfView_float = 0x183F6A0;
		constexpr auto set_renderingPath_RenderingPath = 0x183FB50;
		constexpr auto get_actualRenderingPath = 0x183E9F0;
		constexpr auto get_allowHDR = 0x183EA30;
		constexpr auto set_allowHDR_bool = 0x183F400;
		constexpr auto get_allowMSAA = 0x183EA70;
		constexpr auto set_allowMSAA_bool = 0x183F450;
		constexpr auto set_forceIntoRenderTexture_bool = 0x183F6F0;
		constexpr auto get_orthographicSize = 0x183EEE0;
		constexpr auto set_orthographicSize_float = 0x183F8D0;
		constexpr auto get_orthographic = 0x183EF20;
		constexpr auto set_orthographic_bool = 0x183F920;
		constexpr auto get_depth = 0x183ECC0;
		constexpr auto get_aspect = 0x183EAB0;
		constexpr auto set_aspect_float = 0x183F4A0;
		constexpr auto get_cullingMask = 0x183EC10;
		constexpr auto set_cullingMask_int = 0x183F5D0;
		constexpr auto get_eventMask = 0x183ED00;
		constexpr auto get_cameraType = 0x183EB90;
		constexpr auto GetLayerCullDistances = 0x183D920;
		constexpr auto SetLayerCullDistances_floatarray = 0x183E230;
		constexpr auto get_layerCullDistances = 0x183D920;
		constexpr auto set_layerCullDistances_floatarray = 0x183F740;
		constexpr auto get_backgroundColor = 0x183EB40;
		constexpr auto set_backgroundColor_Color = 0x183F540;
		constexpr auto get_clearFlags = 0x183EBD0;
		constexpr auto set_clearFlags_CameraClearFlags = 0x183F590;
		constexpr auto get_depthTextureMode = 0x183EC80;
		constexpr auto set_depthTextureMode_DepthTextureMode = 0x183F610;
		constexpr auto SetReplacementShader_Shader_string = 0x183E280;
		constexpr auto get_usePhysicalProperties = 0x183F310;
		constexpr auto set_usePhysicalProperties_bool = 0x183FC30;
		constexpr auto get_rect = 0x183F180;
		constexpr auto set_rect_Rect = 0x183FB00;
		constexpr auto get_pixelRect = 0x183EFF0;
		constexpr auto set_pixelRect_Rect = 0x183F9C0;
		constexpr auto get_pixelWidth = 0x183F040;
		constexpr auto get_pixelHeight = 0x183EF60;
		constexpr auto get_targetTexture = 0x183F2D0;
		constexpr auto set_targetTexture_RenderTexture = 0x183FB90;
		constexpr auto get_targetDisplay = 0x183F290;
		constexpr auto get_worldToCameraMatrix = 0x183F3A0;
		constexpr auto get_projectionMatrix = 0x183F0D0;
		constexpr auto set_projectionMatrix_Matrix4x4 = 0x183FA60;
		constexpr auto get_nonJitteredProjectionMatrix = 0x183EE80;
		constexpr auto set_nonJitteredProjectionMatrix_Matrix4x4 = 0x183F880;
		constexpr auto set_useJitteredProjectionMatrixForTransparentRendering_bool = 0x183FBE0;
		constexpr auto ResetProjectionMatrix = 0x183DE20;
		constexpr auto WorldToScreenPoint_Vector3_Camera_MonoOrStereoscopicEye = 0x183E780;
		constexpr auto WorldToViewportPoint_Vector3_Camera_MonoOrStereoscopicEye = 0x183E8F0;
		constexpr auto WorldToScreenPoint_Vector3 = 0x183E7F0;
		constexpr auto WorldToViewportPoint_Vector3 = 0x183E960;
		constexpr auto ScreenToViewportPoint_Vector3 = 0x183E1D0;
		constexpr auto ViewportToScreenPoint_Vector3 = 0x183E6B0;
		constexpr auto ViewportPointToRay_Vector2_Camera_MonoOrStereoscopicEye = 0x183E4F0;
		constexpr auto ViewportPointToRay_Vector3_Camera_MonoOrStereoscopicEye = 0x183E3F0;
		constexpr auto ViewportPointToRay_Vector3 = 0x183E560;
		constexpr auto ScreenPointToRay_Vector2_Camera_MonoOrStereoscopicEye = 0x183E100;
		constexpr auto ScreenPointToRay_Vector3_Camera_MonoOrStereoscopicEye = 0x183E000;
		constexpr auto ScreenPointToRay_Vector3 = 0x183DF10;
		constexpr auto CalculateFrustumCornersInternal_Rect_float_Camera_MonoOrStereoscopicEye_Vector3array = 0x183D460;
		constexpr auto CalculateFrustumCorners_Rect_float_Camera_MonoOrStereoscopicEye_Vector3array = 0x183D4D0;
		constexpr auto get_main = 0x183EDC0;
		constexpr auto get_current = 0x183EC50;
		constexpr auto get_stereoEnabled = 0x183F210;
		constexpr auto get_stereoTargetEye = 0x183F250;
		constexpr auto get_stereoActiveEye = 0x183F1D0;
		constexpr auto GetStereoNonJitteredProjectionMatrix_Camera_StereoscopicEye = 0x183D9B0;
		constexpr auto GetStereoViewMatrix_Camera_StereoscopicEye = 0x183DB30;
		constexpr auto CopyStereoDeviceProjectionMatrixToNonJittered_Camera_StereoscopicEye = 0x183D640;
		constexpr auto GetStereoProjectionMatrix_Camera_StereoscopicEye = 0x183DA70;
		constexpr auto SetStereoProjectionMatrix_Camera_StereoscopicEye_Matrix4x4 = 0x183E330;
		constexpr auto ResetStereoProjectionMatrices = 0x183DE60;
		constexpr auto GetAllCamerasCount = 0x183D790;
		constexpr auto GetAllCamerasImpl_Cameraarray = 0x183D7C0;
		constexpr auto get_allCamerasCount = 0x183D790;
		constexpr auto GetAllCameras_Cameraarray = 0x183D800;
		constexpr auto Render = 0x183DDE0;
		constexpr auto RenderWithShader_Shader_string = 0x183DD80;
		constexpr auto CopyFrom_Camera = 0x183D5F0;
		constexpr auto RemoveCommandBuffers_CameraEvent = 0x183DD40;
		constexpr auto RemoveAllCommandBuffers = 0x183DBA0;
		constexpr auto AddCommandBufferImpl_CameraEvent_CommandBuffer = 0x183D290;
		constexpr auto RemoveCommandBufferImpl_CameraEvent_CommandBuffer = 0x183DBE0;
		constexpr auto AddCommandBuffer_CameraEvent_CommandBuffer = 0x183D2E0;
		constexpr auto RemoveCommandBuffer_CameraEvent_CommandBuffer = 0x183DC30;
		constexpr auto GetCommandBuffers_CameraEvent = 0x183D8E0;
		constexpr auto FireOnPreCull_Camera = 0x183D6E0;
		constexpr auto FireOnPreRender_Camera = 0x183D730;
		constexpr auto FireOnPostRender_Camera = 0x183D680;
		constexpr auto _ctor = 0x183BF70;
		constexpr auto get_backgroundColor_Injected_Color = 0x183EAF0;
		constexpr auto set_backgroundColor_Injected_Color = 0x183F4F0;
		constexpr auto get_rect_Injected_Rect = 0x183F130;
		constexpr auto set_rect_Injected_Rect = 0x183FAB0;
		constexpr auto get_pixelRect_Injected_Rect = 0x183EFA0;
		constexpr auto set_pixelRect_Injected_Rect = 0x183F970;
		constexpr auto get_worldToCameraMatrix_Injected_Matrix4x4 = 0x183F350;
		constexpr auto get_projectionMatrix_Injected_Matrix4x4 = 0x183F080;
		constexpr auto set_projectionMatrix_Injected_Matrix4x4 = 0x183FA10;
		constexpr auto get_nonJitteredProjectionMatrix_Injected_Matrix4x4 = 0x183EE30;
		constexpr auto set_nonJitteredProjectionMatrix_Injected_Matrix4x4 = 0x183F830;
		constexpr auto WorldToScreenPoint_Injected_Vector3_Camera_MonoOrStereoscopicEye_Vector3 = 0x183E710;
		constexpr auto WorldToViewportPoint_Injected_Vector3_Camera_MonoOrStereoscopicEye_Vector3 = 0x183E880;
		constexpr auto ScreenToViewportPoint_Injected_Vector3_Vector3 = 0x183E170;
		constexpr auto ViewportToScreenPoint_Injected_Vector3_Vector3 = 0x183E650;
		constexpr auto ViewportPointToRay_Injected_Vector2_Camera_MonoOrStereoscopicEye_Ray = 0x183E380;
		constexpr auto ScreenPointToRay_Injected_Vector2_Camera_MonoOrStereoscopicEye_Ray = 0x183DEA0;
		constexpr auto CalculateFrustumCornersInternal_Injected_Rect_float_Camera_MonoOrStereoscopicEye_Vector3array = 0x183D3F0;
		constexpr auto GetStereoNonJitteredProjectionMatrix_Injected_Camera_StereoscopicEye_Matrix4x4 = 0x183D960;
		constexpr auto GetStereoViewMatrix_Injected_Camera_StereoscopicEye_Matrix4x4 = 0x183DAE0;
		constexpr auto GetStereoProjectionMatrix_Injected_Camera_StereoscopicEye_Matrix4x4 = 0x183DA20;
		constexpr auto SetStereoProjectionMatrix_Injected_Camera_StereoscopicEye_Matrix4x4 = 0x183E2E0;
	}

	namespace UnityEngine_Screen {
		// Methods
		constexpr auto get_width = 0x196BED0;
		constexpr auto get_height = 0x196BE70;
		constexpr auto get_dpi = 0x196BE10;
		constexpr auto get_currentResolution = 0x196BDD0;
		constexpr auto get_fullScreen = 0x196BE40;
		constexpr auto SetResolution_int_int_FullScreenMode_int = 0x196BCD0;
		constexpr auto SetResolution_int_int_FullScreenMode = 0x196BD30;
		constexpr auto get_resolutions = 0x196BEA0;
		constexpr auto get_currentResolution_Injected_Resolution = 0x196BD90;
	}

	namespace UnityEngine_Graphics {
		// Class
		constexpr auto UnityEngine_Graphics_TypeInfo = 0x3203B28;

		// Static Offsets
		constexpr auto kMaxDrawMeshInstanceCount = 0x148B0;

		// Methods
		constexpr auto Internal_GetMaxDrawMeshInstanceCount = 0x184B3B0;
		constexpr auto GetActiveColorBuffer = 0x184AD00;
		constexpr auto GetActiveDepthBuffer = 0x184ADC0;
		constexpr auto Internal_SetNullRT = 0x184B3E0;
		constexpr auto Internal_SetRTSimple_RenderBuffer_RenderBuffer_int_CubemapFace_int = 0x184B480;
		constexpr auto Internal_SetRandomWriteTargetBuffer_int_ComputeBuffer_bool = 0x184B530;
		constexpr auto ClearRandomWriteTargets = 0x18493B0;
		constexpr auto Internal_DrawMeshNow2_Mesh_int_Matrix4x4 = 0x184B100;
		constexpr auto Internal_DrawTexture_Internal_DrawTextureArguments = 0x184B370;
		constexpr auto Internal_DrawMesh_Mesh_int_Matrix4x4_Material_int_Camera_MaterialPropertyBlock_ShadowCastingMode_bool_Transform_LightProbeUsage_LightProbeProxyVolume = 0x184B210;
		constexpr auto Internal_DrawMeshInstancedIndirect_Mesh_int_Material_Bounds_ComputeBuffer_int_MaterialPropertyBlock_ShadowCastingMode_bool_int_Camera_LightProbeUsage_LightProbeProxyVolume = 0x184AFA0;
		constexpr auto Internal_DrawProceduralIndirectNow_MeshTopology_ComputeBuffer_int = 0x184B320;
		constexpr auto Internal_BlitMaterial5_Texture_RenderTexture_Material_int_bool = 0x184AE40;
		constexpr auto Internal_BlitMultiTap4_Texture_RenderTexture_Material_Vector2array = 0x184AEB0;
		constexpr auto Blit2_Texture_RenderTexture = 0x1848F00;
		constexpr auto ExecuteCommandBuffer_CommandBuffer = 0x184AC80;
		constexpr auto SetRenderTargetImpl_RenderBuffer_RenderBuffer_int_CubemapFace_int = 0x184B8D0;
		constexpr auto SetRenderTargetImpl_RenderTexture_int_CubemapFace_int = 0x184B9D0;
		constexpr auto SetRenderTarget_RenderTexture_int_CubemapFace_int = 0x184BC90;
		constexpr auto SetRenderTarget_RenderBuffer_RenderBuffer_int_CubemapFace_int = 0x184BE20;
		constexpr auto get_activeColorBuffer = 0x184C0A0;
		constexpr auto get_activeDepthBuffer = 0x184C170;
		constexpr auto SetRandomWriteTarget_int_ComputeBuffer_bool = 0x184B590;
		constexpr auto DrawTextureImpl_Rect_Texture_Rect_int_int_int_int_Color_Material_int = 0x184A590;
		constexpr auto DrawTexture_Rect_Texture_Rect_int_int_int_int_Material_int = 0x184A820;
		constexpr auto DrawTexture_Rect_Texture_int_int_int_int_Material_int = 0x184A710;
		constexpr auto DrawTexture_Rect_Texture_Material_int = 0x184A9F0;
		constexpr auto DrawMeshNow_Mesh_Matrix4x4_int = 0x18498A0;
		constexpr auto DrawMeshNow_Mesh_Matrix4x4 = 0x1849A00;
		constexpr auto DrawMesh_Mesh_Matrix4x4_Material_int_Camera_int_MaterialPropertyBlock_ShadowCastingMode_bool_Transform_LightProbeUsage_LightProbeProxyVolume = 0x184A2E0;
		constexpr auto DrawMeshInstancedIndirect_Mesh_int_Material_Bounds_ComputeBuffer_int_MaterialPropertyBlock_ShadowCastingMode_bool_int_Camera_LightProbeUsage_LightProbeProxyVolume = 0x18494F0;
		constexpr auto DrawProceduralIndirectNow_MeshTopology_ComputeBuffer_int = 0x184A4D0;
		constexpr auto Blit_Texture_RenderTexture = 0x1849250;
		constexpr auto Blit_Texture_RenderTexture_Material_int = 0x18491B0;
		constexpr auto Blit_Texture_RenderTexture_Material = 0x18492D0;
		constexpr auto Blit_Texture_Material_int = 0x1849110;
		constexpr auto Blit_Texture_Material = 0x1849040;
		constexpr auto BlitMultiTap_Texture_RenderTexture_Material_Vector2array = 0x1848F50;
		constexpr auto DrawMesh_Mesh_Vector3_Quaternion_Material_int_Camera_int_MaterialPropertyBlock_bool_bool = 0x184A050;
		constexpr auto DrawMesh_Mesh_Matrix4x4_Material_int = 0x1849ED0;
		constexpr auto DrawMesh_Mesh_Matrix4x4_Material_int_Camera_int_MaterialPropertyBlock = 0x1849B90;
		constexpr auto DrawMesh_Mesh_Matrix4x4_Material_int_Camera_int_MaterialPropertyBlock_bool_bool = 0x1849D20;
		constexpr auto DrawMeshInstancedIndirect_Mesh_int_Material_Bounds_ComputeBuffer_int_MaterialPropertyBlock_ShadowCastingMode_bool_int_Camera = 0x18493E0;
		constexpr auto DrawTexture_Rect_Texture = 0x184AB20;
		constexpr auto SetRenderTarget_RenderTexture = 0x184BF60;
		constexpr auto SetRenderTarget_RenderTexture_int = 0x184BFD0;
		constexpr auto SetRenderTarget_RenderBuffer_RenderBuffer = 0x184BB30;
		constexpr auto SetRandomWriteTarget_int_ComputeBuffer = 0x184B720;
		constexpr auto _cctor = 0x184C040;
		constexpr auto GetActiveColorBuffer_Injected_RenderBuffer = 0x184ACC0;
		constexpr auto GetActiveDepthBuffer_Injected_RenderBuffer = 0x184AD80;
		constexpr auto Internal_SetRTSimple_Injected_RenderBuffer_RenderBuffer_int_CubemapFace_int = 0x184B410;
		constexpr auto Internal_DrawMeshNow2_Injected_Mesh_int_Matrix4x4 = 0x184B0B0;
		constexpr auto Internal_DrawMesh_Injected_Mesh_int_Matrix4x4_Material_int_Camera_MaterialPropertyBlock_ShadowCastingMode_bool_Transform_LightProbeUsage_LightProbeProxyVolume = 0x184B190;
		constexpr auto Internal_DrawMeshInstancedIndirect_Injected_Mesh_int_Material_Bounds_ComputeBuffer_int_MaterialPropertyBlock_ShadowCastingMode_bool_int_Camera_LightProbeUsage_LightProbeProxyVolume = 0x184AF20;
	}

	namespace UnityEngine_GL {
		// Methods
		constexpr auto Vertex3_float_float_float = 0x1846F80;
		constexpr auto Vertex_Vector3 = 0x1846FE0;
		constexpr auto TexCoord3_float_float_float = 0x1846F20;
		constexpr auto TexCoord2_float_float = 0x1846ED0;
		constexpr auto MultiTexCoord3_int_float_float_float = 0x1846E00;
		constexpr auto MultiTexCoord2_int_float_float = 0x1846DA0;
		constexpr auto ImmediateColor_float_float_float_float = 0x1846AE0;
		constexpr auto Color_Color = 0x18467B0;
		constexpr auto get_sRGBWrite = 0x1847040;
		constexpr auto set_sRGBWrite_bool = 0x1847070;
		constexpr auto Flush = 0x1846840;
		constexpr auto MultMatrix_Matrix4x4 = 0x1846D60;
		constexpr auto PushMatrix = 0x1846EA0;
		constexpr auto PopMatrix = 0x1846E70;
		constexpr auto LoadIdentity = 0x1846C10;
		constexpr auto LoadOrtho = 0x1846C40;
		constexpr auto LoadPixelMatrix = 0x1846C70;
		constexpr auto LoadProjectionMatrix_Matrix4x4 = 0x1846CE0;
		constexpr auto GetGPUProjectionMatrix_Matrix4x4_bool = 0x1846A70;
		constexpr auto GLLoadPixelMatrixScript_float_float_float_float = 0x1846990;
		constexpr auto LoadPixelMatrix_float_float_float_float = 0x1846990;
		constexpr auto GLIssuePluginEvent_IntPtr_int = 0x1846950;
		constexpr auto IssuePluginEvent_IntPtr_int = 0x1846B60;
		constexpr auto Begin_int = 0x18466C0;
		constexpr auto End = 0x1846810;
		constexpr auto GLClear_bool_bool_Color_float = 0x18468E0;
		constexpr auto Clear_bool_bool_Color = 0x1846750;
		constexpr auto ClearWithSkybox_bool_Camera = 0x1846700;
		constexpr auto MultMatrix_Injected_Matrix4x4 = 0x1846D20;
		constexpr auto LoadProjectionMatrix_Injected_Matrix4x4 = 0x1846CA0;
		constexpr auto GetGPUProjectionMatrix_Injected_Matrix4x4_bool_Matrix4x4 = 0x1846A10;
		constexpr auto GLClear_Injected_bool_bool_Color_float = 0x1846870;
	}

	namespace UnityEngine_Material {
		// Class
		constexpr auto UnityEngine_Material_TypeInfo = 0x31F6588;

		// Methods
		constexpr auto CreateWithShader_Material_Shader = 0x1902C70;
		constexpr auto CreateWithMaterial_Material_Material = 0x1902C20;
		constexpr auto CreateWithString_Material = 0x1902CC0;
		constexpr auto _ctor_Shader = 0x1904220;
		constexpr auto _ctor_Material = 0x1904110;
		constexpr auto _ctor_string = 0x19041A0;
		constexpr auto get_shader = 0x19044E0;
		constexpr auto set_shader_Shader = 0x1904670;
		constexpr auto get_color = 0x19042B0;
		constexpr auto set_color_Color = 0x1904520;
		constexpr auto get_mainTexture = 0x19043C0;
		constexpr auto GetFirstPropertyNameIdByAttribute_ShaderPropertyFlags = 0x1902F90;
		constexpr auto HasProperty_int = 0x19034A0;
		constexpr auto HasProperty_string = 0x1903450;
		constexpr auto get_renderQueue = 0x19044A0;
		constexpr auto set_renderQueue_int = 0x1904630;
		constexpr auto EnableKeyword_string = 0x1902D50;
		constexpr auto DisableKeyword_string = 0x1902D00;
		constexpr auto IsKeywordEnabled_string = 0x19034E0;
		constexpr auto get_enableInstancing = 0x1904380;
		constexpr auto set_enableInstancing_bool = 0x19045E0;
		constexpr auto get_passCount = 0x1904460;
		constexpr auto GetShaderPassEnabled_string = 0x19030E0;
		constexpr auto GetPassName_int = 0x1903060;
		constexpr auto FindPass_string = 0x1902DA0;
		constexpr auto SetOverrideTag_string_string = 0x1903C70;
		constexpr auto GetTagImpl_string_bool_string = 0x1903130;
		constexpr auto GetTag_string_bool_string = 0x1903230;
		constexpr auto GetTag_string_bool = 0x19031A0;
		constexpr auto SetPass_int = 0x1903CD0;
		constexpr auto CopyPropertiesFromMaterial_Material = 0x1902BD0;
		constexpr auto GetShaderKeywords = 0x19030A0;
		constexpr auto SetShaderKeywords_stringarray = 0x1903D10;
		constexpr auto get_shaderKeywords = 0x19030A0;
		constexpr auto set_shaderKeywords_stringarray = 0x1903D10;
		constexpr auto SetFloatImpl_int_float = 0x19039C0;
		constexpr auto SetColorImpl_int_Color = 0x1903630;
		constexpr auto SetMatrixImpl_int_Matrix4x4 = 0x1903B30;
		constexpr auto SetTextureImpl_int_Texture = 0x1903D60;
		constexpr auto SetBufferImpl_int_ComputeBuffer = 0x1903530;
		constexpr auto GetFloatImpl_int = 0x1902FD0;
		constexpr auto GetColorImpl_int = 0x1902E40;
		constexpr auto GetTextureImpl_int = 0x19032A0;
		constexpr auto SetFloatArrayImpl_int_floatarray_int = 0x1903730;
		constexpr auto SetTextureOffsetImpl_int_Vector2 = 0x1903E00;
		constexpr auto SetTextureScaleImpl_int_Vector2 = 0x1903F00;
		constexpr auto SetFloatArray_int_floatarray_int = 0x1903890;
		constexpr auto SetFloat_string_float = 0x1903A10;
		constexpr auto SetFloat_int_float = 0x19039C0;
		constexpr auto SetInt_string_int = 0x1903A70;
		constexpr auto SetColor_string_Color = 0x19036D0;
		constexpr auto SetColor_int_Color = 0x1903680;
		constexpr auto SetVector_string_Vector4 = 0x1904010;
		constexpr auto SetVector_int_Vector4 = 0x19040A0;
		constexpr auto SetMatrix_string_Matrix4x4 = 0x1903BF0;
		constexpr auto SetMatrix_int_Matrix4x4 = 0x1903B80;
		constexpr auto SetTexture_string_Texture = 0x1903FB0;
		constexpr auto SetTexture_int_Texture = 0x1903D60;
		constexpr auto SetBuffer_string_ComputeBuffer = 0x1903580;
		constexpr auto SetFloatArray_int_floatarray = 0x1903790;
		constexpr auto GetFloat_string = 0x1903010;
		constexpr auto GetFloat_int = 0x1902FD0;
		constexpr auto GetColor_string = 0x1902F10;
		constexpr auto GetColor_int = 0x1902EA0;
		constexpr auto GetVector_string = 0x1903330;
		constexpr auto GetVector_int = 0x19033C0;
		constexpr auto GetTexture_string = 0x19032E0;
		constexpr auto GetTexture_int = 0x19032A0;
		constexpr auto SetTextureOffset_string_Vector2 = 0x1903E50;
		constexpr auto SetTextureScale_string_Vector2 = 0x1903F50;
		constexpr auto SetColorImpl_Injected_int_Color = 0x19035E0;
		constexpr auto SetMatrixImpl_Injected_int_Matrix4x4 = 0x1903AE0;
		constexpr auto GetColorImpl_Injected_int_Color = 0x1902DF0;
		constexpr auto SetTextureOffsetImpl_Injected_int_Vector2 = 0x1903DB0;
		constexpr auto SetTextureScaleImpl_Injected_int_Vector2 = 0x1903EB0;
	}

	namespace UnityEngine_Texture2D {
		// Class
		constexpr auto UnityEngine_Texture2D_TypeInfo = 0x31FA580;

		// Methods
		constexpr auto get_format = 0x20E8390;
		constexpr auto get_whiteTexture = 0x20E8410;
		constexpr auto get_blackTexture = 0x20E8360;
		constexpr auto Compress_bool = 0x20E6B80;
		constexpr auto Internal_CreateImpl_Texture2D_int_int_int_GraphicsFormat_TextureCreationFlags_IntPtr = 0x20E7210;
		constexpr auto Internal_Create_Texture2D_int_int_int_GraphicsFormat_TextureCreationFlags_IntPtr = 0x20E7270;
		constexpr auto get_isReadable = 0x20E83D0;
		constexpr auto ApplyImpl_bool_bool = 0x20E69D0;
		constexpr auto ResizeImpl_int_int = 0x20E7740;
		constexpr auto SetPixelImpl_int_int_int_Color = 0x20E7A80;
		constexpr auto GetPixelImpl_int_int_int = 0x20E6DF0;
		constexpr auto GetPixelBilinearImpl_int_float_float = 0x20E6C30;
		constexpr auto ResizeWithFormatImpl_int_int_TextureFormat_bool = 0x20E7790;
		constexpr auto ReadPixelsImpl_Rect_int_int_bool = 0x20E7530;
		constexpr auto SetPixelsImpl_int_int_int_int_Colorarray_int_int = 0x20E7C80;
		constexpr auto LoadRawTextureDataImpl_IntPtr_int = 0x20E7340;
		constexpr auto GetWritableImageData_int = 0x20E71D0;
		constexpr auto GetRawImageDataSize = 0x20E7190;
		constexpr auto set_requestedMipmapLevel_int = 0x20E8480;
		constexpr auto set_minimumMipmapLevel_int = 0x20E8440;
		constexpr auto ClearRequestedMipmapLevel = 0x20E6B40;
		constexpr auto ClearMinimumMipmapLevel = 0x20E6B00;
		constexpr auto SetAllPixels32_Color32array_int = 0x20E7960;
		constexpr auto SetBlockOfPixels32_int_int_int_int_Color32array_int = 0x20E79C0;
		constexpr auto GetPixels_int_int_int_int_int = 0x20E7090;
		constexpr auto GetPixels32_int = 0x20E6F90;
		constexpr auto GetPixels32 = 0x20E6F50;
		constexpr auto _ctor_int_int_GraphicsFormat_TextureCreationFlags_int_IntPtr = 0x20E81A0;
		constexpr auto _ctor_int_int_GraphicsFormat_TextureCreationFlags = 0x20E8000;
		constexpr auto _ctor_int_int_TextureFormat_int_bool_IntPtr = 0x20E8260;
		constexpr auto _ctor_int_int_TextureFormat_bool_bool = 0x20E7EC0;
		constexpr auto _ctor_int_int_TextureFormat_bool = 0x20E8110;
		constexpr auto _ctor_int_int = 0x20E7F60;
		constexpr auto SetPixel_int_int_Color = 0x20E7AF0;
		constexpr auto SetPixels_int_int_int_int_Colorarray_int = 0x20E7CE0;
		constexpr auto SetPixels_Colorarray_int = 0x20E7E10;
		constexpr auto SetPixels_Colorarray = 0x20E7DA0;
		constexpr auto GetPixel_int_int = 0x20E6E70;
		constexpr auto GetPixelBilinear_float_float = 0x20E6CB0;
		constexpr auto LoadRawTextureData_IntPtr_int = 0x20E73A0;
		constexpr auto Apply_bool_bool = 0x20E6A50;
		constexpr auto Apply_bool = 0x20E6A40;
		constexpr auto Apply = 0x20E6A30;
		constexpr auto Resize_int_int = 0x20E78C0;
		constexpr auto Resize_int_int_TextureFormat_bool = 0x20E7800;
		constexpr auto ReadPixels_Rect_int_int_bool = 0x20E7670;
		constexpr auto ReadPixels_Rect_int_int = 0x20E75A0;
		constexpr auto SetPixels32_Color32array_int = 0x20E7960;
		constexpr auto SetPixels32_Color32array = 0x20E7C30;
		constexpr auto SetPixels32_int_int_int_int_Color32array_int = 0x20E79C0;
		constexpr auto SetPixels32_int_int_int_int_Color32array = 0x20E7BC0;
		constexpr auto GetPixels_int = 0x20E6FD0;
		constexpr auto GetPixels = 0x20E70F0;
		constexpr auto SetPixelImpl_Injected_int_int_int_Color = 0x20E7A20;
		constexpr auto GetPixelImpl_Injected_int_int_int_Color = 0x20E6D90;
		constexpr auto GetPixelBilinearImpl_Injected_int_float_float_Color = 0x20E6BD0;
		constexpr auto ReadPixelsImpl_Injected_Rect_int_int_bool = 0x20E74C0;
	}

	namespace UnityEngine_Matrix4x4 {
		// Class
		constexpr auto UnityEngine_Matrix4x4_TypeInfo = 0x3203AE0;

		// Offsets
		constexpr auto m00 = 0x0;
		constexpr auto m10 = 0x4;
		constexpr auto m20 = 0x8;
		constexpr auto m30 = 0xC;
		constexpr auto m01 = 0x10;
		constexpr auto m11 = 0x14;
		constexpr auto m21 = 0x18;
		constexpr auto m31 = 0x1C;
		constexpr auto m02 = 0x20;
		constexpr auto m12 = 0x24;
		constexpr auto m22 = 0x28;
		constexpr auto m32 = 0x2C;
		constexpr auto m03 = 0x30;
		constexpr auto m13 = 0x34;
		constexpr auto m23 = 0x38;
		constexpr auto m33 = 0x3C;

		// Static Offsets
		constexpr auto zeroMatrix = 0x0;
		constexpr auto identityMatrix = 0x40;

		// Methods
		constexpr auto GetRotation = 0x217950;
		constexpr auto GetLossyScale = 0x217930;
		constexpr auto DecomposeProjection = 0x217620;
		constexpr auto get_rotation = 0x2183D0;
		constexpr auto get_lossyScale = 0x218320;
		constexpr auto get_decomposeProjection = 0x2180F0;
		constexpr auto TRS_Vector3_Quaternion_Vector3 = 0x1907670;
		constexpr auto SetTRS_Vector3_Quaternion_Vector3 = 0x217EA0;
		constexpr auto Inverse_Matrix4x4 = 0x1906D30;
		constexpr auto get_inverse = 0x2181A0;
		constexpr auto Transpose_Matrix4x4 = 0x1907FC0;
		constexpr auto get_transpose = 0x218470;
		constexpr auto Ortho_float_float_float_float_float_float = 0x19070E0;
		constexpr auto Perspective_float_float_float_float = 0x1907240;
		constexpr auto Frustum_float_float_float_float_float_float = 0x1906620;
		constexpr auto Frustum_FrustumPlanes = 0x19064A0;
		constexpr auto _ctor_Vector4_Vector4_Vector4_Vector4 = 0x218010;
		constexpr auto get_Item_int_int = 0x2180C0;
		constexpr auto set_Item_int_int_float = 0x218600;
		constexpr auto get_Item_int = 0x2180E0;
		constexpr auto set_Item_int_float = 0x2185F0;
		constexpr auto GetHashCode = 0x217750;
		constexpr auto Equals_object = 0x217640;
		constexpr auto Equals_Matrix4x4 = 0x2176F0;
		constexpr auto op_Multiply_Matrix4x4_Matrix4x4 = 0x1908CA0;
		constexpr auto op_Multiply_Matrix4x4_Vector4 = 0x1908B00;
		constexpr auto GetColumn_int = 0x217730;
		constexpr auto GetRow_int = 0x217970;
		constexpr auto SetColumn_int_Vector4 = 0x217DA0;
		constexpr auto SetRow_int_Vector4 = 0x217E20;
		constexpr auto MultiplyPoint_Vector3 = 0x217BC0;
		constexpr auto MultiplyPoint3x4_Vector3 = 0x217B00;
		constexpr auto MultiplyVector_Vector3 = 0x217CF0;
		constexpr auto Scale_Vector3 = 0x1907300;
		constexpr auto Translate_Vector3 = 0x1907ED0;
		constexpr auto get_identity = 0x1908620;
		constexpr auto ToString = 0x218000;
		constexpr auto _cctor = 0x1908050;
		constexpr auto GetRotation_Injected_Matrix4x4_Quaternion = 0x1906AE0;
		constexpr auto GetLossyScale_Injected_Matrix4x4_Vector3 = 0x1906A00;
		constexpr auto DecomposeProjection_Injected_Matrix4x4_FrustumPlanes = 0x1905F70;
		constexpr auto TRS_Injected_Vector3_Quaternion_Vector3_Matrix4x4 = 0x1907600;
		constexpr auto Inverse_Injected_Matrix4x4_Matrix4x4 = 0x1906CE0;
		constexpr auto Transpose_Injected_Matrix4x4_Matrix4x4 = 0x1907F70;
		constexpr auto Ortho_Injected_float_float_float_float_float_float_Matrix4x4 = 0x1907060;
		constexpr auto Perspective_Injected_float_float_float_float_Matrix4x4 = 0x19071C0;
		constexpr auto Frustum_Injected_float_float_float_float_float_float_Matrix4x4 = 0x1906420;
	}

	namespace UnityEngine_Quaternion {
		// Class
		constexpr auto UnityEngine_Quaternion_TypeInfo = 0x3203E68;

		// Offsets
		constexpr auto x = 0x0;
		constexpr auto y = 0x4;
		constexpr auto z = 0x8;
		constexpr auto w = 0xC;

		// Static Offsets
		constexpr auto identityQuaternion = 0x0;

		// Methods
		constexpr auto FromToRotation_Vector3_Vector3 = 0x19146C0;
		constexpr auto Inverse_Quaternion = 0x1914AB0;
		constexpr auto Slerp_Quaternion_Quaternion_float = 0x1915530;
		constexpr auto SlerpUnclamped_Quaternion_Quaternion_float = 0x1915410;
		constexpr auto Lerp_Quaternion_Quaternion_float = 0x1914CE0;
		constexpr auto LerpUnclamped_Quaternion_Quaternion_float = 0x1914BC0;
		constexpr auto Internal_FromEulerRad_Vector3 = 0x1914820;
		constexpr auto Internal_ToEulerRad_Quaternion = 0x19149D0;
		constexpr auto AngleAxis_float_Vector3 = 0x19140A0;
		constexpr auto LookRotation_Vector3_Vector3 = 0x1914F40;
		constexpr auto LookRotation_Vector3 = 0x1914DF0;
		constexpr auto _ctor_float_float_float_float = 0xF16D0;
		constexpr auto get_identity = 0x1915A30;
		constexpr auto op_Multiply_Quaternion_Quaternion = 0x1915E50;
		constexpr auto op_Multiply_Quaternion_Vector3 = 0x1915C60;
		constexpr auto IsEqualUsingDot_float = 0x1914B40;
		constexpr auto op_Equality_Quaternion_Quaternion = 0x1915AA0;
		constexpr auto op_Inequality_Quaternion_Quaternion = 0x1915B60;
		constexpr auto Dot_Quaternion_Quaternion = 0x1914260;
		constexpr auto SetLookRotation_Vector3_Vector3 = 0x2194B0;
		constexpr auto Angle_Quaternion_Quaternion = 0x1914140;
		constexpr auto Internal_MakePositive_Vector3 = 0x19148B0;
		constexpr auto get_eulerAngles = 0x2195D0;
		constexpr auto Euler_float_float_float = 0x1914390;
		constexpr auto Euler_Vector3 = 0x1914520;
		constexpr auto RotateTowards_Quaternion_Quaternion_float = 0x1914FE0;
		constexpr auto GetHashCode = 0x219440;
		constexpr auto Equals_object = 0x219360;
		constexpr auto Equals_Quaternion = 0x215570;
		constexpr auto ToString = 0x2195C0;
		constexpr auto _cctor = 0x1915820;
		constexpr auto FromToRotation_Injected_Vector3_Vector3_Quaternion = 0x1914660;
		constexpr auto Inverse_Injected_Quaternion_Quaternion = 0x1914A60;
		constexpr auto Slerp_Injected_Quaternion_Quaternion_float_Quaternion = 0x19154C0;
		constexpr auto SlerpUnclamped_Injected_Quaternion_Quaternion_float_Quaternion = 0x19153A0;
		constexpr auto Lerp_Injected_Quaternion_Quaternion_float_Quaternion = 0x1914C70;
		constexpr auto LerpUnclamped_Injected_Quaternion_Quaternion_float_Quaternion = 0x1914B50;
		constexpr auto Internal_FromEulerRad_Injected_Vector3_Quaternion = 0x19147D0;
		constexpr auto Internal_ToEulerRad_Injected_Quaternion_Vector3 = 0x1914980;
		constexpr auto AngleAxis_Injected_float_Vector3_Quaternion = 0x1914040;
		constexpr auto LookRotation_Injected_Vector3_Vector3_Quaternion = 0x1914D90;
	}

	namespace UnityEngine_Mathf {
		// Class
		constexpr auto UnityEngine_Mathf_TypeInfo = 0x32044A0;

		// Static Offsets
		constexpr auto Epsilon = 0x2A7934C;

		// Methods
		constexpr auto ClosestPowerOfTwo_int = 0x1904AE0;
		constexpr auto IsPowerOfTwo_int = 0x1904F00;
		constexpr auto NextPowerOfTwo_int = 0x19056D0;
		constexpr auto GammaToLinearSpace_float = 0x1904DD0;
		constexpr auto LinearToGammaSpace_float = 0x1905160;
		constexpr auto FloatToHalf_float = 0x1904CD0;
		constexpr auto HalfToFloat_ushort = 0x1904E10;
		constexpr auto PerlinNoise_float_float = 0x1905710;
		constexpr auto Sin_float = 0x1905960;
		constexpr auto Cos_float = 0x1904B20;
		constexpr auto Tan_float = 0x1905E40;
		constexpr auto Asin_float = 0x1904880;
		constexpr auto Acos_float = 0x1904770;
		constexpr auto Atan_float = 0x1904960;
		constexpr auto Atan2_float_float = 0x19048E0;
		constexpr auto Sqrt_float = 0x1905DE0;
		constexpr auto Abs_float = 0x1904710;
		constexpr auto Abs_int = 0x19046C0;
		constexpr auto Min_float_float = 0x1905370;
		constexpr auto Min_int_int = 0x1905360;
		constexpr auto Max_float_float = 0x19052E0;
		constexpr auto Max_floatarray = 0x1905300;
		constexpr auto Max_int_int = 0x19052F0;
		constexpr auto Pow_float_float = 0x1905760;
		constexpr auto Exp_float = 0x1904C70;
		constexpr auto Log_float_float = 0x1905260;
		constexpr auto Log_float = 0x1905200;
		constexpr auto Log10_float = 0x19051A0;
		constexpr auto Ceil_float = 0x1904A20;
		constexpr auto Floor_float = 0x1904D70;
		constexpr auto Round_float = 0x19058E0;
		constexpr auto CeilToInt_float = 0x19049C0;
		constexpr auto FloorToInt_float = 0x1904D10;
		constexpr auto RoundToInt_float = 0x1905880;
		constexpr auto Sign_float = 0x1905940;
		constexpr auto Clamp_float_float_float = 0x1904AA0;
		constexpr auto Clamp_int_int_int = 0x1904AC0;
		constexpr auto Clamp01_float = 0x1904A80;
		constexpr auto Lerp_float_float_float = 0x19050C0;
		constexpr auto LerpUnclamped_float_float_float = 0x19050A0;
		constexpr auto LerpAngle_float_float_float = 0x1904F40;
		constexpr auto MoveTowards_float_float_float = 0x19055E0;
		constexpr auto MoveTowardsAngle_float_float_float = 0x1905380;
		constexpr auto SmoothStep_float_float_float = 0x1905D20;
		constexpr auto Approximately_float_float = 0x19047D0;
		constexpr auto SmoothDamp_float_float_float_float = 0x1905B50;
		constexpr auto SmoothDamp_float_float_float_float_float_float = 0x19059C0;
		constexpr auto Repeat_float_float = 0x19057E0;
		constexpr auto InverseLerp_float_float_float = 0x1904E50;
		constexpr auto DeltaAngle_float_float = 0x1904B80;
		constexpr auto _cctor = 0x1905EA0;
	}

	namespace UnityEngine_Random {
		// Methods
		constexpr auto InitState_int = 0x1916200;
		constexpr auto get_state = 0x19164D0;
		constexpr auto set_state_Random_State = 0x1916580;
		constexpr auto Range_float_float = 0x1916280;
		constexpr auto Range_int_int = 0x1916240;
		constexpr auto RandomRangeInt_int_int = 0x1916240;
		constexpr auto get_value = 0x1916510;
		constexpr auto get_insideUnitSphere = 0x1916350;
		constexpr auto GetRandomUnitCircle_Vector2 = 0x19161C0;
		constexpr auto get_insideUnitCircle = 0x19162D0;
		constexpr auto get_onUnitSphere = 0x19163D0;
		constexpr auto get_rotation = 0x1916450;
		constexpr auto RandomRange_int_int = 0x1916240;
		constexpr auto ColorHSV_float_float_float_float_float_float_float_float = 0x1916000;
		constexpr auto get_state_Injected_Random_State = 0x1916490;
		constexpr auto set_state_Injected_Random_State = 0x1916540;
		constexpr auto get_insideUnitSphere_Injected_Vector3 = 0x1916310;
		constexpr auto get_onUnitSphere_Injected_Vector3 = 0x1916390;
		constexpr auto get_rotation_Injected_Quaternion = 0x1916410;
	}

	namespace UnityEngine_Component {
		// Methods
		constexpr auto get_transform = 0x1841A20;
		constexpr auto get_gameObject = 0x18419E0;
		constexpr auto GetComponent_Type = 0x18415C0;
		constexpr auto GetComponentFastPath_Type_IntPtr = 0x1841450;
		constexpr auto GetComponentInChildren_Type_bool = 0x18414B0;
		constexpr auto GetComponentsInChildren_Type = 0x18416A0;
		constexpr auto GetComponentInParent_Type = 0x1841540;
		constexpr auto GetComponents_Type = 0x1841700;
		constexpr auto GetComponentsForListInternal_Type_object = 0x1841640;
		constexpr auto GetComponents_Type_List_Component_ = 0x1841640;
		constexpr auto CompareTag_string = 0x18413D0;
		constexpr auto SendMessageUpwards_string_object_SendMessageOptions = 0x18417F0;
		constexpr auto SendMessage_string_object = 0x1841930;
		constexpr auto SendMessage_string = 0x1841990;
		constexpr auto SendMessage_string_object_SendMessageOptions = 0x18418C0;
		constexpr auto SendMessage_string_SendMessageOptions = 0x1841860;
		constexpr auto BroadcastMessage_string_object_SendMessageOptions = 0x1841360;
		constexpr auto BroadcastMessage_string = 0x1841310;
		constexpr auto BroadcastMessage_string_SendMessageOptions = 0x18412B0;
		constexpr auto _ctor = 0x183BF70;
	}

	namespace UnityEngine_GameObject {
		// Class
		constexpr auto UnityEngine_GameObject_TypeInfo = 0x32018C0;

		// Methods
		constexpr auto CreatePrimitive_PrimitiveType = 0x1847280;
		constexpr auto GetComponent_Type = 0x1847410;
		constexpr auto GetComponentFastPath_Type_IntPtr = 0x1847300;
		constexpr auto GetComponentInChildren_Type_bool = 0x1847360;
		constexpr auto GetComponentInParent_Type = 0x18473C0;
		constexpr auto GetComponentsInternal_Type_bool_bool_bool_bool_object = 0x1847530;
		constexpr auto GetComponents_Type = 0x18475B0;
		constexpr auto GetComponentsInChildren_Type = 0x1847460;
		constexpr auto GetComponentsInChildren_Type_bool = 0x1847470;
		constexpr auto TryGetComponentFastPath_Type_IntPtr = 0x1847880;
		constexpr auto SendMessage_string_SendMessageOptions = 0x18476B0;
		constexpr auto BroadcastMessage_string_SendMessageOptions = 0x1847160;
		constexpr auto Internal_AddComponentWithType_Type = 0x18470B0;
		constexpr auto AddComponent_Type = 0x18470B0;
		constexpr auto get_transform = 0x1847C30;
		constexpr auto get_layer = 0x1847BB0;
		constexpr auto set_layer_int = 0x1847CC0;
		constexpr auto SetActive_bool = 0x1847830;
		constexpr auto get_activeSelf = 0x1847B30;
		constexpr auto get_activeInHierarchy = 0x1847AF0;
		constexpr auto get_isStatic = 0x1847B70;
		constexpr auto set_isStatic_bool = 0x1847C70;
		constexpr auto get_tag = 0x1847BF0;
		constexpr auto set_tag_string = 0x1847D00;
		constexpr auto CompareTag_string = 0x1847230;
		constexpr auto SendMessage_string_object_SendMessageOptions = 0x18477C0;
		constexpr auto SendMessage_string_object = 0x1847760;
		constexpr auto SendMessage_string = 0x1847710;
		constexpr auto BroadcastMessage_string_object_SendMessageOptions = 0x18471C0;
		constexpr auto BroadcastMessage_string_object = 0x1847100;
		constexpr auto _ctor_string = 0x1847A60;
		constexpr auto _ctor = 0x18479E0;
		constexpr auto _ctor_string_Typearray = 0x18478E0;
		constexpr auto Internal_CreateGameObject_GameObject_string = 0x1847660;
		constexpr auto Find_string = 0x18472C0;
		constexpr auto get_gameObject = 0xE82A60;
	}

	namespace UnityEngine_Object {
		// Class
		constexpr auto UnityEngine_Object_TypeInfo = 0x3204970;

		// Offsets
		constexpr auto m_CachedPtr = 0x10;

		// Static Offsets
		constexpr auto OffsetOfInstanceIDInCPlusPlusObject = 0x0;

		// Methods
		constexpr auto GetInstanceID = 0x190EC20;
		constexpr auto GetHashCode = 0x190EC10;
		constexpr auto Equals_object = 0x190E830;
		constexpr auto op_Implicit_Object = 0x190FC20;
		constexpr auto CompareBaseObjects_Object_Object = 0x190E540;
		constexpr auto IsNativeObjectAlive_Object = 0x190F870;
		constexpr auto GetCachedPtr = 0x183A000;
		constexpr auto get_name = 0x190FA40;
		constexpr auto set_name_string = 0x190FEA0;
		constexpr auto Instantiate_Object_Vector3_Quaternion = 0x190F400;
		constexpr auto Instantiate_Object = 0x190EDC0;
		constexpr auto Instantiate_Object_Transform_bool = 0x190EF80;
		constexpr auto Destroy_Object_float = 0x190E730;
		constexpr auto Destroy_Object = 0x190E780;
		constexpr auto DestroyImmediate_Object_bool = 0x190E6E0;
		constexpr auto DestroyImmediate_Object = 0x190E670;
		constexpr auto FindObjectsOfType_Type = 0x190EBD0;
		constexpr auto DontDestroyOnLoad_Object = 0x190E7F0;
		constexpr auto get_hideFlags = 0x190FA00;
		constexpr auto set_hideFlags_HideFlags = 0x190FE60;
		constexpr auto CheckNullArgument_object_string = 0x190E4D0;
		constexpr auto FindObjectOfType_Type = 0x190EB40;
		constexpr auto ToString = 0x190F910;
		constexpr auto op_Equality_Object_Object = 0x190FAB0;
		constexpr auto op_Inequality_Object_Object = 0x190FCF0;
		constexpr auto GetOffsetOfInstanceIDInCPlusPlusObject = 0x190ED90;
		constexpr auto Internal_CloneSingle_Object = 0x190F740;
		constexpr auto Internal_CloneSingleWithParent_Object_Transform_bool = 0x190F6E0;
		constexpr auto Internal_InstantiateSingle_Object_Vector3_Quaternion = 0x190F7E0;
		constexpr auto ToString_Object = 0x190F980;
		constexpr auto GetName_Object = 0x190ED50;
		constexpr auto SetName_Object_string = 0x190F8C0;
		constexpr auto FindObjectFromInstanceID_int = 0x190EB00;
		constexpr auto _ctor = 0x3049C0;
		constexpr auto _cctor = 0x190F9C0;
		constexpr auto Internal_InstantiateSingle_Injected_Object_Vector3_Quaternion = 0x190F780;
	}

	namespace UnityEngine_Time {
		// Methods
		constexpr auto get_time = 0x20E8FB0;
		constexpr auto get_deltaTime = 0x20E8E00;
		constexpr auto get_fixedTime = 0x20E8E60;
		constexpr auto get_unscaledTime = 0x20E9010;
		constexpr auto get_unscaledDeltaTime = 0x20E8FE0;
		constexpr auto get_fixedDeltaTime = 0x20E8E30;
		constexpr auto set_fixedDeltaTime_float = 0x20E9040;
		constexpr auto get_maximumDeltaTime = 0x20E8EC0;
		constexpr auto set_maximumDeltaTime_float = 0x20E9080;
		constexpr auto get_smoothDeltaTime = 0x20E8F50;
		constexpr auto get_timeScale = 0x20E8F80;
		constexpr auto set_timeScale_float = 0x20E90C0;
		constexpr auto get_frameCount = 0x20E8E90;
		constexpr auto get_renderedFrameCount = 0x20E8F20;
		constexpr auto get_realtimeSinceStartup = 0x20E8EF0;
	}

	namespace UnityEngine_Transform {
		// Class
		constexpr auto UnityEngine_Transform_TypeInfo = 0x31EE9B0;

		// Methods
		constexpr auto _ctor = 0x190E330;
		constexpr auto get_position = 0x20EBE50;
		constexpr auto set_position_Vector3 = 0x20EC7D0;
		constexpr auto get_localPosition = 0x20EBB20;
		constexpr auto set_localPosition_Vector3 = 0x20EC540;
		constexpr auto get_eulerAngles = 0x20EB820;
		constexpr auto set_eulerAngles_Vector3 = 0x20EC290;
		constexpr auto get_localEulerAngles = 0x20EBA40;
		constexpr auto set_localEulerAngles_Vector3 = 0x20EC440;
		constexpr auto get_right = 0x20EBEA0;
		constexpr auto set_right_Vector3 = 0x20EC820;
		constexpr auto get_up = 0x20EC090;
		constexpr auto set_up_Vector3 = 0x20ECA10;
		constexpr auto get_forward = 0x20EB8B0;
		constexpr auto set_forward_Vector3 = 0x20EC340;
		constexpr auto get_rotation = 0x20EC040;
		constexpr auto set_rotation_Quaternion = 0x20EC9C0;
		constexpr auto get_localRotation = 0x20EBBC0;
		constexpr auto set_localRotation_Quaternion = 0x20EC5E0;
		constexpr auto get_localScale = 0x20EBC60;
		constexpr auto set_localScale_Vector3 = 0x20EC680;
		constexpr auto get_parent = 0x20EA240;
		constexpr auto set_parent_Transform = 0x20EC6D0;
		constexpr auto get_parentInternal = 0x20EA240;
		constexpr auto set_parentInternal_Transform = 0x20EB220;
		constexpr auto GetParent = 0x20EA240;
		constexpr auto SetParent_Transform = 0x20EB220;
		constexpr auto SetParent_Transform_bool = 0x20EB1C0;
		constexpr auto get_worldToLocalMatrix = 0x20EC230;
		constexpr auto get_localToWorldMatrix = 0x20EBD00;
		constexpr auto SetPositionAndRotation_Vector3_Quaternion = 0x20EB2D0;
		constexpr auto Translate_Vector3_Space = 0x20EB610;
		constexpr auto Translate_Vector3 = 0x20EB5B0;
		constexpr auto Translate_float_float_float = 0x20EB5E0;
		constexpr auto Rotate_Vector3_Space = 0x20EAC30;
		constexpr auto Rotate_Vector3 = 0x20EAEF0;
		constexpr auto RotateAroundInternal_Vector3_float = 0x20EA990;
		constexpr auto Rotate_Vector3_float_Space = 0x20EB000;
		constexpr auto Rotate_Vector3_float = 0x20EAF20;
		constexpr auto RotateAround_Vector3_Vector3_float = 0x20EA9F0;
		constexpr auto LookAt_Transform = 0x20EA7C0;
		constexpr auto LookAt_Vector3_Vector3 = 0x20EA650;
		constexpr auto LookAt_Vector3 = 0x20EA6C0;
		constexpr auto Internal_LookAt_Vector3_Vector3 = 0x20EA360;
		constexpr auto TransformDirection_Vector3 = 0x20EB3D0;
		constexpr auto InverseTransformDirection_Vector3 = 0x20EA420;
		constexpr auto TransformVector_Vector3 = 0x20EB550;
		constexpr auto InverseTransformVector_Vector3 = 0x20EA5A0;
		constexpr auto TransformPoint_Vector3 = 0x20EB490;
		constexpr auto InverseTransformPoint_Vector3 = 0x20EA4E0;
		constexpr auto get_root = 0x20EA280;
		constexpr auto GetRoot = 0x20EA280;
		constexpr auto get_childCount = 0x20EB7E0;
		constexpr auto DetachChildren = 0x20EA050;
		constexpr auto SetAsFirstSibling = 0x20EB140;
		constexpr auto SetAsLastSibling = 0x20EB180;
		constexpr auto SetSiblingIndex_int = 0x20EB330;
		constexpr auto GetSiblingIndex = 0x20EA2C0;
		constexpr auto FindRelativeTransformWithPath_Transform_string_bool = 0x20EA090;
		constexpr auto Find_string = 0x20EA0F0;
		constexpr auto get_lossyScale = 0x20EBDB0;
		constexpr auto IsChildOf_Transform = 0x20EA600;
		constexpr auto get_hasChanged = 0x20EBA00;
		constexpr auto set_hasChanged_bool = 0x20EC3F0;
		constexpr auto GetEnumerator = 0x20EA1D0;
		constexpr auto GetChild_int = 0x20EA190;
		constexpr auto get_position_Injected_Vector3 = 0x20EBE00;
		constexpr auto set_position_Injected_Vector3 = 0x20EC780;
		constexpr auto get_localPosition_Injected_Vector3 = 0x20EBAD0;
		constexpr auto set_localPosition_Injected_Vector3 = 0x20EC4F0;
		constexpr auto get_rotation_Injected_Quaternion = 0x20EBFF0;
		constexpr auto set_rotation_Injected_Quaternion = 0x20EC970;
		constexpr auto get_localRotation_Injected_Quaternion = 0x20EBB70;
		constexpr auto set_localRotation_Injected_Quaternion = 0x20EC590;
		constexpr auto get_localScale_Injected_Vector3 = 0x20EBC10;
		constexpr auto set_localScale_Injected_Vector3 = 0x20EC630;
		constexpr auto get_worldToLocalMatrix_Injected_Matrix4x4 = 0x20EC1E0;
		constexpr auto get_localToWorldMatrix_Injected_Matrix4x4 = 0x20EBCB0;
		constexpr auto SetPositionAndRotation_Injected_Vector3_Quaternion = 0x20EB270;
		constexpr auto RotateAroundInternal_Injected_Vector3_float = 0x20EA930;
		constexpr auto Internal_LookAt_Injected_Vector3_Vector3 = 0x20EA300;
		constexpr auto TransformDirection_Injected_Vector3_Vector3 = 0x20EB370;
		constexpr auto InverseTransformDirection_Injected_Vector3_Vector3 = 0x20EA3C0;
		constexpr auto TransformVector_Injected_Vector3_Vector3 = 0x20EB4F0;
		constexpr auto InverseTransformVector_Injected_Vector3_Vector3 = 0x20EA540;
		constexpr auto TransformPoint_Injected_Vector3_Vector3 = 0x20EB430;
		constexpr auto InverseTransformPoint_Injected_Vector3_Vector3 = 0x20EA480;
		constexpr auto get_lossyScale_Injected_Vector3 = 0x20EBD60;
	}

	namespace UnityEngine_PhysicsScene {
		// Class
		constexpr auto UnityEngine_PhysicsScene_TypeInfo = 0x3202198;

		// Offsets
		constexpr auto m_Handle = 0x0;

		// Methods
		constexpr auto ToString = 0x234390;
		constexpr auto GetHashCode = 0x13DFD0;
		constexpr auto Equals_object = 0x233E50;
		constexpr auto Equals_PhysicsScene = 0x219200;
		constexpr auto Raycast_Vector3_Vector3_float_int_QueryTriggerInteraction = 0x234120;
		constexpr auto Internal_RaycastTest_PhysicsScene_Ray_float_int_QueryTriggerInteraction = 0x221EAE0;
		constexpr auto Raycast_Vector3_Vector3_RaycastHit_float_int_QueryTriggerInteraction = 0x2340A0;
		constexpr auto Internal_Raycast_PhysicsScene_Ray_float_RaycastHit_int_QueryTriggerInteraction = 0x221EBC0;
		constexpr auto Raycast_Vector3_Vector3_RaycastHitarray_float_int_QueryTriggerInteraction = 0x234190;
		constexpr auto Internal_RaycastNonAlloc_PhysicsScene_Ray_RaycastHitarray_float_int_QueryTriggerInteraction = 0x221EA00;
		constexpr auto Query_CapsuleCast_PhysicsScene_Vector3_Vector3_float_Vector3_float_RaycastHit_int_QueryTriggerInteraction = 0x221F2F0;
		constexpr auto Internal_CapsuleCast_PhysicsScene_Vector3_Vector3_float_Vector3_RaycastHit_float_int_QueryTriggerInteraction = 0x221E7E0;
		constexpr auto CapsuleCast_Vector3_Vector3_float_Vector3_RaycastHit_float_int_QueryTriggerInteraction = 0x233DA0;
		constexpr auto Internal_CapsuleCastNonAlloc_PhysicsScene_Vector3_Vector3_float_Vector3_RaycastHitarray_float_int_QueryTriggerInteraction = 0x221E740;
		constexpr auto CapsuleCast_Vector3_Vector3_float_Vector3_RaycastHitarray_float_int_QueryTriggerInteraction = 0x233C70;
		constexpr auto OverlapCapsuleNonAlloc_Internal_PhysicsScene_Vector3_Vector3_float_Colliderarray_int_QueryTriggerInteraction = 0x221F010;
		constexpr auto OverlapCapsule_Vector3_Vector3_float_Colliderarray_int_QueryTriggerInteraction = 0x233F80;
		constexpr auto Query_SphereCast_PhysicsScene_Vector3_float_Vector3_float_RaycastHit_int_QueryTriggerInteraction = 0x221F400;
		constexpr auto Internal_SphereCast_PhysicsScene_Vector3_float_Vector3_RaycastHit_float_int_QueryTriggerInteraction = 0x221ED30;
		constexpr auto SphereCast_Vector3_float_Vector3_RaycastHit_float_int_QueryTriggerInteraction = 0x234210;
		constexpr auto Internal_SphereCastNonAlloc_PhysicsScene_Vector3_float_Vector3_RaycastHitarray_float_int_QueryTriggerInteraction = 0x221ECA0;
		constexpr auto SphereCast_Vector3_float_Vector3_RaycastHitarray_float_int_QueryTriggerInteraction = 0x234290;
		constexpr auto OverlapSphereNonAlloc_Internal_PhysicsScene_Vector3_float_Colliderarray_int_QueryTriggerInteraction = 0x221F100;
		constexpr auto OverlapSphere_Vector3_float_Colliderarray_int_QueryTriggerInteraction = 0x234020;
		constexpr auto Query_BoxCast_PhysicsScene_Vector3_Vector3_Vector3_Quaternion_float_RaycastHit_int_QueryTriggerInteraction = 0x221F1E0;
		constexpr auto Internal_BoxCast_PhysicsScene_Vector3_Vector3_Quaternion_Vector3_RaycastHit_float_int_QueryTriggerInteraction = 0x221E510;
		constexpr auto BoxCast_Vector3_Vector3_Vector3_RaycastHit_Quaternion_float_int_QueryTriggerInteraction = 0x233BB0;
		constexpr auto OverlapBoxNonAlloc_Internal_PhysicsScene_Vector3_Vector3_Colliderarray_Quaternion_int_QueryTriggerInteraction = 0x221EF20;
		constexpr auto OverlapBox_Vector3_Vector3_Colliderarray_Quaternion_int_QueryTriggerInteraction = 0x233ED0;
		constexpr auto Internal_RaycastTest_Injected_PhysicsScene_Ray_float_int_QueryTriggerInteraction = 0x221EA70;
		constexpr auto Internal_Raycast_Injected_PhysicsScene_Ray_float_RaycastHit_int_QueryTriggerInteraction = 0x221EB50;
		constexpr auto Internal_RaycastNonAlloc_Injected_PhysicsScene_Ray_RaycastHitarray_float_int_QueryTriggerInteraction = 0x221E990;
		constexpr auto Query_CapsuleCast_Injected_PhysicsScene_Vector3_Vector3_float_Vector3_float_RaycastHit_int_QueryTriggerInteraction = 0x221F280;
		constexpr auto Internal_CapsuleCastNonAlloc_Injected_PhysicsScene_Vector3_Vector3_float_Vector3_RaycastHitarray_float_int_QueryTriggerInteraction = 0x221E6D0;
		constexpr auto OverlapCapsuleNonAlloc_Internal_Injected_PhysicsScene_Vector3_Vector3_float_Colliderarray_int_QueryTriggerInteraction = 0x221EFA0;
		constexpr auto Query_SphereCast_Injected_PhysicsScene_Vector3_float_Vector3_float_RaycastHit_int_QueryTriggerInteraction = 0x221F390;
		constexpr auto Internal_SphereCastNonAlloc_Injected_PhysicsScene_Vector3_float_Vector3_RaycastHitarray_float_int_QueryTriggerInteraction = 0x221EC30;
		constexpr auto OverlapSphereNonAlloc_Internal_Injected_PhysicsScene_Vector3_float_Colliderarray_int_QueryTriggerInteraction = 0x221F090;
		constexpr auto Query_BoxCast_Injected_PhysicsScene_Vector3_Vector3_Vector3_Quaternion_float_RaycastHit_int_QueryTriggerInteraction = 0x221F170;
		constexpr auto OverlapBoxNonAlloc_Internal_Injected_PhysicsScene_Vector3_Vector3_Colliderarray_Quaternion_int_QueryTriggerInteraction = 0x221EEB0;
	}

	namespace UnityEngine_Physics {
		// Methods
		constexpr auto get_gravity = 0x2223FB0;
		constexpr auto get_queriesHitBackfaces = 0x2223FF0;
		constexpr auto set_queriesHitBackfaces_bool = 0x2224060;
		constexpr auto get_defaultPhysicsScene = 0x2223F30;
		constexpr auto IgnoreCollision_Collider_Collider_bool = 0x22207E0;
		constexpr auto Raycast_Vector3_Vector3_float_int_QueryTriggerInteraction = 0x2222750;
		constexpr auto Raycast_Vector3_Vector3_float_int = 0x2222CC0;
		constexpr auto Raycast_Vector3_Vector3_float = 0x22224B0;
		constexpr auto Raycast_Vector3_Vector3 = 0x2222A30;
		constexpr auto Raycast_Vector3_Vector3_RaycastHit_float_int_QueryTriggerInteraction = 0x2222670;
		constexpr auto Raycast_Vector3_Vector3_RaycastHit_float_int = 0x2223180;
		constexpr auto Raycast_Vector3_Vector3_RaycastHit_float = 0x2222BF0;
		constexpr auto Raycast_Vector3_Vector3_RaycastHit = 0x22223E0;
		constexpr auto Raycast_Ray_float_int_QueryTriggerInteraction = 0x2223080;
		constexpr auto Raycast_Ray_float_int = 0x2222820;
		constexpr auto Raycast_Ray_float = 0x2222580;
		constexpr auto Raycast_Ray = 0x2222F90;
		constexpr auto Raycast_Ray_RaycastHit_float_int_QueryTriggerInteraction = 0x2222920;
		constexpr auto Raycast_Ray_RaycastHit_float_int = 0x2222AE0;
		constexpr auto Raycast_Ray_RaycastHit_float = 0x2222E90;
		constexpr auto Raycast_Ray_RaycastHit = 0x2222D90;
		constexpr auto Linecast_Vector3_Vector3_int_QueryTriggerInteraction = 0x2220920;
		constexpr auto Linecast_Vector3_Vector3_RaycastHit_int_QueryTriggerInteraction = 0x2220C00;
		constexpr auto Linecast_Vector3_Vector3_RaycastHit_int = 0x2220A90;
		constexpr auto CapsuleCast_Vector3_Vector3_float_Vector3_RaycastHit_float_int_QueryTriggerInteraction = 0x2220020;
		constexpr auto CapsuleCast_Vector3_Vector3_float_Vector3_RaycastHit_float_int = 0x221FF10;
		constexpr auto SphereCast_Vector3_float_Vector3_RaycastHit_float_int_QueryTriggerInteraction = 0x22239C0;
		constexpr auto SphereCast_Vector3_float_Vector3_RaycastHit_float_int = 0x2223AB0;
		constexpr auto SphereCast_Ray_float_float_int_QueryTriggerInteraction = 0x2223D10;
		constexpr auto SphereCast_Ray_float_float_int = 0x2223860;
		constexpr auto SphereCast_Ray_float_RaycastHit_float_int_QueryTriggerInteraction = 0x2223BE0;
		constexpr auto SphereCast_Ray_float_RaycastHit_float_int = 0x2223E50;
		constexpr auto SphereCast_Ray_float_RaycastHit_float = 0x2223BA0;
		constexpr auto BoxCast_Vector3_Vector3_Vector3_RaycastHit_Quaternion_float_int_QueryTriggerInteraction = 0x221FA60;
		constexpr auto BoxCast_Vector3_Vector3_Vector3_RaycastHit_Quaternion_float_int = 0x221FC10;
		constexpr auto Internal_RaycastAll_PhysicsScene_Ray_float_int_QueryTriggerInteraction = 0x22208B0;
		constexpr auto RaycastAll_Vector3_Vector3_float_int_QueryTriggerInteraction = 0x2221490;
		constexpr auto RaycastAll_Vector3_Vector3_float_int = 0x2221440;
		constexpr auto RaycastAll_Vector3_Vector3_float = 0x22216F0;
		constexpr auto RaycastAll_Vector3_Vector3 = 0x2221740;
		constexpr auto RaycastAll_Ray_float_int_QueryTriggerInteraction = 0x2221840;
		constexpr auto RaycastAll_Ray_float_int = 0x22217A0;
		constexpr auto RaycastAll_Ray_float = 0x2221650;
		constexpr auto RaycastAll_Ray = 0x22213B0;
		constexpr auto RaycastNonAlloc_Ray_RaycastHitarray_float_int_QueryTriggerInteraction = 0x2221BB0;
		constexpr auto RaycastNonAlloc_Ray_RaycastHitarray_float_int = 0x2222130;
		constexpr auto RaycastNonAlloc_Ray_RaycastHitarray_float = 0x22218F0;
		constexpr auto RaycastNonAlloc_Ray_RaycastHitarray = 0x2221E70;
		constexpr auto RaycastNonAlloc_Vector3_Vector3_RaycastHitarray_float_int_QueryTriggerInteraction = 0x2221A60;
		constexpr auto RaycastNonAlloc_Vector3_Vector3_RaycastHitarray_float_int = 0x2221FE0;
		constexpr auto RaycastNonAlloc_Vector3_Vector3_RaycastHitarray_float = 0x2221D20;
		constexpr auto RaycastNonAlloc_Vector3_Vector3_RaycastHitarray = 0x22222A0;
		constexpr auto Query_SphereCastAll_PhysicsScene_Vector3_float_Vector3_float_int_QueryTriggerInteraction = 0x2221330;
		constexpr auto SphereCastAll_Vector3_float_Vector3_float_int_QueryTriggerInteraction = 0x2223430;
		constexpr auto SphereCastAll_Ray_float_float_int_QueryTriggerInteraction = 0x2223260;
		constexpr auto SyncTransforms = 0x2223E90;
		constexpr auto get_autoSyncTransforms = 0x2223EC0;
		constexpr auto set_autoSyncTransforms_bool = 0x2224020;
		constexpr auto OverlapSphereNonAlloc_Vector3_float_Colliderarray_int_QueryTriggerInteraction = 0x2221200;
		constexpr auto CheckSphere_Internal_PhysicsScene_Vector3_float_int_QueryTriggerInteraction = 0x2220600;
		constexpr auto CheckSphere_Vector3_float_int_QueryTriggerInteraction = 0x2220670;
		constexpr auto CheckSphere_Vector3_float_int = 0x2220730;
		constexpr auto CapsuleCastNonAlloc_Vector3_Vector3_float_Vector3_RaycastHitarray_float_int_QueryTriggerInteraction = 0x221FDC0;
		constexpr auto SphereCastNonAlloc_Vector3_float_Vector3_RaycastHitarray_float_int_QueryTriggerInteraction = 0x22235C0;
		constexpr auto SphereCastNonAlloc_Ray_float_RaycastHitarray_float_int_QueryTriggerInteraction = 0x22236F0;
		constexpr auto CheckCapsule_Internal_PhysicsScene_Vector3_Vector3_float_int_QueryTriggerInteraction = 0x2220360;
		constexpr auto CheckCapsule_Vector3_Vector3_float_int_QueryTriggerInteraction = 0x22203D0;
		constexpr auto CheckCapsule_Vector3_Vector3_float_int = 0x22204B0;
		constexpr auto CheckBox_Internal_PhysicsScene_Vector3_Vector3_Quaternion_int_QueryTriggerInteraction = 0x22201A0;
		constexpr auto CheckBox_Vector3_Vector3_Quaternion_int_QueryTriggerInteraction = 0x2220210;
		constexpr auto OverlapBox_Internal_PhysicsScene_Vector3_Vector3_Quaternion_int_QueryTriggerInteraction = 0x2220EE0;
		constexpr auto OverlapBox_Vector3_Vector3_Quaternion_int_QueryTriggerInteraction = 0x2220F50;
		constexpr auto OverlapBox_Vector3_Vector3_Quaternion_int = 0x2221030;
		constexpr auto OverlapBoxNonAlloc_Vector3_Vector3_Colliderarray_Quaternion_int_QueryTriggerInteraction = 0x2220D80;
		constexpr auto OverlapCapsuleNonAlloc_Vector3_Vector3_float_Colliderarray_int_QueryTriggerInteraction = 0x2221110;
		constexpr auto get_gravity_Injected_Vector3 = 0x2223F70;
		constexpr auto get_defaultPhysicsScene_Injected_PhysicsScene = 0x2223EF0;
		constexpr auto Internal_RaycastAll_Injected_PhysicsScene_Ray_float_int_QueryTriggerInteraction = 0x2220840;
		constexpr auto Query_SphereCastAll_Injected_PhysicsScene_Vector3_float_Vector3_float_int_QueryTriggerInteraction = 0x22212C0;
		constexpr auto CheckSphere_Internal_Injected_PhysicsScene_Vector3_float_int_QueryTriggerInteraction = 0x2220590;
		constexpr auto CheckCapsule_Internal_Injected_PhysicsScene_Vector3_Vector3_float_int_QueryTriggerInteraction = 0x22202F0;
		constexpr auto CheckBox_Internal_Injected_PhysicsScene_Vector3_Vector3_Quaternion_int_QueryTriggerInteraction = 0x2220130;
		constexpr auto OverlapBox_Internal_Injected_PhysicsScene_Vector3_Vector3_Quaternion_int_QueryTriggerInteraction = 0x2220E70;
	}

	namespace UnityEngine_AssetBundle {
		// Methods
		constexpr auto _ctor = 0x22A3F80;
		constexpr auto LoadFromFileAsync_Internal_string_uint_ulong = 0x22A3E10;
		constexpr auto LoadFromFileAsync_string = 0x22A3E60;
		constexpr auto LoadFromFile_Internal_string_uint_ulong = 0x22A3EA0;
		constexpr auto LoadFromFile_string = 0x22A3EF0;
		constexpr auto Contains_string = 0x22A3970;
		constexpr auto LoadAsset_string_Type = 0x22A3CF0;
		constexpr auto LoadAsset_Internal_string_Type = 0x22A3C90;
		constexpr auto LoadAssetAsync_string_Type = 0x22A3B10;
		constexpr auto LoadAllAssets_Type = 0x22A3A00;
		constexpr auto LoadAssetAsync_Internal_string_Type = 0x22A3AB0;
		constexpr auto Unload_bool = 0x22A3F30;
		constexpr auto GetAllAssetNames = 0x22A39C0;
		constexpr auto LoadAssetWithSubAssets_Internal_string_Type = 0x22A3C30;
	}

	namespace UnityEngine_Event {
		// Class
		constexpr auto UnityEngine_Event_TypeInfo = 0x3201840;

		// Offsets
		constexpr auto m_Ptr = 0x10;

		// Static Offsets
		constexpr auto s_Current = 0x0;
		constexpr auto s_MasterEvent = 0x8;

		// Methods
		constexpr auto get_rawType = 0x1A110D0;
		constexpr auto get_mousePosition = 0x1A11000;
		constexpr auto set_mousePosition_Vector2 = 0x1A113E0;
		constexpr auto get_delta = 0x1A10D80;
		constexpr auto get_pointerType = 0x1A11050;
		constexpr auto get_button = 0x1A10B70;
		constexpr auto get_modifiers = 0x1A10F70;
		constexpr auto set_modifiers_EventModifiers = 0x1A11350;
		constexpr auto get_pressure = 0x1A11090;
		constexpr auto get_clickCount = 0x1A10BF0;
		constexpr auto get_character = 0x1A10BB0;
		constexpr auto set_character_char = 0x1A11190;
		constexpr auto get_keyCode = 0x1A10F30;
		constexpr auto set_keyCode_KeyCode = 0x1A11310;
		constexpr auto get_displayIndex = 0x1A10DD0;
		constexpr auto set_displayIndex_int = 0x1A112D0;
		constexpr auto get_type = 0x1A11150;
		constexpr auto set_type_EventType = 0x1A11420;
		constexpr auto get_commandName = 0x1A10C30;
		constexpr auto set_commandName_string = 0x1A111E0;
		constexpr auto Internal_Use = 0x1A0EA50;
		constexpr auto Internal_Create_int = 0x1A0E850;
		constexpr auto Internal_Destroy_IntPtr = 0x1A0E890;
		constexpr auto Internal_Copy_IntPtr = 0x1A0E810;
		constexpr auto GetTypeForControl_int = 0x1A0E7D0;
		constexpr auto CopyFromPtr_IntPtr = 0x1A0E2B0;
		constexpr auto PopEvent_Event = 0x1A0FD20;
		constexpr auto Internal_SetNativeEvent_IntPtr = 0x1A0EA10;
		constexpr auto Internal_MakeMasterEventCurrent_int = 0x1A0E8D0;
		constexpr auto _ctor = 0x1A10AA0;
		constexpr auto _ctor_int = 0x1A10AE0;
		constexpr auto _ctor_Event = 0x1A109F0;
		constexpr auto Finalize = 0x1A0E5C0;
		constexpr auto CopyFrom_Event = 0x1A0E300;
		constexpr auto get_shift = 0x1A11110;
		constexpr auto get_control = 0x1A10CB0;
		constexpr auto get_alt = 0x1A10B30;
		constexpr auto get_command = 0x1A10C70;
		constexpr auto get_current = 0x1A10CF0;
		constexpr auto set_current_Event = 0x1A11230;
		constexpr auto get_isKey = 0x1A10E80;
		constexpr auto get_isMouse = 0x1A10ED0;
		constexpr auto get_isDirectManipulationDevice = 0x1A10E10;
		constexpr auto KeyboardEvent_string = 0x1A0EA90;
		constexpr auto GetHashCode = 0x1A0E6A0;
		constexpr auto Equals_object = 0x1A0E370;
		constexpr auto ToString = 0x1A0FD60;
		constexpr auto Use = 0x1A10840;
		constexpr auto get_mousePosition_Injected_Vector2 = 0x1A10FB0;
		constexpr auto set_mousePosition_Injected_Vector2 = 0x1A11390;
		constexpr auto get_delta_Injected_Vector2 = 0x1A10D30;
	}

	namespace UnityEngine_GUI {
		// Class
		constexpr auto UnityEngine_GUI_TypeInfo = 0x3201720;

		// Static Offsets
		constexpr auto s_HotTextField = 0x0;
		constexpr auto s_BoxHash = 0x4;
		constexpr auto s_ButonHash = 0x8;
		constexpr auto s_RepeatButtonHash = 0xC;
		constexpr auto s_ToggleHash = 0x10;
		constexpr auto s_ButtonGridHash = 0x14;
		constexpr auto s_SliderHash = 0x18;
		constexpr auto s_BeginGroupHash = 0x1C;
		constexpr auto s_ScrollviewHash = 0x20;
		constexpr auto scrollTroughSidek__BackingField = 0x24;
		constexpr auto nextScrollStepTimek__BackingField = 0x28;
		constexpr auto s_Skin = 0x30;
		constexpr auto scrollViewStatesk__BackingField = 0x38;

		// Methods
		constexpr auto get_color = 0x1A2A8B0;
		constexpr auto set_color_Color = 0x1A2AE50;
		constexpr auto get_backgroundColor = 0x1A2A760;
		constexpr auto set_backgroundColor_Color = 0x1A2AD60;
		constexpr auto get_contentColor = 0x1A2A970;
		constexpr auto set_contentColor_Color = 0x1A2AF00;
		constexpr auto get_changed = 0x1A2A840;
		constexpr auto set_changed_bool = 0x1A2ADD0;
		constexpr auto get_enabled = 0x1A2A9F0;
		constexpr auto set_enabled_bool = 0x1A2AF70;
		constexpr auto get_usePageScrollbars = 0x1A2ACF0;
		constexpr auto get_blendMaterial = 0x1A2A7E0;
		constexpr auto get_blitMaterial = 0x1A2A810;
		constexpr auto get_roundedRectMaterial = 0x1A2AB10;
		constexpr auto get_roundedRectWithColorPerBorderMaterial = 0x1A2AB40;
		constexpr auto GrabMouseControl_int = 0x1A288B0;
		constexpr auto HasMouseControl_int = 0x1A296A0;
		constexpr auto ReleaseMouseControl = 0x1A29DB0;
		constexpr auto SetNextControlName_string = 0x1A2A040;
		constexpr auto InternalRepaintEditorWindow = 0x1A299C0;
		constexpr auto _cctor = 0x1A2A4A0;
		constexpr auto get_scrollTroughSide = 0x1A2AB70;
		constexpr auto set_scrollTroughSide_int = 0x1A2B0D0;
		constexpr auto get_nextScrollStepTime = 0x1A2AAB0;
		constexpr auto set_nextScrollStepTime_DateTime = 0x1A2B010;
		constexpr auto set_skin_GUISkin = 0x1A2B190;
		constexpr auto get_skin = 0x1A2AC90;
		constexpr auto DoSetSkin_GUISkin = 0x1A26D30;
		constexpr auto get_matrix = 0x1A2AA20;
		constexpr auto set_matrix_Matrix4x4 = 0x1A2AFB0;
		constexpr auto Label_Rect_string = 0x1A29AE0;
		constexpr auto Label_Rect_string_GUIStyle = 0x1A299F0;
		constexpr auto Label_Rect_GUIContent_GUIStyle = 0x1A29BF0;
		constexpr auto DrawTexture_Rect_Texture = 0x1A27EC0;
		constexpr auto DrawTexture_Rect_Texture_ScaleMode = 0x1A27A60;
		constexpr auto DrawTexture_Rect_Texture_ScaleMode_bool = 0x1A28570;
		constexpr auto DrawTexture_Rect_Texture_ScaleMode_bool_float = 0x1A28430;
		constexpr auto DrawTexture_Rect_Texture_ScaleMode_bool_float_Color_float_float = 0x1A27C00;
		constexpr auto DrawTexture_Rect_Texture_ScaleMode_bool_float_Color_Vector4_float = 0x1A28200;
		constexpr auto DrawTexture_Rect_Texture_ScaleMode_bool_float_Color_Vector4_Vector4 = 0x1A286E0;
		constexpr auto DrawTexture_Rect_Texture_ScaleMode_bool_float_Color_Vector4_Vector4_bool = 0x1A280A0;
		constexpr auto DrawTexture_Rect_Texture_ScaleMode_bool_float_Color_Color_Color_Color_Vector4_Vector4_bool = 0x1A274B0;
		constexpr auto CalculateScaledTextureRects_Rect_ScaleMode_float_Rect_Rect = 0x1A25080;
		constexpr auto Box_Rect_string = 0x1A24470;
		constexpr auto Box_Rect_GUIContent_GUIStyle = 0x1A24270;
		constexpr auto Button_Rect_string = 0x1A24530;
		constexpr auto Button_Rect_GUIContent_GUIStyle = 0x1A24760;
		constexpr auto Button_Rect_int_GUIContent_GUIStyle = 0x1A245F0;
		constexpr auto PasswordFieldGetStrToShow_string_char = 0x1A29C80;
		constexpr auto DoTextField_Rect_int_GUIContent_bool_int_GUIStyle = 0x1A271B0;
		constexpr auto DoTextField_Rect_int_GUIContent_bool_int_GUIStyle_string = 0x1A272B0;
		constexpr auto DoTextField_Rect_int_GUIContent_bool_int_GUIStyle_string_char = 0x1A26EE0;
		constexpr auto HandleTextFieldEventForTouchscreen_Rect_int_GUIContent_bool_int_GUIStyle_string_char_TextEditor = 0x1A290E0;
		constexpr auto HandleTextFieldEventForDesktop_Rect_int_GUIContent_bool_int_GUIStyle_TextEditor = 0x1A288F0;
		constexpr auto Toggle_Rect_bool_GUIContent_GUIStyle = 0x1A2A2E0;
		constexpr auto SelectionGrid_Rect_int_stringarray_int = 0x1A29EE0;
		constexpr auto SelectionGrid_Rect_int_GUIContentarray_int_GUIStyle = 0x1A29DE0;
		constexpr auto CalcTotalHorizSpacing_int_GUIStyle_GUIStyle_GUIStyle_GUIStyle = 0x1A24E70;
		constexpr auto DoControl_Rect_int_bool_bool_GUIContent_GUIStyle = 0x1A26660;
		constexpr auto DoLabel_Rect_GUIContent_GUIStyle = 0x1A26AA0;
		constexpr auto DoToggle_Rect_int_bool_GUIContent_GUIStyle = 0x1A27370;
		constexpr auto DoButton_Rect_int_GUIContent_GUIStyle = 0x1A26530;
		constexpr auto DoButtonGrid_Rect_int_GUIContentarray_stringarray_int_GUIStyle_GUIStyle_GUIStyle_GUIStyle_GUI_ToolbarButtonSize_boolarray = 0x1A25840;
		constexpr auto CalcMouseRects_Rect_GUIContentarray_int_float_float_GUIStyle_GUIStyle_GUIStyle_GUIStyle_bool_GUI_ToolbarButtonSize = 0x1A24950;
		constexpr auto HorizontalSlider_Rect_float_float_float = 0x1A297B0;
		constexpr auto HorizontalSlider_Rect_float_float_float_GUIStyle_GUIStyle = 0x1A296E0;
		constexpr auto Slider_Rect_float_float_float_float_GUIStyle_GUIStyle_bool_int_GUIStyle = 0x1A2A080;
		constexpr auto BeginGroup_Rect_GUIContent_GUIStyle = 0x1A23E50;
		constexpr auto BeginGroup_Rect_GUIContent_GUIStyle_Vector2 = 0x1A23F10;
		constexpr auto EndGroup = 0x1A28870;
		constexpr auto get_scrollViewStates = 0x1A2AC30;
		constexpr auto CallWindowDelegate_GUI_WindowFunction_int_int_GUISkin_int_float_float_GUIStyle = 0x1A253B0;
		constexpr auto get_color_Injected_Color = 0x1A2A870;
		constexpr auto set_color_Injected_Color = 0x1A2AE10;
		constexpr auto get_backgroundColor_Injected_Color = 0x1A2A720;
		constexpr auto set_backgroundColor_Injected_Color = 0x1A2AD20;
		constexpr auto get_contentColor_Injected_Color = 0x1A2A930;
		constexpr auto set_contentColor_Injected_Color = 0x1A2AEC0;
	}

	namespace UnityEngine_GUIContent {
		// Class
		constexpr auto UnityEngine_GUIContent_TypeInfo = 0x32016B8;

		// Offsets
		constexpr auto m_Text = 0x10;
		constexpr auto m_Image = 0x18;
		constexpr auto m_Tooltip = 0x20;

		// Static Offsets
		constexpr auto s_Text = 0x0;
		constexpr auto s_Image = 0x8;
		constexpr auto s_TextImage = 0x10;
		constexpr auto none = 0x18;

		// Methods
		constexpr auto get_text = 0x183A000;
		constexpr auto set_text_string = 0x534840;
		constexpr auto set_image_Texture = 0x524540;
		constexpr auto get_tooltip = 0x1A12360;
		constexpr auto set_tooltip_string = 0x2FF2B0;
		constexpr auto _ctor = 0x1A122D0;
		constexpr auto _ctor_string = 0x1A12270;
		constexpr auto _ctor_string_string = 0x1A12340;
		constexpr auto _ctor_string_Texture_string = 0x1A120D0;
		constexpr auto _ctor_GUIContent = 0x1A121A0;
		constexpr auto Temp_string = 0x1A11BB0;
		constexpr auto ClearStaticCache = 0x1A11A50;
		constexpr auto Temp_stringarray = 0x1A11C70;
		constexpr auto _cctor = 0x1A11E80;
	}

	namespace UnityEngine_GUILayout {
		// Methods
		constexpr auto Label_string_GUILayoutOptionarray = 0x1A1B8D0;
		constexpr auto DoLabel_GUIContent_GUIStyle_GUILayoutOptionarray = 0x1A1A630;
		constexpr auto Box_string_GUILayoutOptionarray = 0x1A19EA0;
		constexpr auto DoBox_GUIContent_GUIStyle_GUILayoutOptionarray = 0x1A1A240;
		constexpr auto Button_string_GUILayoutOptionarray = 0x1A1A070;
		constexpr auto DoButton_GUIContent_GUIStyle_GUILayoutOptionarray = 0x1A1A350;
		constexpr auto TextField_string_GUILayoutOptionarray = 0x1A1BBC0;
		constexpr auto TextArea_string_GUILayoutOptionarray = 0x1A1BAE0;
		constexpr auto DoTextField_string_int_bool_GUIStyle_GUILayoutOptionarray = 0x1A1A780;
		constexpr auto Toggle_bool_string_GUILayoutOptionarray = 0x1A1BD40;
		constexpr auto Toggle_bool_string_GUIStyle_GUILayoutOptionarray = 0x1A1BCA0;
		constexpr auto DoToggle_bool_GUIContent_GUIStyle_GUILayoutOptionarray = 0x1A1AAC0;
		constexpr auto HorizontalSlider_float_float_float_GUILayoutOptionarray = 0x1A1B5D0;
		constexpr auto DoHorizontalSlider_float_float_float_GUIStyle_GUIStyle_GUILayoutOptionarray = 0x1A1A460;
		constexpr auto FlexibleSpace = 0x1A1B0C0;
		constexpr auto BeginHorizontal_GUILayoutOptionarray = 0x1A19A30;
		constexpr auto BeginHorizontal_GUIContent_GUIStyle_GUILayoutOptionarray = 0x1A198C0;
		constexpr auto EndHorizontal = 0x1A1AF20;
		constexpr auto BeginVertical_GUILayoutOptionarray = 0x1A19C10;
		constexpr auto BeginVertical_GUIStyle_GUILayoutOptionarray = 0x1A19E20;
		constexpr auto BeginVertical_GUIContent_GUIStyle_GUILayoutOptionarray = 0x1A19CB0;
		constexpr auto EndVertical = 0x1A1AF70;
		constexpr auto BeginArea_Rect = 0x1A19810;
		constexpr auto BeginArea_Rect_string_GUIStyle = 0x1A194F0;
		constexpr auto BeginArea_Rect_GUIContent_GUIStyle = 0x1A19580;
		constexpr auto EndArea = 0x1A1AD40;
		constexpr auto Width_float = 0x1A1BE50;
		constexpr auto Height_float = 0x1A1B540;
		constexpr auto ExpandWidth_bool = 0x1A1B040;
		constexpr auto ExpandHeight_bool = 0x1A1AFC0;
	}

	namespace UnityEngine_GUILayoutOption {
		// Class
		constexpr auto UnityEngine_GUILayoutOption_TypeInfo = 0x32014D0;

		// Offsets
		constexpr auto type = 0x10;
		constexpr auto value = 0x18;

		// Methods
		constexpr auto _ctor_GUILayoutOption_Type_object = 0xC2E8B0;
	}

	namespace UnityEngine_GUISkin {
		// Class
		constexpr auto UnityEngine_GUISkin_TypeInfo = 0x3201270;

		// Offsets
		constexpr auto m_Font = 0x18;
		constexpr auto m_box = 0x20;
		constexpr auto m_button = 0x28;
		constexpr auto m_toggle = 0x30;
		constexpr auto m_label = 0x38;
		constexpr auto m_textField = 0x40;
		constexpr auto m_textArea = 0x48;
		constexpr auto m_window = 0x50;
		constexpr auto m_horizontalSlider = 0x58;
		constexpr auto m_horizontalSliderThumb = 0x60;
		constexpr auto m_horizontalSliderThumbExtent = 0x68;
		constexpr auto m_verticalSlider = 0x70;
		constexpr auto m_verticalSliderThumb = 0x78;
		constexpr auto m_verticalSliderThumbExtent = 0x80;
		constexpr auto m_horizontalScrollbar = 0x88;
		constexpr auto m_horizontalScrollbarThumb = 0x90;
		constexpr auto m_horizontalScrollbarLeftButton = 0x98;
		constexpr auto m_horizontalScrollbarRightButton = 0xA0;
		constexpr auto m_verticalScrollbar = 0xA8;
		constexpr auto m_verticalScrollbarThumb = 0xB0;
		constexpr auto m_verticalScrollbarUpButton = 0xB8;
		constexpr auto m_verticalScrollbarDownButton = 0xC0;
		constexpr auto m_ScrollView = 0xC8;
		constexpr auto m_CustomStyles = 0xD0;
		constexpr auto m_Settings = 0xD8;
		constexpr auto m_Styles = 0xE0;

		// Static Offsets
		constexpr auto ms_Error = 0x0;
		constexpr auto m_SkinChanged = 0x8;
		constexpr auto current = 0x10;

		// Methods
		constexpr auto _ctor = 0x1A1DF10;
		constexpr auto OnEnable = 0x1A1C610;
		constexpr auto CleanupRoots = 0x1A1D890;
		constexpr auto get_font = 0x1839FF0;
		constexpr auto set_font_Font = 0x1A1E3B0;
		constexpr auto get_box = 0x1A12360;
		constexpr auto set_box_GUIStyle = 0x1A1E220;
		constexpr auto get_label = 0x1A1E170;
		constexpr auto set_label_GUIStyle = 0x1A1E870;
		constexpr auto get_textField = 0x1A13610;
		constexpr auto set_textField_GUIStyle = 0x1A1E9F0;
		constexpr auto get_textArea = 0xE6D890;
		constexpr auto set_textArea_GUIStyle = 0x1A1E970;
		constexpr auto get_button = 0x1839FE0;
		constexpr auto set_button_GUIStyle = 0x1A1E2A0;
		constexpr auto get_toggle = 0xE77180;
		constexpr auto set_toggle_GUIStyle = 0x1A1EA70;
		constexpr auto get_window = 0x1A1E210;
		constexpr auto set_window_GUIStyle = 0x1A1EE70;
		constexpr auto get_horizontalSlider = 0x1A1E160;
		constexpr auto set_horizontalSlider_GUIStyle = 0x1A1E7F0;
		constexpr auto get_horizontalSliderThumb = 0xE6D6B0;
		constexpr auto set_horizontalSliderThumb_GUIStyle = 0x1A1E770;
		constexpr auto get_horizontalSliderThumbExtent = 0x1A1E150;
		constexpr auto set_horizontalSliderThumbExtent_GUIStyle = 0x1A1E6F0;
		constexpr auto get_verticalSlider = 0x1A1E200;
		constexpr auto set_verticalSlider_GUIStyle = 0x1A1EDF0;
		constexpr auto get_verticalSliderThumb = 0x1A1E1F0;
		constexpr auto set_verticalSliderThumb_GUIStyle = 0x1A1ED70;
		constexpr auto get_verticalSliderThumbExtent = 0x1A1E1E0;
		constexpr auto set_verticalSliderThumbExtent_GUIStyle = 0x1A1ECF0;
		constexpr auto get_horizontalScrollbar = 0x1A1E140;
		constexpr auto set_horizontalScrollbar_GUIStyle = 0x1A1E670;
		constexpr auto get_horizontalScrollbarThumb = 0x1A1E130;
		constexpr auto set_horizontalScrollbarThumb_GUIStyle = 0x1A1E5F0;
		constexpr auto get_horizontalScrollbarLeftButton = 0x1A1E110;
		constexpr auto set_horizontalScrollbarLeftButton_GUIStyle = 0x1A1E4F0;
		constexpr auto get_horizontalScrollbarRightButton = 0x1A1E120;
		constexpr auto set_horizontalScrollbarRightButton_GUIStyle = 0x1A1E570;
		constexpr auto get_verticalScrollbar = 0x1A1E1D0;
		constexpr auto set_verticalScrollbar_GUIStyle = 0x1A1EC70;
		constexpr auto get_verticalScrollbarThumb = 0x1A1E1B0;
		constexpr auto set_verticalScrollbarThumb_GUIStyle = 0x1A1EB70;
		constexpr auto get_verticalScrollbarUpButton = 0x1A1E1C0;
		constexpr auto set_verticalScrollbarUpButton_GUIStyle = 0x1A1EBF0;
		constexpr auto get_verticalScrollbarDownButton = 0x1A1E1A0;
		constexpr auto set_verticalScrollbarDownButton_GUIStyle = 0x1A1EAF0;
		constexpr auto get_scrollView = 0x1A1E180;
		constexpr auto set_scrollView_GUIStyle = 0x1A1E8F0;
		constexpr auto get_customStyles = 0x1A1E010;
		constexpr auto set_customStyles_GUIStylearray = 0x1A1E320;
		constexpr auto get_settings = 0x1A1E190;
		constexpr auto get_error = 0x1A1E020;
		constexpr auto Apply = 0x1A1C610;
		constexpr auto BuildStyleCache = 0x1A1C680;
		constexpr auto GetStyle_string = 0x1A1DA30;
		constexpr auto FindStyle_string = 0x1A1D8F0;
		constexpr auto MakeCurrent = 0x1A1DE60;
		constexpr auto GetEnumerator = 0x1A1D990;
	}

	namespace UnityEngine_GUIStyle {
		// Class
		constexpr auto UnityEngine_GUIStyle_TypeInfo = 0x3201620;

		// Offsets
		constexpr auto m_Ptr = 0x10;
		constexpr auto m_Normal = 0x18;
		constexpr auto m_Hover = 0x20;
		constexpr auto m_Active = 0x28;
		constexpr auto m_Focused = 0x30;
		constexpr auto m_OnNormal = 0x38;
		constexpr auto m_OnHover = 0x40;
		constexpr auto m_OnActive = 0x48;
		constexpr auto m_OnFocused = 0x50;
		constexpr auto m_Border = 0x58;
		constexpr auto m_Padding = 0x60;
		constexpr auto m_Margin = 0x68;
		constexpr auto m_Overflow = 0x70;
		constexpr auto m_Name = 0x78;

		// Static Offsets
		constexpr auto showKeyboardFocus = 0x0;
		constexpr auto s_None = 0x8;

		// Methods
		constexpr auto get_rawName = 0x1A219B0;
		constexpr auto set_rawName_string = 0x1A21D80;
		constexpr auto get_font = 0x1A214A0;
		constexpr auto get_imagePosition = 0x1A214E0;
		constexpr auto set_alignment_TextAnchor = 0x1A21C20;
		constexpr auto get_wordWrap = 0x1A21A70;
		constexpr auto get_contentOffset = 0x1A213D0;
		constexpr auto set_contentOffset_Vector2 = 0x1A21CB0;
		constexpr auto get_fixedWidth = 0x1A21460;
		constexpr auto get_fixedHeight = 0x1A21420;
		constexpr auto get_stretchWidth = 0x1A21A30;
		constexpr auto set_stretchWidth_bool = 0x1A21E20;
		constexpr auto get_stretchHeight = 0x1A219F0;
		constexpr auto set_stretchHeight_bool = 0x1A21DD0;
		constexpr auto set_fontSize_int = 0x1A21CF0;
		constexpr auto set_Internal_clipOffset_Vector2 = 0x1A21BE0;
		constexpr auto Internal_Create_GUIStyle = 0x1A207E0;
		constexpr auto Internal_Copy_GUIStyle_GUIStyle = 0x1A20790;
		constexpr auto Internal_Destroy_IntPtr = 0x1A20820;
		constexpr auto GetStyleStatePtr_int = 0x1A205C0;
		constexpr auto GetRectOffsetPtr_int = 0x1A20580;
		constexpr auto Internal_GetLineHeight_IntPtr = 0x1A20EB0;
		constexpr auto Internal_Draw_Rect_GUIContent_bool_bool_bool_bool = 0x1A20C30;
		constexpr auto Internal_Draw2_Rect_GUIContent_int_bool = 0x1A208D0;
		constexpr auto Internal_DrawCursor_Rect_GUIContent_int_Color = 0x1A209B0;
		constexpr auto Internal_DrawWithTextSelection_Rect_GUIContent_bool_bool_bool_bool_bool_int_int_Color_Color = 0x1A20AD0;
		constexpr auto Internal_GetCursorPixelPosition_Rect_GUIContent_int = 0x1A20D60;
		constexpr auto Internal_GetCursorStringIndex_Rect_GUIContent_Vector2 = 0x1A20E50;
		constexpr auto Internal_GetSelectedRenderedText_Rect_GUIContent_int_int = 0x1A20F60;
		constexpr auto Internal_CalcSize_GUIContent = 0x1A1F4D0;
		constexpr auto Internal_CalcSizeWithConstraints_GUIContent_Vector2 = 0x1A1F470;
		constexpr auto Internal_CalcHeight_GUIContent_float = 0x1A1F390;
		constexpr auto Internal_CalcMinMaxWidth_GUIContent = 0x1A20660;
		constexpr auto SetMouseTooltip_string_Rect = 0x1A21060;
		constexpr auto Internal_GetCursorFlashOffset = 0x1A20CC0;
		constexpr auto SetDefaultFont_Font = 0x1A20FD0;
		constexpr auto _ctor = 0x1A21300;
		constexpr auto _ctor_GUIStyle = 0x1A21230;
		constexpr auto Finalize = 0x1A203A0;
		constexpr auto get_name = 0x1A21720;
		constexpr auto set_name_string = 0x1A21D30;
		constexpr auto get_normal = 0x1A21840;
		constexpr auto get_margin = 0x1A21670;
		constexpr auto get_padding = 0x1A21900;
		constexpr auto get_lineHeight = 0x1A215C0;
		constexpr auto Draw_Rect_GUIContent_bool_bool_bool_bool = 0x1A20170;
		constexpr auto Draw_Rect_GUIContent_int = 0x1A202E0;
		constexpr auto Draw_Rect_GUIContent_int_bool = 0x1A200A0;
		constexpr auto Draw_Rect_GUIContent_int_bool_bool = 0x1A1FF80;
		constexpr auto Draw_Rect_GUIContent_int_bool_bool_bool_bool = 0x1A20200;
		constexpr auto DrawCursor_Rect_GUIContent_int_int = 0x1A1F530;
		constexpr auto DrawWithTextSelection_Rect_GUIContent_bool_bool_int_int_bool_Color = 0x1A1F9F0;
		constexpr auto DrawWithTextSelection_Rect_GUIContent_int_int_int_bool = 0x1A1F810;
		constexpr auto DrawWithTextSelection_Rect_GUIContent_int_int_int = 0x1A1FDB0;
		constexpr auto op_Implicit_string = 0x1A21AB0;
		constexpr auto get_none = 0x1A21780;
		constexpr auto GetCursorPixelPosition_Rect_GUIContent_int = 0x1A204A0;
		constexpr auto GetCursorStringIndex_Rect_GUIContent_Vector2 = 0x1A20520;
		constexpr auto CalcSize_GUIContent = 0x1A1F4D0;
		constexpr auto CalcSizeWithConstraints_GUIContent_Vector2 = 0x1A1F470;
		constexpr auto CalcHeight_GUIContent_float = 0x1A1F390;
		constexpr auto get_isHeightDependantOnWidth = 0x1A21520;
		constexpr auto CalcMinMaxWidth_GUIContent_float_float = 0x1A1F3F0;
		constexpr auto ToString = 0x1A210E0;
		constexpr auto _cctor = 0x1A211F0;
		constexpr auto get_contentOffset_Injected_Vector2 = 0x1A21380;
		constexpr auto set_contentOffset_Injected_Vector2 = 0x1A21C60;
		constexpr auto set_Internal_clipOffset_Injected_Vector2 = 0x1A21B90;
		constexpr auto Internal_Draw_Injected_Rect_GUIContent_bool_bool_bool_bool = 0x1A20BA0;
		constexpr auto Internal_Draw2_Injected_Rect_GUIContent_int_bool = 0x1A20860;
		constexpr auto Internal_DrawCursor_Injected_Rect_GUIContent_int_Color = 0x1A20940;
		constexpr auto Internal_DrawWithTextSelection_Injected_Rect_GUIContent_bool_bool_bool_bool_bool_int_int_Color_Color = 0x1A20A20;
		constexpr auto Internal_GetCursorPixelPosition_Injected_Rect_GUIContent_int_Vector2 = 0x1A20CF0;
		constexpr auto Internal_GetCursorStringIndex_Injected_Rect_GUIContent_Vector2 = 0x1A20DE0;
		constexpr auto Internal_GetSelectedRenderedText_Injected_Rect_GUIContent_int_int = 0x1A20EF0;
		constexpr auto Internal_CalcSize_Injected_GUIContent_Vector2 = 0x1A20730;
		constexpr auto Internal_CalcSizeWithConstraints_Injected_GUIContent_Vector2_Vector2 = 0x1A206C0;
		constexpr auto Internal_CalcMinMaxWidth_Injected_GUIContent_Vector2 = 0x1A20600;
		constexpr auto SetMouseTooltip_Injected_string_Rect = 0x1A21010;
	}

	namespace UnityEngine_GUIUtility {
		// Class
		constexpr auto UnityEngine_GUIUtility_TypeInfo = 0x3201088;

		// Static Offsets
		constexpr auto s_SkinMode = 0x0;
		constexpr auto s_OriginalID = 0x4;
		constexpr auto takeCapture = 0x8;
		constexpr auto releaseCapture = 0x10;
		constexpr auto processEvent = 0x18;
		constexpr auto cleanupRoots = 0x20;
		constexpr auto endContainerGUIFromException = 0x28;
		constexpr auto guiChanged = 0x30;
		constexpr auto guiIsExitingk__BackingField = 0x38;
		constexpr auto s_HasCurrentWindowKeyFocusFunc = 0x40;

		// Methods
		constexpr auto get_pixelsPerPoint = 0x1A23900;
		constexpr auto get_guiDepth = 0x1A238D0;
		constexpr auto set_mouseUsed_bool = 0x1A23A20;
		constexpr auto set_textFieldInput_bool = 0x1A23AA0;
		constexpr auto get_systemCopyBuffer = 0x1A23930;
		constexpr auto set_systemCopyBuffer_string = 0x1A23A60;
		constexpr auto GetControlID_int_FocusType_Rect = 0x1A22A20;
		constexpr auto BeginContainerFromOwner_ScriptableObject = 0x1A22150;
		constexpr auto BeginContainer_ObjectGUIState = 0x1A22190;
		constexpr auto Internal_EndContainer = 0x1A22FA0;
		constexpr auto CheckForTabEvent_Event = 0x1A22360;
		constexpr auto SetKeyboardControlToFirstControlId = 0x1A237F0;
		constexpr auto SetKeyboardControlToLastControlId = 0x1A23820;
		constexpr auto HasFocusableControls = 0x1A22C40;
		constexpr auto OwnsId_int = 0x1A231F0;
		constexpr auto AlignRectToDevice_Rect_int_int = 0x1A22070;
		constexpr auto get_compositionString = 0x1A238A0;
		constexpr auto set_compositionCursorPos_Vector2 = 0x1A239A0;
		constexpr auto Internal_GetHotControl = 0x1A23040;
		constexpr auto Internal_GetKeyboardControl = 0x1A23070;
		constexpr auto Internal_SetHotControl_int = 0x1A230A0;
		constexpr auto Internal_SetKeyboardControl_int = 0x1A230E0;
		constexpr auto Internal_GetDefaultSkin_int = 0x1A23000;
		constexpr auto Internal_ExitGUI = 0x1A22FD0;
		constexpr auto MarkGUIChanged = 0x1A231A0;
		constexpr auto GetControlID_FocusType = 0x1A229D0;
		constexpr auto GetControlID_int_FocusType = 0x1A22970;
		constexpr auto GetStateObject_Type_int = 0x1A22AF0;
		constexpr auto set_guiIsExiting_bool = 0x1A239E0;
		constexpr auto get_hotControl = 0x1A23040;
		constexpr auto set_hotControl_int = 0x1A230A0;
		constexpr auto TakeCapture = 0x1A23850;
		constexpr auto RemoveCapture = 0x1A232A0;
		constexpr auto get_keyboardControl = 0x1A23070;
		constexpr auto set_keyboardControl_int = 0x1A230E0;
		constexpr auto HasKeyFocus_int = 0x1A22C70;
		constexpr auto ExitGUI = 0x1A228D0;
		constexpr auto GetDefaultSkin = 0x1A22A70;
		constexpr auto ProcessEvent_int_IntPtr = 0x1A23230;
		constexpr auto EndContainer = 0x1A22490;
		constexpr auto BeginGUI_int_int_int = 0x1A221D0;
		constexpr auto EndGUI_int = 0x1A22580;
		constexpr auto EndGUIFromException_Exception = 0x1A224E0;
		constexpr auto EndContainerGUIFromException_Exception = 0x1A22430;
		constexpr auto ResetGlobalState = 0x1A232F0;
		constexpr auto IsExitGUIException_Exception = 0x1A23120;
		constexpr auto ShouldRethrowException_Exception = 0x1A23120;
		constexpr auto CheckOnGUI = 0x1A223A0;
		constexpr auto RotateAroundPivot_float_Vector2 = 0x1A23400;
		constexpr auto AlignRectToDevice_Rect = 0x1A220E0;
		constexpr auto HitTest_Rect_Vector2_int = 0x1A22D00;
		constexpr auto HitTest_Rect_Vector2_bool = 0x1A22DA0;
		constexpr auto HitTest_Rect_Event = 0x1A22E50;
		constexpr auto GetControlID_Injected_int_FocusType_Rect = 0x1A22920;
		constexpr auto AlignRectToDevice_Injected_Rect_int_int_Rect = 0x1A22000;
		constexpr auto set_compositionCursorPos_Injected_Vector2 = 0x1A23960;
	}

	namespace UnityEngine_Input {
		// Methods
		constexpr auto GetKeyInt_KeyCode = 0x2297C80;
		constexpr auto GetKeyUpInt_KeyCode = 0x2297CC0;
		constexpr auto GetKeyDownInt_KeyCode = 0x2297C40;
		constexpr auto GetAxis_string = 0x2297BC0;
		constexpr auto GetAxisRaw_string = 0x2297B80;
		constexpr auto GetButtonDown_string = 0x2297C00;
		constexpr auto GetMouseButton_int = 0x2297D80;
		constexpr auto GetMouseButtonDown_int = 0x2297D00;
		constexpr auto GetMouseButtonUp_int = 0x2297D40;
		constexpr auto GetTouch_int = 0x2297E00;
		constexpr auto GetKey_KeyCode = 0x2297C80;
		constexpr auto GetKeyUp_KeyCode = 0x2297CC0;
		constexpr auto GetKeyDown_KeyCode = 0x2297C40;
		constexpr auto get_anyKey = 0x2297E90;
		constexpr auto get_anyKeyDown = 0x2297E60;
		constexpr auto get_mousePosition = 0x2297FE0;
		constexpr auto get_mouseScrollDelta = 0x2298090;
		constexpr auto get_imeCompositionMode = 0x2297F70;
		constexpr auto set_imeCompositionMode_IMECompositionMode = 0x22982E0;
		constexpr auto get_compositionString = 0x2297F40;
		constexpr auto get_compositionCursorPos = 0x2297F00;
		constexpr auto set_compositionCursorPos_Vector2 = 0x22982A0;
		constexpr auto get_mousePresent = 0x2298020;
		constexpr auto get_touchCount = 0x22980D0;
		constexpr auto get_touchSupported = 0x2298100;
		constexpr auto get_touches = 0x2298130;
		constexpr auto GetTouch_Injected_int_Touch = 0x2297DC0;
		constexpr auto get_mousePosition_Injected_Vector3 = 0x2297FA0;
		constexpr auto get_mouseScrollDelta_Injected_Vector2 = 0x2298050;
		constexpr auto get_compositionCursorPos_Injected_Vector2 = 0x2297EC0;
		constexpr auto set_compositionCursorPos_Injected_Vector2 = 0x2298260;
	}

	namespace ModelState {
		// Class
		constexpr auto ModelState_TypeInfo = 0x31D0068;

		// Offsets
		constexpr auto ShouldPool = 0x10;
		constexpr auto _disposed = 0x11;
		constexpr auto waterLevel = 0x14;
		constexpr auto lookDir = 0x18;
		constexpr auto flags = 0x24;
		constexpr auto poseType = 0x28;
		constexpr auto inheritedVelocity = 0x2C;

		// Methods
		constexpr auto _ctor = 0x1E017C0;
		constexpr auto HasFlag_ModelState_Flag = 0x1E00CA0;
		constexpr auto SetFlag_ModelState_Flag_bool = 0x1E01750;
		constexpr auto get_ducked = 0x1E01810;
		constexpr auto set_ducked_bool = 0x1E01910;
		constexpr auto get_jumped = 0x1E01840;
		constexpr auto set_jumped_bool = 0x1E01970;
		constexpr auto get_onground = 0x1E01880;
		constexpr auto set_onground_bool = 0x1E019F0;
		constexpr auto get_sleeping = 0x1E018B0;
		constexpr auto set_sleeping_bool = 0x1E01A50;
		constexpr auto get_sprinting = 0x1E018C0;
		constexpr auto set_sprinting_bool = 0x1E01A70;
		constexpr auto get_onLadder = 0x1E01860;
		constexpr auto set_onLadder_bool = 0x1E019B0;
		constexpr auto get_flying = 0x1E01820;
		constexpr auto set_flying_bool = 0x1E01930;
		constexpr auto get_aiming = 0x1E017F0;
		constexpr auto set_aiming_bool = 0x1E018D0;
		constexpr auto get_prone = 0x1E01890;
		constexpr auto set_prone_bool = 0x1E01A10;
		constexpr auto get_mounted = 0x1E01850;
		constexpr auto set_mounted_bool = 0x1E01990;
		constexpr auto get_relaxed = 0x1E018A0;
		constexpr auto set_relaxed_bool = 0x1E01A30;
		constexpr auto get_crawling = 0x1E01800;
		constexpr auto set_crawling_bool = 0x1E018F0;
		constexpr auto get_onPhone = 0x1E01870;
		constexpr auto set_onPhone_bool = 0x1E019D0;
		constexpr auto get_headLook = 0x1E01830;
		constexpr auto set_headLook_bool = 0x1E01950;
		constexpr auto Equal_ModelState_ModelState = 0x1E00940;
		constexpr auto ResetToPool_ModelState = 0x1E00D80;
		constexpr auto ResetToPool = 0x1E00CD0;
		constexpr auto Dispose = 0x1E008C0;
		constexpr auto EnterPool = 0xB3CDB0;
		constexpr auto LeavePool = 0xB3CDE0;
		constexpr auto CopyTo_ModelState = 0x1DFF5A0;
		constexpr auto Copy = 0x1DFF5F0;
		constexpr auto Deserialize_Stream = 0x1E00640;
		constexpr auto DeserializeLengthDelimited_Stream = 0x1DFF690;
		constexpr auto DeserializeLength_Stream_int = 0x1DFFD20;
		constexpr auto Deserialize_bytearray = 0x1E00310;
		constexpr auto FromProto_Stream_bool = 0x1E00A50;
		constexpr auto WriteToStream_Stream = 0x1E01780;
		constexpr auto WriteToStreamDelta_Stream_ModelState = 0x1E017A0;
		constexpr auto ReadFromStream_Stream_int_bool = 0x1E00CB0;
		constexpr auto Deserialize_bytearray_ModelState_bool = 0x1DFFDB0;
		constexpr auto Deserialize_Stream_ModelState_bool = 0x1E000C0;
		constexpr auto DeserializeLengthDelimited_Stream_ModelState_bool = 0x1DFF710;
		constexpr auto DeserializeLength_Stream_int_ModelState_bool = 0x1DFFA30;
		constexpr auto SerializeDelta_Stream_ModelState_ModelState = 0x1E00E30;
		constexpr auto Serialize_Stream_ModelState = 0x1E01490;
		constexpr auto ToProtoBytes = 0x1E01770;
		constexpr auto ToProto_Stream = 0x1E01780;
		constexpr auto SerializeToBytes_ModelState = 0x1E01380;
		constexpr auto SerializeLengthDelimited_Stream_ModelState = 0x1E012D0;
	}

	namespace InputMessage {
		// Class
		constexpr auto InputMessage_TypeInfo = 0x31C25A0;

		// Offsets
		constexpr auto ShouldPool = 0x10;
		constexpr auto _disposed = 0x11;
		constexpr auto buttons = 0x14;
		constexpr auto aimAngles = 0x18;
		constexpr auto mouseDelta = 0x24;

		// Methods
		constexpr auto ResetToPool_InputMessage = 0x1DFEC90;
		constexpr auto ResetToPool = 0x1DFEBF0;
		constexpr auto Dispose = 0x1DFE990;
		constexpr auto EnterPool = 0xB3CDB0;
		constexpr auto LeavePool = 0xB3CDE0;
		constexpr auto CopyTo_InputMessage = 0x1DFD9F0;
		constexpr auto Copy = 0x1DFDA30;
		constexpr auto Deserialize_Stream = 0x1DFE0C0;
		constexpr auto DeserializeLengthDelimited_Stream = 0x1DFDD50;
		constexpr auto DeserializeLength_Stream_int = 0x1DFDDD0;
		constexpr auto Deserialize_bytearray = 0x1DFE2C0;
		constexpr auto FromProto_Stream_bool = 0x1DFEA10;
		constexpr auto WriteToStream_Stream = 0x1DFF560;
		constexpr auto WriteToStreamDelta_Stream_InputMessage = 0x1DFF580;
		constexpr auto ReadFromStream_Stream_int_bool = 0x1DFEBD0;
		constexpr auto Deserialize_bytearray_InputMessage_bool = 0x1DFE710;
		constexpr auto Deserialize_Stream_InputMessage_bool = 0x1DFE550;
		constexpr auto DeserializeLengthDelimited_Stream_InputMessage_bool = 0x1DFDAC0;
		constexpr auto DeserializeLength_Stream_int_InputMessage_bool = 0x1DFDE60;
		constexpr auto SerializeDelta_Stream_InputMessage_InputMessage = 0x1DFED30;
		constexpr auto Serialize_Stream_InputMessage = 0x1DFF2F0;
		constexpr auto ToProtoBytes = 0x1DFF550;
		constexpr auto ToProto_Stream = 0x1DFF560;
		constexpr auto SerializeToBytes_InputMessage = 0x1DFF1E0;
		constexpr auto SerializeLengthDelimited_Stream_InputMessage = 0x1DFF130;
		constexpr auto _ctor = 0xB3D670;
	}

	namespace ProtoBuf_PlayerTeam {
		// Offsets
		constexpr auto ShouldPool = 0x10;
		constexpr auto _disposed = 0x11;
		constexpr auto teamID = 0x18;
		constexpr auto teamName = 0x20;
		constexpr auto teamLeader = 0x28;
		constexpr auto members = 0x30;
		constexpr auto teamLifetime = 0x38;
		constexpr auto mapNote = 0x40;

		// Methods
		constexpr auto ResetToPool_PlayerTeam = 0x1EE2250;
		constexpr auto ResetToPool = 0x1EE24A0;
		constexpr auto Dispose = 0x1EE1E50;
		constexpr auto EnterPool = 0xB3CDB0;
		constexpr auto LeavePool = 0xB3CDE0;
		constexpr auto CopyTo_PlayerTeam = 0x1EE0360;
		constexpr auto Copy = 0x1EE05A0;
		constexpr auto Deserialize_Stream = 0x1EE1350;
		constexpr auto DeserializeLengthDelimited_Stream = 0x1EE0620;
		constexpr auto DeserializeLength_Stream_int = 0x1EE0AD0;
		constexpr auto Deserialize_bytearray = 0x1EE0F60;
		constexpr auto FromProto_Stream_bool = 0x1EE1ED0;
		constexpr auto WriteToStream_Stream = 0x1EE3110;
		constexpr auto WriteToStreamDelta_Stream_PlayerTeam = 0x1EE3130;
		constexpr auto ReadFromStream_Stream_int_bool = 0x1EE2230;
		constexpr auto Deserialize_bytearray_PlayerTeam_bool = 0x1EE1A10;
		constexpr auto Deserialize_Stream_PlayerTeam_bool = 0x1EE16B0;
		constexpr auto DeserializeLengthDelimited_Stream_PlayerTeam_bool = 0x1EE06A0;
		constexpr auto DeserializeLength_Stream_int_PlayerTeam_bool = 0x1EE0B60;
		constexpr auto SerializeDelta_Stream_PlayerTeam_PlayerTeam = 0x1EE2700;
		constexpr auto Serialize_Stream_PlayerTeam = 0x1EE2D20;
		constexpr auto ToProtoBytes = 0x1EE3100;
		constexpr auto ToProto_Stream = 0x1EE3110;
		constexpr auto SerializeToBytes_PlayerTeam = 0x1EE2C10;
		constexpr auto SerializeLengthDelimited_Stream_PlayerTeam = 0x1EE2B60;
		constexpr auto _ctor = 0xB3D670;
	}

	namespace ProtoBuf_PlayerProjectileUpdate {
		// Offsets
		constexpr auto ShouldPool = 0x10;
		constexpr auto _disposed = 0x11;
		constexpr auto projectileID = 0x14;
		constexpr auto curPosition = 0x18;
		constexpr auto curVelocity = 0x24;
		constexpr auto travelTime = 0x30;

		// Methods
		constexpr auto ResetToPool_PlayerProjectileUpdate = 0x1EDD540;
		constexpr auto ResetToPool = 0x1EDD5F0;
		constexpr auto Dispose = 0x1EDD1E0;
		constexpr auto EnterPool = 0xB3CDB0;
		constexpr auto LeavePool = 0xB3CDE0;
		constexpr auto CopyTo_PlayerProjectileUpdate = 0x1EDC070;
		constexpr auto Copy = 0x1EDC0B0;
		constexpr auto Deserialize_Stream = 0x1EDC7E0;
		constexpr auto DeserializeLengthDelimited_Stream = 0x1EDC150;
		constexpr auto DeserializeLength_Stream_int = 0x1EDC750;
		constexpr auto Deserialize_bytearray = 0x1EDCA20;
		constexpr auto FromProto_Stream_bool = 0x1EDD310;
		constexpr auto WriteToStream_Stream = 0x1EDDF50;
		constexpr auto WriteToStreamDelta_Stream_PlayerProjectileUpdate = 0x1EDDF70;
		constexpr auto ReadFromStream_Stream_int_bool = 0x1EDD520;
		constexpr auto Deserialize_bytearray_PlayerProjectileUpdate_bool = 0x1EDCF10;
		constexpr auto Deserialize_Stream_PlayerProjectileUpdate_bool = 0x1EDCD00;
		constexpr auto DeserializeLengthDelimited_Stream_PlayerProjectileUpdate_bool = 0x1EDC1D0;
		constexpr auto DeserializeLength_Stream_int_PlayerProjectileUpdate_bool = 0x1EDC4A0;
		constexpr auto SerializeDelta_Stream_PlayerProjectileUpdate_PlayerProjectileUpdate = 0x1EDD6A0;
		constexpr auto Serialize_Stream_PlayerProjectileUpdate = 0x1EDDCB0;
		constexpr auto ToProtoBytes = 0x1EDDF40;
		constexpr auto ToProto_Stream = 0x1EDDF50;
		constexpr auto SerializeToBytes_PlayerProjectileUpdate = 0x1EDDBA0;
		constexpr auto SerializeLengthDelimited_Stream_PlayerProjectileUpdate = 0x1EDDAF0;
		constexpr auto _ctor = 0xB3D670;
	}

	namespace TOD_AtmosphereParameters {
		// Offsets
		constexpr auto RayleighMultiplier = 0x10;
		constexpr auto MieMultiplier = 0x14;
		constexpr auto Brightness = 0x18;
		constexpr auto Contrast = 0x1C;
		constexpr auto Directionality = 0x20;
		constexpr auto Fogginess = 0x24;

		// Methods
		constexpr auto _ctor = 0x10E5060;
	}

	namespace TOD_NightParameters {
		// Offsets
		constexpr auto MoonColor = 0x10;
		constexpr auto LightColor = 0x18;
		constexpr auto RayColor = 0x20;
		constexpr auto SkyColor = 0x28;
		constexpr auto CloudColor = 0x30;
		constexpr auto FogColor = 0x38;
		constexpr auto AmbientColor = 0x40;
		constexpr auto LightIntensity = 0x48;
		constexpr auto ShadowStrength = 0x4C;
		constexpr auto AmbientMultiplier = 0x50;
		constexpr auto ReflectionMultiplier = 0x54;

		// Methods
		constexpr auto _ctor = 0x10E8F70;
	}

	namespace TOD_MoonParameters {
		// Offsets
		constexpr auto MeshSize = 0x10;
		constexpr auto MeshBrightness = 0x14;
		constexpr auto MeshContrast = 0x18;
		constexpr auto HaloSize = 0x1C;
		constexpr auto HaloBrightness = 0x20;
		constexpr auto Position = 0x24;

		// Methods
		constexpr auto _ctor = 0x10E8F30;
	}

	namespace TOD_CloudParameters {
		// Offsets
		constexpr auto Size = 0x10;
		constexpr auto Opacity = 0x14;
		constexpr auto Coverage = 0x18;
		constexpr auto Sharpness = 0x1C;
		constexpr auto Coloring = 0x20;
		constexpr auto Attenuation = 0x24;
		constexpr auto Saturation = 0x28;
		constexpr auto Scattering = 0x2C;
		constexpr auto Brightness = 0x30;

		// Methods
		constexpr auto _ctor = 0x10E64F0;
	}

	namespace TOD_Sky {
		// Offsets
		constexpr auto ColorSpace = 0x18;
		constexpr auto ColorRange = 0x1C;
		constexpr auto ColorOutput = 0x20;
		constexpr auto SkyQuality = 0x24;
		constexpr auto CloudQuality = 0x28;
		constexpr auto MeshQuality = 0x2C;
		constexpr auto StarQuality = 0x30;
		constexpr auto Cycle = 0x38;
		constexpr auto World = 0x40;
		constexpr auto Atmosphere = 0x48;
		constexpr auto Day = 0x50;
		constexpr auto Night = 0x58;
		constexpr auto Sun = 0x60;
		constexpr auto Moon = 0x68;
		constexpr auto Stars = 0x70;
		constexpr auto Clouds = 0x78;
		constexpr auto Light = 0x80;
		constexpr auto Fog = 0x88;
		constexpr auto Ambient = 0x90;
		constexpr auto Reflection = 0x98;
		constexpr auto Initializedk__BackingField = 0xA0;
		constexpr auto Componentsk__BackingField = 0xA8;
		constexpr auto Resourcesk__BackingField = 0xB0;
		constexpr auto IsDayk__BackingField = 0xB8;
		constexpr auto IsNightk__BackingField = 0xB9;
		constexpr auto LerpValuek__BackingField = 0xBC;
		constexpr auto SunZenithk__BackingField = 0xC0;
		constexpr auto SunAltitudek__BackingField = 0xC4;
		constexpr auto SunAzimuthk__BackingField = 0xC8;
		constexpr auto MoonZenithk__BackingField = 0xCC;
		constexpr auto MoonAltitudek__BackingField = 0xD0;
		constexpr auto MoonAzimuthk__BackingField = 0xD4;
		constexpr auto SunsetTimek__BackingField = 0xD8;
		constexpr auto SunriseTimek__BackingField = 0xDC;
		constexpr auto LocalSiderealTimek__BackingField = 0xE0;
		constexpr auto SunVisibilityk__BackingField = 0xE4;
		constexpr auto MoonVisibilityk__BackingField = 0xE8;
		constexpr auto SunDirectionk__BackingField = 0xEC;
		constexpr auto MoonDirectionk__BackingField = 0xF8;
		constexpr auto LightDirectionk__BackingField = 0x104;
		constexpr auto LocalSunDirectionk__BackingField = 0x110;
		constexpr auto LocalMoonDirectionk__BackingField = 0x11C;
		constexpr auto LocalLightDirectionk__BackingField = 0x128;
		constexpr auto SunLightColork__BackingField = 0x134;
		constexpr auto MoonLightColork__BackingField = 0x144;
		constexpr auto SunRayColork__BackingField = 0x154;
		constexpr auto MoonRayColork__BackingField = 0x164;
		constexpr auto SunSkyColork__BackingField = 0x174;
		constexpr auto MoonSkyColork__BackingField = 0x184;
		constexpr auto SunMeshColork__BackingField = 0x194;
		constexpr auto MoonMeshColork__BackingField = 0x1A4;
		constexpr auto SunCloudColork__BackingField = 0x1B4;
		constexpr auto MoonCloudColork__BackingField = 0x1C4;
		constexpr auto FogColork__BackingField = 0x1D4;
		constexpr auto GroundColork__BackingField = 0x1E4;
		constexpr auto AmbientColork__BackingField = 0x1F4;
		constexpr auto MoonHaloColork__BackingField = 0x204;
		constexpr auto ReflectionCur = 0x218;
		constexpr auto ReflectionSrc = 0x220;
		constexpr auto ReflectionDst = 0x228;
		constexpr auto timeSinceLightUpdate = 0x230;
		constexpr auto timeSinceAmbientUpdate = 0x234;
		constexpr auto timeSinceReflectionUpdate = 0x238;
		constexpr auto kBetaMie = 0x23C;
		constexpr auto kSun = 0x248;
		constexpr auto k4PI = 0x258;
		constexpr auto kRadius = 0x268;
		constexpr auto kScale = 0x278;

		// Static Offsets
		constexpr auto instances = 0x0;
		constexpr auto ReflectionResolution = 0x8;
		constexpr auto ReflectionUpdateInterval = 0xC;
		constexpr auto ReflectionTimeSlicing = 0x10;

		// Methods
		constexpr auto get_Instances = 0x1278EB0;
		constexpr auto get_Instance = 0x1278DE0;
		constexpr auto get_Initialized = 0xC9AB30;
		constexpr auto set_Initialized_bool = 0xC9AB40;
		constexpr auto get_Headless = 0x1278DC0;
		constexpr auto get_Components = 0x961960;
		constexpr auto set_Components_TOD_Components = 0xC3D3D0;
		constexpr auto get_Resources = 0x2FF650;
		constexpr auto set_Resources_TOD_Resources = 0x2FF730;
		constexpr auto get_IsDay = 0x1278F10;
		constexpr auto set_IsDay_bool = 0x12792E0;
		constexpr auto get_IsNight = 0x1278F20;
		constexpr auto set_IsNight_bool = 0x12792F0;
		constexpr auto get_Radius = 0x12791C0;
		constexpr auto get_Diameter = 0x1278D60;
		constexpr auto get_LerpValue = 0x876290;
		constexpr auto set_LerpValue_float = 0x876450;
		constexpr auto get_SunZenith = 0x1279280;
		constexpr auto set_SunZenith_float = 0x12794E0;
		constexpr auto get_SunAltitude = 0x1279200;
		constexpr auto set_SunAltitude_float = 0x1279440;
		constexpr auto get_SunAzimuth = 0x1279210;
		constexpr auto set_SunAzimuth_float = 0x1279450;
		constexpr auto get_MoonZenith = 0x1279150;
		constexpr auto set_MoonZenith_float = 0x1279430;
		constexpr auto get_MoonAltitude = 0x12790B0;
		constexpr auto set_MoonAltitude_float = 0x1279380;
		constexpr auto get_MoonAzimuth = 0x12790C0;
		constexpr auto set_MoonAzimuth_float = 0x1279390;
		constexpr auto get_SunsetTime = 0x12792A0;
		constexpr auto set_SunsetTime_float = 0x1279500;
		constexpr auto get_SunriseTime = 0x1279290;
		constexpr auto set_SunriseTime_float = 0x12794F0;
		constexpr auto get_LocalSiderealTime = 0x117AA80;
		constexpr auto set_LocalSiderealTime_float = 0x117B280;
		constexpr auto get_LightZenith = 0x1278FD0;
		constexpr auto get_LightIntensity = 0x1278FA0;
		constexpr auto get_SunVisibility = 0x1279270;
		constexpr auto set_SunVisibility_float = 0x12794D0;
		constexpr auto get_MoonVisibility = 0x117A8D0;
		constexpr auto set_MoonVisibility_float = 0x1279420;
		constexpr auto get_SunDirection = 0x1279220;
		constexpr auto set_SunDirection_Vector3 = 0x1279470;
		constexpr auto get_MoonDirection = 0x12790E0;
		constexpr auto set_MoonDirection_Vector3 = 0x12793B0;
		constexpr auto get_LightDirection = 0x1278F80;
		constexpr auto set_LightDirection_Vector3 = 0x1279300;
		constexpr auto get_LocalSunDirection = 0x1279090;
		constexpr auto set_LocalSunDirection_Vector3 = 0x1279360;
		constexpr auto get_LocalMoonDirection = 0x1279070;
		constexpr auto set_LocalMoonDirection_Vector3 = 0x1279340;
		constexpr auto get_LocalLightDirection = 0x1279050;
		constexpr auto set_LocalLightDirection_Vector3 = 0x1279320;
		constexpr auto get_SunLightColor = 0x1279240;
		constexpr auto set_SunLightColor_Color = 0x1279490;
		constexpr auto get_MoonLightColor = 0x1279110;
		constexpr auto set_MoonLightColor_Color = 0x12793E0;
		constexpr auto get_LightColor = 0x1278F30;
		constexpr auto get_SunRayColor = 0x1279260;
		constexpr auto set_SunRayColor_Color = 0x12794B0;
		constexpr auto get_MoonRayColor = 0x1279130;
		constexpr auto set_MoonRayColor_Color = 0x1279400;
		constexpr auto get_SunSkyColor = 0xE731A0;
		constexpr auto set_SunSkyColor_Color = 0x12794C0;
		constexpr auto get_MoonSkyColor = 0x1279140;
		constexpr auto set_MoonSkyColor_Color = 0x1279410;
		constexpr auto get_SunMeshColor = 0x1279250;
		constexpr auto set_SunMeshColor_Color = 0x12794A0;
		constexpr auto get_MoonMeshColor = 0x1279120;
		constexpr auto set_MoonMeshColor_Color = 0x12793F0;
		constexpr auto get_SunCloudColor = 0xC4CAB0;
		constexpr auto set_SunCloudColor_Color = 0x1279460;
		constexpr auto get_MoonCloudColor = 0x12790D0;
		constexpr auto set_MoonCloudColor_Color = 0x12793A0;
		constexpr auto get_FogColor = 0x1278DA0;
		constexpr auto set_FogColor_Color = 0x12792C0;
		constexpr auto get_GroundColor = 0x1278DB0;
		constexpr auto set_GroundColor_Color = 0x12792D0;
		constexpr auto get_AmbientColor = 0x1278D50;
		constexpr auto set_AmbientColor_Color = 0x12792B0;
		constexpr auto get_MoonHaloColor = 0x1279100;
		constexpr auto set_MoonHaloColor_Color = 0x12793D0;
		constexpr auto get_Probe = 0x12791A0;
		constexpr auto get_ProbeInstance = 0x1279180;
		constexpr auto get_ProbeEx = 0x1279160;
		constexpr auto OrbitalToUnity_float_float_float = 0x1270F80;
		constexpr auto OrbitalToLocal_float_float = 0x1270EC0;
		constexpr auto SampleAtmosphere_Vector3_bool = 0x12726A0;
		constexpr auto RenderToSphericalHarmonics = 0x1272540;
		constexpr auto RenderToSphericalHarmonics_float_float = 0x1271520;
		constexpr auto RenderToCubemap_RenderTexture = 0x1271090;
		constexpr auto RenderToProbe = 0x12711D0;
		constexpr auto ReflectionIsUpdating = 0x1271050;
		constexpr auto UpdateProbeBlending_float = 0x1276BA0;
		constexpr auto UpdateProbeProperties_ReflectionProbe = 0x1276C90;
		constexpr auto SampleFogColor_bool = 0x1272A20;
		constexpr auto SampleSkyColor = 0x1272CD0;
		constexpr auto SampleEquatorColor = 0x1272960;
		constexpr auto UpdateFog = 0x1276B20;
		constexpr auto UpdateAmbient = 0x12741F0;
		constexpr auto UpdateReflection = 0x1277580;
		constexpr auto DelayReflectionUpdate = 0x1270820;
		constexpr auto LoadParameters_string = 0x1270C10;
		constexpr auto SaveParameters = 0x1272DE0;
		constexpr auto UpdateQualitySettings = 0x1276F70;
		constexpr auto UpdateRenderSettings = 0x1277680;
		constexpr auto UpdateShaderKeywords = 0x1277C20;
		constexpr auto UpdateShaderProperties = 0x1277E20;
		constexpr auto ShaderScale_float = 0x1273350;
		constexpr auto ShaderMiePhase_float_float = 0x1273030;
		constexpr auto ShaderRayleighPhase_float = 0x1273330;
		constexpr auto ShaderNightSkyColor_Vector3 = 0x1273240;
		constexpr auto ShaderMoonHaloColor_Vector3 = 0x1273100;
		constexpr auto TOD_HDR2LDR_Color = 0x1273FA0;
		constexpr auto TOD_GAMMA2LINEAR_Color = 0x1273F40;
		constexpr auto TOD_LINEAR2GAMMA_Color = 0x1274120;
		constexpr auto ShaderScatteringColor_Vector3_bool = 0x1273400;
		constexpr auto Initialize = 0x1270830;
		constexpr auto Cleanup = 0x1270670;
		constexpr auto OnEnable = 0x1270E70;
		constexpr auto OnDisable = 0x1270E60;
		constexpr auto LateUpdate = 0x1270930;
		constexpr auto OnValidate = 0x1270E80;
		constexpr auto UpdateScattering = 0x1277A70;
		constexpr auto UpdateCelestials = 0x1274960;
		constexpr auto _ctor = 0x1278C40;
		constexpr auto _cctor = 0x1278BA0;
	}

	namespace BaseCombatEntity {
		// Class
		constexpr auto BaseCombatEntity_TypeInfo = 0x31C3310;

		// Offsets
		constexpr auto __menuOption_Menu_Pickup = 0x160;
		constexpr auto skeletonProperties = 0x1B8;
		constexpr auto baseProtection = 0x1C0;
		constexpr auto startHealth = 0x1C8;
		constexpr auto pickup = 0x1D0;
		constexpr auto repair = 0x1F0;
		constexpr auto ShowHealthInfo = 0x218;
		constexpr auto lifestate = 0x21C;
		constexpr auto sendsHitNotification = 0x220;
		constexpr auto sendsMeleeHitNotification = 0x221;
		constexpr auto markAttackerHostile = 0x222;
		constexpr auto _health = 0x224;
		constexpr auto _maxHealth = 0x228;
		constexpr auto faction = 0x22C;
		constexpr auto deathTime = 0x230;
		constexpr auto lastNotifyFrame = 0x234;

		// Methods
		constexpr auto GetMenuOptions_List_Option_ = 0x8DB490;
		constexpr auto get_HasMenuOptions = 0x8DC490;
		constexpr auto OnRpcMessage_BasePlayer_uint_Message = 0x8DBBA0;
		constexpr auto HitNotify_BaseEntity_RPCMessage = 0x8DB820;
		constexpr auto ClientInit_Entity = 0x8DB020;
		constexpr auto DisplayHealthInfo_BasePlayer = 0x571EA0;
		constexpr auto GetEyeTransform = 0x8DB3D0;
		constexpr auto OnLifeStateChanged = 0x8DBB70;
		constexpr auto GetPickupCount = 0x8DB800;
		constexpr auto CanPickup_BasePlayer = 0x8DAF80;
		constexpr auto OnPickedUp_Item_BasePlayer = 0x2F5370;
		constexpr auto OnPickedUpPreItemMove_Item_BasePlayer = 0x2F5370;
		constexpr auto Menu_Pickup_BasePlayer = 0x8DBA10;
		constexpr auto Menu_Pickup_TimeStart = 0x2F5370;
		constexpr auto Menu_Pickup_If_BasePlayer = 0x8DB9F0;
		constexpr auto BuildCost = 0x8DAEB0;
		constexpr auto IsDead = 0x8DB940;
		constexpr auto IsAlive = 0x8DB930;
		constexpr auto GetFaction = 0x8DB480;
		constexpr auto IsFriendly_BaseCombatEntity = 0x2F4190;
		constexpr auto get_SecondsSinceDeath = 0x8DC560;
		constexpr auto get_healthFraction = 0x8DC580;
		constexpr auto ResetState = 0x8DC160;
		constexpr auto DestroyShared = 0x8DB060;
		constexpr auto GetThreatLevel = 0x2FD130;
		constexpr auto PenetrationResistance_HitInfo = 0x8DC0D0;
		constexpr auto ScaleDamage_HitInfo = 0x8DC210;
		constexpr auto SkeletonLookup_uint = 0x8DC350;
		constexpr auto Load_BaseNetworkable_LoadInfo = 0x8DB950;
		constexpr auto get_health = 0x8DB810;
		constexpr auto set_health_float = 0x8DC5D0;
		constexpr auto Health = 0x8DB810;
		constexpr auto MaxHealth = 0x305D90;
		constexpr auto StartHealth = 0x305E70;
		constexpr auto StartMaxHealth = 0x8DC400;
		constexpr auto SetMaxHealth_float = 0x8DC2C0;
		constexpr auto DoHitNotify_HitInfo = 0x8DB070;
		constexpr auto OnAttacked_HitInfo = 0x8DBA50;
		constexpr auto _ctor = 0x8DC420;
	}

	namespace BaseMountable {
		// Class
		constexpr auto BaseMountable_TypeInfo = 0x31D0398;

		// Offsets
		constexpr auto __menuOption_Menu_Mount = 0x238;
		constexpr auto eyePositionOverride = 0x290;
		constexpr auto eyeCenterOverride = 0x298;
		constexpr auto pitchClamp = 0x2A0;
		constexpr auto yawClamp = 0x2A8;
		constexpr auto canWieldItems = 0x2B0;
		constexpr auto relativeViewAngles = 0x2B1;
		constexpr auto mountAnchor = 0x2B8;
		constexpr auto mountPose = 0x2C0;
		constexpr auto maxMountDistance = 0x2C4;
		constexpr auto dismountPositions = 0x2C8;
		constexpr auto checkPlayerLosOnMount = 0x2D0;
		constexpr auto disableMeshCullingForPlayers = 0x2D1;
		constexpr auto allowHeadLook = 0x2D2;
		constexpr auto modifiesPlayerCollider = 0x2D3;
		constexpr auto customPlayerCollider = 0x2D4;
		constexpr auto mountSoundDef = 0x2E8;
		constexpr auto swapSoundDef = 0x2F0;
		constexpr auto dismountSoundDef = 0x2F8;
		constexpr auto mountTimeStatType = 0x300;
		constexpr auto allowedGestures = 0x304;
		constexpr auto canDrinkWhileMounted = 0x308;
		constexpr auto allowSleeperMounting = 0x309;
		constexpr auto animateClothInLocalSpace = 0x30A;
		constexpr auto MountedCameraMode = 0x30C;
		constexpr auto isMobile = 0x310;
		constexpr auto SideLeanAmount = 0x314;

		// Methods
		constexpr auto GetMenuOptions_List_Option_ = 0x2FCE20;
		constexpr auto get_HasMenuOptions = 0x2FEF10;
		constexpr auto OnRpcMessage_BasePlayer_uint_Message = 0x2FDC70;
		constexpr auto CanHoldItems = 0x2FC350;
		constexpr auto GetMountedCameraMode = 0x2FD190;
		constexpr auto DirectlyMountable = 0x2F7110;
		constexpr auto GetEyeOverride = 0x2FCD90;
		constexpr auto GetMountedBodyAngles = 0x2FD140;
		constexpr auto ModifiesThirdPersonCamera = 0x2F4190;
		constexpr auto GetPitchClamp = 0x2FD370;
		constexpr auto GetYawClamp = 0x2FD3A0;
		constexpr auto IsMounted = 0x2FD440;
		constexpr auto EyePositionForPlayer_BasePlayer_Quaternion = 0x2FCA10;
		constexpr auto EyeCenterForPlayer_BasePlayer_Quaternion = 0x2FC910;
		constexpr auto WaterFactorForPlayer_BasePlayer = 0x2FEDA0;
		constexpr auto MaxVelocity = 0x2FD580;
		constexpr auto PlayerIsMounted_BasePlayer = 0x2FE270;
		constexpr auto OnClientInput_BasePlayer = 0x2F5370;
		constexpr auto ForceUpdatePlayerModel_BasePlayer = 0x2F4190;
		constexpr auto UpdatePlayerModel_PlayerModel_bool = 0x2FE7B0;
		constexpr auto ProcessPlayerModel_PlayerModel = 0x2F5370;
		constexpr auto SuppressHandsAnimationLayer = 0x2F4190;
		constexpr auto GetAnimationOverride = 0x2FCD80;
		constexpr auto GetSpineLookAtWeight = 0x2FD390;
		constexpr auto GetMountedAnimationSpeed = 0x2FD130;
		constexpr auto get_DisableLegsMeshAtExtremeViewAnglesInFirstPersonWithEyes = 0x2F7110;
		constexpr auto get_FirstPersonWithArmsEyesLerp = 0x2FEF00;
		constexpr auto ModifyThirdPersonEyeOffset_Vector3 = 0x2FD740;
		constexpr auto LockThirdPersonOffset_Vector3 = 0x2FD510;
		constexpr auto LocalPlayerIsMounted = 0x2FD450;
		constexpr auto VehicleParent = 0x2FED10;
		constexpr auto get_IsSummerDlcVehicle = 0x2F4190;
		constexpr auto IsInstrument = 0x2F4190;
		constexpr auto UpdatePlayerModel_BasePlayer = 0x2FE890;
		constexpr auto UpdatePlayerRotation_BasePlayer = 0x2FEC60;
		constexpr auto SetNetworkPosition_Vector3 = 0x2FE780;
		constexpr auto UpdatePlayerPosition_BasePlayer = 0x2FEAF0;
		constexpr auto GetMountedRotation = 0x2FD260;
		constexpr auto GetMountedPosition = 0x2FD1A0;
		constexpr auto PlayerMounted_BasePlayer_bool = 0x2FE350;
		constexpr auto PlayerDismounted_BasePlayer_bool = 0x2FDD90;
		constexpr auto ClientOnPlayerDismounted_BasePlayer = 0x2FC360;
		constexpr auto ClientOnPlayerMounted_BasePlayer = 0x2FC400;
		constexpr auto OverrideViewAngles_BasePlayer = 0x2FDD60;
		constexpr auto DoPlayerMovement_BasePlayer_InputState_ModelState = 0x2FC5E0;
		constexpr auto HoldToDismount = 0x2FD3C0;
		constexpr auto ClientRequestDismount = 0x2FC4D0;
		constexpr auto Menu_Mount_BasePlayer = 0x2FD6D0;
		constexpr auto Menu_Mount_ShowIf_BasePlayer = 0x2FD630;
		constexpr auto MountMenuVisible_BasePlayer = 0x2FD760;
		constexpr auto NearMountPoint_BasePlayer = 0x2FD7F0;
		constexpr auto ConvertVector_Vector3 = 0x2FC510;
		constexpr auto get_BlocksDoors = 0x2F7110;
		constexpr auto _ctor = 0x2FEE50;
		constexpr auto _DoPlayerMovement_b__77_0_BasePlayer = 0x2FC4D0;
	}

	namespace BasePlayer {
		// Class
		constexpr auto BasePlayer_TypeInfo = 0x31D37A8;

		// Offsets
		constexpr auto __menuOption_Climb = 0x238;
		constexpr auto __menuOption_Drink = 0x290;
		constexpr auto __menuOption_InviteToTeam = 0x2E8;
		constexpr auto __menuOption_Menu_AssistPlayer = 0x340;
		constexpr auto __menuOption_Menu_LootPlayer = 0x398;
		constexpr auto __menuOption_Promote = 0x3F0;
		constexpr auto __menuOption_SaltWater = 0x448;
		constexpr auto currentViewMode = 0x4A0;
		constexpr auto selectedViewMode = 0x4A4;
		constexpr auto lastRevivePoint = 0x4A8;
		constexpr auto lastReviveDirection = 0x4B4;
		constexpr auto playerModel = 0x4C0;
		constexpr auto Frozen = 0x4C8;
		constexpr auto voiceRecorder = 0x4D0;
		constexpr auto voiceSpeaker = 0x4D8;
		constexpr auto input = 0x4E0;
		constexpr auto movement = 0x4E8;
		constexpr auto collision = 0x4F0;
		constexpr auto _lookingAt = 0x4F8;
		constexpr auto _lookingAtEntity = 0x500;
		constexpr auto _lookingAtCollider = 0x508;
		constexpr auto lookingAtPointk__BackingField = 0x510;
		constexpr auto wakeTime = 0x51C;
		constexpr auto needsClothesRebuild = 0x520;
		constexpr auto wasSleeping = 0x521;
		constexpr auto wokeUpBefore = 0x522;
		constexpr auto wasDead = 0x523;
		constexpr auto lastClothesHash = 0x524;
		constexpr auto IsWearingDiveGogglesk__BackingField = 0x528;
		constexpr auto GestureViewModel = 0x530;
		constexpr auto timeSinceUpdatedLookingAt = 0x538;
		constexpr auto nextTopologyTestTime = 0x53C;
		constexpr auto usePressTime = 0x540;
		constexpr auto useHeldTime = 0x544;
		constexpr auto lookingAtTest = 0x548;
		constexpr auto cachedWaterDrinkingPoint = 0x550;
		constexpr auto gestureList = 0x560;
		constexpr auto gestureFinishedTime = 0x568;
		constexpr auto blockHeldInputTimer = 0x56C;
		constexpr auto currentGesture = 0x570;
		constexpr auto disabledHeldEntity = 0x578;
		constexpr auto nextGestureMenuOpenTime = 0x580;
		constexpr auto lastGestureCancel = 0x584;
		constexpr auto client_lastHelloTime = 0x588;
		constexpr auto currentTeam = 0x590;
		constexpr auto clientTeam = 0x598;
		constexpr auto lastReceivedTeamTime = 0x5A0;
		constexpr auto lastPresenceTeamId = 0x5A8;
		constexpr auto lastPresenceTeamSize = 0x5B0;
		constexpr auto playerGroupKey = 0x5B8;
		constexpr auto playerGroupSizeKey = 0x5C0;
		constexpr auto clActiveItem = 0x5C8;
		constexpr auto ClientCurrentMapNote = 0x5D0;
		constexpr auto ClientCurrentDeathNote = 0x5D8;
		constexpr auto missions = 0x5E0;
		constexpr auto _activeMission = 0x5E8;
		constexpr auto modelState = 0x5F0;
		constexpr auto mounted = 0x5F8;
		constexpr auto nextSeatSwapTime = 0x608;
		constexpr auto PetEntity = 0x610;
		constexpr auto lastPetCommandIssuedTime = 0x618;
		constexpr auto PetPrefabID = 0x61C;
		constexpr auto PetID = 0x620;
		constexpr auto cachedBuildingPrivilegeTime = 0x624;
		constexpr auto cachedBuildingPrivilege = 0x628;
		constexpr auto maxProjectileID = 0x630;
		constexpr auto lastUpdateTime = 0x634;
		constexpr auto cachedThreatLevel = 0x638;
		constexpr auto serverTickRate = 0x63C;
		constexpr auto clientTickRate = 0x640;
		constexpr auto serverTickInterval = 0x644;
		constexpr auto clientTickInterval = 0x648;
		constexpr auto lastSentTickTime = 0x64C;
		constexpr auto lastSentTick = 0x650;
		constexpr auto nextVisThink = 0x658;
		constexpr auto lastTimeSeen = 0x65C;
		constexpr auto debugPrevVisible = 0x660;
		constexpr auto fallDamageEffect = 0x668;
		constexpr auto drownEffect = 0x670;
		constexpr auto playerFlags = 0x678;
		constexpr auto eyes = 0x680;
		constexpr auto inventory = 0x688;
		constexpr auto blueprints = 0x690;
		constexpr auto metabolism = 0x698;
		constexpr auto modifiers = 0x6A0;
		constexpr auto playerCollider = 0x6A8;
		constexpr auto Belt = 0x6B0;
		constexpr auto playerRigidbody = 0x6B8;
		constexpr auto userID = 0x6C0;
		constexpr auto UserIDString = 0x6C8;
		constexpr auto gamemodeteam = 0x6D0;
		constexpr auto reputation = 0x6D4;
		constexpr auto _displayName = 0x6D8;
		constexpr auto _lastSetName = 0x6E0;
		constexpr auto playerColliderStanding = 0x6E8;
		constexpr auto playerColliderDucked = 0x6FC;
		constexpr auto playerColliderCrawling = 0x710;
		constexpr auto playerColliderLyingDown = 0x724;
		constexpr auto cachedProtection = 0x738;
		constexpr auto lastHeadshotSoundTime = 0x740;
		constexpr auto nextColliderRefreshTime = 0x744;
		constexpr auto clothingBlocksAiming = 0x748;
		constexpr auto clothingMoveSpeedReduction = 0x74C;
		constexpr auto clothingWaterSpeedBonus = 0x750;
		constexpr auto clothingAccuracyBonus = 0x754;
		constexpr auto equippingBlocked = 0x758;
		constexpr auto eggVision = 0x75C;
		constexpr auto activeTelephone = 0x760;
		constexpr auto designingAIEntity = 0x768;

		// Static Offsets
		constexpr auto lootPanelOverride = 0x0;
		constexpr auto emptyState = 0x8;
		constexpr auto visiblePlayerList = 0x10;
		constexpr auto craftMode = 0x18;
		constexpr auto lastDeathTimeClient = 0x1C;
		constexpr auto MaxTeamSizeToast = 0x20;
		constexpr auto PetWheelHasBeenOpened = 0x28;
		constexpr auto oldCameraFix = 0x29;

		// Methods
		constexpr auto GetMenuOptions_List_Option_ = 0x312340;
		constexpr auto get_HasMenuOptions = 0x32B4B0;
		constexpr auto OnRpcMessage_BasePlayer_uint_Message = 0x319DC0;
		constexpr auto CanBeLooted_BasePlayer = 0x308520;
		constexpr auto get_LootPanelTitle = 0x32B9D0;
		constexpr auto Menu_LootPlayer_BasePlayer = 0x318DC0;
		constexpr auto Menu_LootPlayer_ShowIf_BasePlayer = 0x318DA0;
		constexpr auto RPC_OpenLootPanel_BaseEntity_RPCMessage = 0x3238A0;
		constexpr auto PlayOpenSound = 0x321C00;
		constexpr auto InFirstPersonMode = 0x314C20;
		constexpr auto UpdateViewMode = 0x329770;
		constexpr auto get_idealViewMode = 0x32BBB0;
		constexpr auto get_shouldDrawBody = 0x32BFF0;
		constexpr auto OnViewModeChanged = 0x3216B0;
		constexpr auto ModifyCamera = 0x318E30;
		constexpr auto Menu_AssistPlayer_BasePlayer = 0x318D60;
		constexpr auto Menu_AssistPlayer_TimeStart = 0x318D20;
		constexpr auto Menu_AssistPlayer_ShowIf_BasePlayer = 0x318AB0;
		constexpr auto get_lookingAt = 0x32BF60;
		constexpr auto get_lookingAtEntity = 0x32BEB0;
		constexpr auto get_lookingAtCollider = 0x32BE20;
		constexpr auto get_lookingAtPoint = 0x32BF40;
		constexpr auto set_lookingAtPoint_Vector3 = 0x32C2F0;
		constexpr auto GetExtrapolationTime = 0x311710;
		constexpr auto GetLocalVelocityClient = 0x312140;
		constexpr auto ClientInit_Entity = 0x30A000;
		constexpr auto CreatePlayerModel = 0x30EC30;
		constexpr auto CreatePlayerCollision = 0x30EA40;
		constexpr auto CreatePlayerMovement = 0x30F190;
		constexpr auto InitLocalPlayer = 0x314C50;
		constexpr auto InitRemotePlayer = 0x314F30;
		constexpr auto HasLocalControls = 0x3142D0;
		constexpr auto SetNetworkPosition_Vector3 = 0x326500;
		constexpr auto SetNetworkRotation_Quaternion = 0x3265B0;
		constexpr auto DoClientDestroy = 0x30F610;
		constexpr auto PostNetworkUpdate = 0x3223F0;
		constexpr auto OnFirstWakeUp = 0x3197E0;
		constexpr auto get_TimeAwake = 0x32B9F0;
		constexpr auto CL_ClothingChanged = 0x307B00;
		constexpr auto ForceRebuild = 0x310C60;
		constexpr auto RebuildWorldModel_PlayerModel = 0x323D40;
		constexpr auto SetDefaultFootstepEffects = 0x325CB0;
		constexpr auto OnSignal_BaseEntity_Signal_string = 0x321130;
		constexpr auto FindBone_string = 0x310300;
		constexpr auto GetBones = 0x310C80;
		constexpr auto ShouldLerp = 0x326DC0;
		constexpr auto get_VisiblePlayerList = 0x32BA50;
		constexpr auto ClearVisibility = 0x309B40;
		constexpr auto RegisterForVisibility_BasePlayer = 0x324540;
		constexpr auto UnregisterFromVisibility_ulong = 0x3274F0;
		constexpr auto FindByID_Clientside_ulong = 0x310400;
		constexpr auto Find_Clientside_string = 0x3105D0;
		constexpr auto GetRandomFloatBasedOnUserID_ulong_ulong = 0x313AF0;
		constexpr auto DisplayHealthInfo_BasePlayer = 0x2F4190;
		constexpr auto ShouldDestroyWithGroup = 0x326D90;
		constexpr auto SetInheritedVelocity_Vector3_uint = 0x326180;
		constexpr auto GetPerformanceReport_BaseEntity_RPCMessage = 0x3139F0;
		constexpr auto OnBecameRagdoll_Ragdoll = 0x319230;
		constexpr auto OnVoiceData_bytearray = 0x321BC0;
		constexpr auto RecieveAchievement_string = 0x3240D0;
		constexpr auto CraftMode_BaseEntity_RPCMessage = 0x30E7D0;
		constexpr auto StartDesigningAI_BaseEntity_RPCMessage = 0x3270A0;
		constexpr auto OnDebugAIEventTriggeredStateChange_int_int_int = 0x3195A0;
		constexpr auto ClientOnEnable = 0x30AFA0;
		constexpr auto Client_OnRepairFailedResources_BaseEntity_RPCMessage = 0x30D2E0;
		constexpr auto get_IsWearingDiveGoggles = 0x32B9C0;
		constexpr auto set_IsWearingDiveGoggles_bool = 0x32C1A0;
		constexpr auto UpdateClothesIfNeeded = 0x327640;
		constexpr auto MakeVisible = 0x3187C0;
		constexpr auto ClientUpdate_Sleeping = 0x30C320;
		constexpr auto ClientUpdate = 0x30C760;
		constexpr auto RebuildClothingItems = 0x323B20;
		constexpr auto UpdateClothingItems_SkinnedMultiMesh = 0x327B30;
		constexpr auto UpdateHolsterOffsets = 0x328260;
		constexpr auto PostLateClientCycle = 0x322330;
		constexpr auto IsLocalPlayer = 0x316830;
		constexpr auto ClientUpdateLocalPlayer = 0x30B100;
		constexpr auto UpdateTopologyStats = 0x329610;
		constexpr auto ClientTick = 0x30B050;
		constexpr auto DoMovement = 0x30F900;
		constexpr auto MountableOverrideViewAngles = 0x318F20;
		constexpr auto BlockSprint_float = 0x306FF0;
		constexpr auto BlockJump_float = 0x306F50;
		constexpr auto ClientInput_InputState = 0x30A4F0;
		constexpr auto UseAction_InputState = 0x329AD0;
		constexpr auto GetInteractionEntity = 0x311CA0;
		constexpr auto QuickUse = 0x323700;
		constexpr auto LongUse = 0x318700;
		constexpr auto UseStop = 0x329DA0;
		constexpr auto UpdateLookingAt_float_bool = 0x3283F0;
		constexpr auto ResetLookingAt = 0x324990;
		constexpr auto SetLookingAt_HitTest = 0x326310;
		constexpr auto CheckLookingAtVisible_HitTest_TraceInfo = 0x309330;
		constexpr auto FindVehicleParentFor_BaseEntity = 0x310490;
		constexpr auto OnDied_BaseEntity_RPCMessage = 0x319710;
		constexpr auto OnRespawnInformation_BaseEntity_RPCMessage = 0x319B10;
		constexpr auto RequestRespawnUpdates = 0x324840;
		constexpr auto OnLand_float = 0x319920;
		constexpr auto StartLoading = 0x327230;
		constexpr auto FinishLoading = 0x310860;
		constexpr auto FinishedLoadingRoutine = 0x310930;
		constexpr auto DirectionalDamage_Vector3_int = 0x30F470;
		constexpr auto UnlockedBlueprint_BaseEntity_RPCMessage = 0x327480;
		constexpr auto CheckForRespawnInfo = 0x3092C0;
		constexpr auto UpdateRichPresenceState_BaseEntity_RPCMessage = 0x329370;
		constexpr auto HandleCompanionPairingResult_BaseEntity_RPCMessage = 0x313DD0;
		constexpr auto UpdateWaterDrinkingPoint = 0x3297B0;
		constexpr auto GetWaterDrinkingPoint = 0x313DB0;
		constexpr auto Drink_BasePlayer = 0x30FB90;
		constexpr auto Drink_ShowIf_BasePlayer = 0x30F9C0;
		constexpr auto SaltWater_BasePlayer = 0x2F5370;
		constexpr auto SaltWater_ShowIf_BasePlayer = 0x324B10;
		constexpr auto Climb_BasePlayer = 0x30DFA0;
		constexpr auto Climb_ShowIf_BasePlayer = 0x30DD10;
		constexpr auto HasPlayerFlag_BasePlayer_PlayerFlags = 0x314340;
		constexpr auto get_IsReceivingSnapshot = 0x32B9B0;
		constexpr auto get_IsAdmin = 0x32B8F0;
		constexpr auto get_IsDeveloper = 0x32B980;
		constexpr auto get_IsAiming = 0x32B900;
		constexpr auto get_IsFlying = 0x32B990;
		constexpr auto get_IsConnected = 0x32B910;
		constexpr auto get_InGesture = 0x32B840;
		constexpr auto get_CurrentGestureBlocksMovement = 0x32B390;
		constexpr auto get_CurrentGestureIsDance = 0x32B3D0;
		constexpr auto get_CurrentGestureIsFullBody = 0x32B410;
		constexpr auto get_InGestureCancelCooldown = 0x32B810;
		constexpr auto SetGestureMenuOpen_bool = 0x325D80;
		constexpr auto RequestStartGesture_GestureConfig = 0x3248E0;
		constexpr auto Client_StartGesture_BaseEntity_RPCMessage = 0x30D840;
		constexpr auto Client_StartGesture_GestureConfig = 0x30D8A0;
		constexpr auto ProcessDanceAction = 0x322AC0;
		constexpr auto SayingHello = 0x324D80;
		constexpr auto ProcessGestureStart = 0x322FC0;
		constexpr auto EndGesture = 0x30FEB0;
		constexpr auto EndLocalGesture = 0x30FF50;
		constexpr auto EndGestureShared = 0x30FD40;
		constexpr auto HideHeldEntity_bool = 0x314AB0;
		constexpr auto CancelGesture = 0x309000;
		constexpr auto RemoteGestureCancel = 0x324630;
		constexpr auto CancelGestureInput = 0x308BE0;
		constexpr auto ClearGestureCooldown = 0x3099F0;
		constexpr auto ConVarRequestStartGesture_string = 0x30E570;
		constexpr auto Client_RemoteCancelledGesture = 0x30D7F0;
		constexpr auto IsGestureBlocked = 0x316190;
		constexpr auto get_clientTeamLifetime = 0x32BAC0;
		constexpr auto CLIENT_ReceiveTeamInfo_BaseEntity_RPCMessage = 0x307630;
		constexpr auto UpdateSteamGroup_ulong_int = 0x3293C0;
		constexpr auto ClearSteamGroup = 0x309A20;
		constexpr auto CLIENT_ClearTeam_BaseEntity_RPCMessage = 0x307090;
		constexpr auto CLIENT_PendingInvite_BaseEntity_RPCMessage = 0x307230;
		constexpr auto InviteToTeam_BasePlayer = 0x314FA0;
		constexpr auto Promote_BasePlayer = 0x323590;
		constexpr auto Menu_Promote_Start = 0x2F5370;
		constexpr auto Promote_ShowIf_BasePlayer = 0x3231E0;
		constexpr auto LocalPlayerIsLeader = 0x318210;
		constexpr auto Invite_ShowIf_BasePlayer = 0x3154C0;
		constexpr auto GetHeldEntity = 0x311800;
		constexpr auto GetHeldItem = 0x311A30;
		constexpr auto GetHeldItemID = 0x3119E0;
		constexpr auto HeldEntityViewAngles = 0x314890;
		constexpr auto HeldEntityFrame = 0x314420;
		constexpr auto HeldEntityInput = 0x3145F0;
		constexpr auto HeldItemUse = 0x3149B0;
		constexpr auto HeldEntityStart = 0x3147C0;
		constexpr auto HeldEntityEnd = 0x314350;
		constexpr auto IsHostileItem_Item = 0x316540;
		constexpr auto IsItemHoldRestricted_Item = 0x3166A0;
		constexpr auto MapInfoOnEnable = 0x318870;
		constexpr auto Client_ReceiveMarkers_BaseEntity_RPCMessage = 0x30D4B0;
		constexpr auto Client_UpdateDeathMarker_BaseEntity_RPCMessage = 0x30DBE0;
		constexpr auto Client_AddNewDeathMarker_BaseEntity_RPCMessage = 0x30D1A0;
		constexpr auto AddPointOfInterest_Vector3 = 0x306170;
		constexpr auto ClearAllPointsOfInterest = 0x3098A0;
		constexpr auto ClearAllMapMarkers = 0x309740;
		constexpr auto HasAttemptedMission_uint = 0x313E80;
		constexpr auto CanAcceptMission_uint = 0x307E40;
		constexpr auto IsMissionActive_uint = 0x316910;
		constexpr auto HasCompletedMission_uint = 0x313FF0;
		constexpr auto HasFailedMission_uint = 0x314160;
		constexpr auto SetActiveMission_int = 0x325C90;
		constexpr auto GetActiveMission = 0x310C70;
		constexpr auto HasActiveMission = 0x313E70;
		constexpr auto LoadMissions_Missions = 0x317710;
		constexpr auto OnModelState_BaseEntity_RPCMessage = 0x319A80;
		constexpr auto OnModelStateChanged = 0x3199E0;
		constexpr auto get_isMounted = 0x32BD50;
		constexpr auto get_isMountingHidingWeapon = 0x32BD70;
		constexpr auto GetMounted = 0x3134F0;
		constexpr auto GetMountedVehicle = 0x313460;
		constexpr auto MarkSwapSeat = 0x3188C0;
		constexpr auto SwapSeatCooldown = 0x3272B0;
		constexpr auto ClientUpdateMounted_uint = 0x30BEA0;
		constexpr auto CLIENT_SetPetPrefabID_BaseEntity_RPCMessage = 0x307A30;
		constexpr auto CLIENT_SetPetPetLoadedStateIndex_BaseEntity_RPCMessage = 0x307880;
		constexpr auto LinkPet = 0x3175C0;
		constexpr auto SetPetMenuOpen_bool = 0x3266C0;
		constexpr auto ClientIssuePetCommand_int_int_bool = 0x30AEB0;
		constexpr auto IsSleeping = 0x316C10;
		constexpr auto IsSpectating = 0x316C20;
		constexpr auto IsRelaxed = 0x316B30;
		constexpr auto IsServerFalling = 0x316C00;
		constexpr auto GetBuildingPrivilege = 0x311090;
		constexpr auto CanBuild = 0x3087F0;
		constexpr auto CanBuild_Vector3_Quaternion_Bounds = 0x308690;
		constexpr auto CanBuild_OBB = 0x3085C0;
		constexpr auto IsBuildingBlocked = 0x315F10;
		constexpr auto IsBuildingBlocked_Vector3_Quaternion_Bounds = 0x315DB0;
		constexpr auto IsBuildingBlocked_OBB = 0x315CD0;
		constexpr auto IsBuildingAuthed = 0x315AD0;
		constexpr auto IsBuildingAuthed_Vector3_Quaternion_Bounds = 0x315B70;
		constexpr auto IsBuildingAuthed_OBB = 0x315A00;
		constexpr auto CanPlaceBuildingPrivilege = 0x308980;
		constexpr auto CanPlaceBuildingPrivilege_Vector3_Quaternion_Bounds = 0x3089F0;
		constexpr auto CanPlaceBuildingPrivilege_OBB = 0x308B30;
		constexpr auto NewProjectileID = 0x318FB0;
		constexpr auto NewProjectileSeed = 0x318FC0;
		constexpr auto SendProjectileAttack_PlayerProjectileAttack = 0x3259E0;
		constexpr auto SendProjectileRicochet_PlayerProjectileRicochet = 0x325A30;
		constexpr auto SendProjectileUpdate_PlayerProjectileUpdate = 0x325A80;
		constexpr auto Load_BaseNetworkable_LoadInfo = 0x317CB0;
		constexpr auto SpectatedPlayerHeadshot = 0x327010;
		constexpr auto GetThreatLevel = 0x313D90;
		constexpr auto EnsureUpdated = 0x310070;
		constexpr auto SetHostileLength_BaseEntity_RPCMessage = 0x3260D0;
		constexpr auto SetWeaponDrawnDuration_BaseEntity_RPCMessage = 0x326CF0;
		constexpr auto ModifyInputState_InputState = 0x2F5370;
		constexpr auto ForcePositionToParentOffset_Vector3_uint = 0x3109A0;
		constexpr auto UpdateClientTickRate_BaseEntity_RPCMessage = 0x3275E0;
		constexpr auto ForcePositionTo_Vector3 = 0x310AD0;
		constexpr auto SendVoiceData_bytearray_int = 0x325AD0;
		constexpr auto SendClientTick = 0x325320;
		constexpr auto NotifyUnderwearChange = 0x319020;
		constexpr auto UpdatePlayerVisibilities = 0x329070;
		constexpr auto TimeSinceSeen = 0x3272E0;
		constexpr auto SetNextVisThink_float = 0x326690;
		constexpr auto WantsVisUpdate = 0x32A8E0;
		constexpr auto IsAimingAt_BasePlayer_BasePlayer_float = 0x315700;
		constexpr auto UpdateCullingSpheres = 0x327F90;
		constexpr auto VisUpdateUsingCulling_float_bool = 0x329F20;
		constexpr auto VisUpdateUsingRays_float = 0x32A030;
		constexpr auto LogDebugCull_float = 0x3183C0;
		constexpr auto OnVisibilityChanged_bool = 0x3218C0;
		constexpr auto VisUpdate = 0x32A450;
		constexpr auto VisPlayerArmed = 0x329E60;
		constexpr auto AnyPartVisible = 0x306340;
		constexpr auto CalcVisUpdateRate_float = 0x307D00;
		constexpr auto PointSeePoint_Vector3_Vector3_float_bool = 0x322060;
		constexpr auto IsWounded = 0x316F20;
		constexpr auto IsCrawling = 0x315FC0;
		constexpr auto IsIncapacitated = 0x316690;
		constexpr auto ToPlayer = 0x327300;
		constexpr auto get_Connection = 0x32B380;
		constexpr auto get_displayName = 0x32BB10;
		constexpr auto set_displayName_string = 0x32C1B0;
		constexpr auto SanitizePlayerNameString_string_ulong = 0x324CE0;
		constexpr auto IsGod = 0x316470;
		constexpr auto GetNetworkRotation = 0x313580;
		constexpr auto CanInteract = 0x308920;
		constexpr auto CanInteract_bool = 0x308890;
		constexpr auto StartHealth = 0x327210;
		constexpr auto StartMaxHealth = 0x321BF0;
		constexpr auto MaxHealth = 0x318900;
		constexpr auto MaxVelocity = 0x3189B0;
		constexpr auto WorldSpaceBounds = 0x32AE20;
		constexpr auto GetMountVelocity = 0x313390;
		constexpr auto GetInheritedProjectileVelocity = 0x311B20;
		constexpr auto GetInheritedThrowVelocity = 0x311BE0;
		constexpr auto GetInheritedDropVelocity = 0x311A60;
		constexpr auto PreInitShared = 0x322660;
		constexpr auto DestroyShared = 0x30F3F0;
		constexpr auto InSafeZone = 0x314C40;
		constexpr auto LateClientCycle = 0x316F30;
		constexpr auto ClientCycle_float = 0x309D00;
		constexpr auto GetBounds_bool = 0x310D10;
		constexpr auto GetBounds = 0x310EA0;
		constexpr auto GetCenter_bool = 0x311140;
		constexpr auto GetCenter = 0x311260;
		constexpr auto GetOffset_bool = 0x313660;
		constexpr auto GetOffset = 0x3135E0;
		constexpr auto GetSize_bool = 0x313BF0;
		constexpr auto GetSize = 0x313B70;
		constexpr auto GetHeight_bool = 0x3117E0;
		constexpr auto GetHeight = 0x3117A0;
		constexpr auto GetRadius = 0x2FEF00;
		constexpr auto GetJumpHeight = 0x312130;
		constexpr auto TriggerPoint = 0x327380;
		constexpr auto NoClipOffset = 0x318FD0;
		constexpr auto NoClipRadius_float = 0x319010;
		constexpr auto MaxDeployDistance_Item = 0x3188F0;
		constexpr auto ClientUpdatePersistantData_PersistantPlayer = 0x30C2F0;
		constexpr auto GetMinSpeed = 0x313360;
		constexpr auto GetMaxSpeed = 0x312310;
		constexpr auto GetSpeed_float_float_float = 0x313C50;
		constexpr auto OnAttacked_HitInfo = 0x319060;
		constexpr auto EnablePlayerCollider = 0x30FCE0;
		constexpr auto DisablePlayerCollider = 0x30F5B0;
		constexpr auto RefreshColliderSize_bool = 0x3241F0;
		constexpr auto SetPlayerRigidbodyState_bool = 0x326CD0;
		constexpr auto AddPlayerRigidbody = 0x305FF0;
		constexpr auto RemovePlayerRigidbody = 0x324710;
		constexpr auto IsEnsnared = 0x3160A0;
		constexpr auto IsAttacking = 0x3158D0;
		constexpr auto CanAttack = 0x3082D0;
		constexpr auto OnLadder = 0x319890;
		constexpr auto IsSwimming = 0x316ED0;
		constexpr auto IsHeadUnderwater = 0x3164F0;
		constexpr auto IsOnGround = 0x316A80;
		constexpr auto IsRunning = 0x316B40;
		constexpr auto IsDucked = 0x315FE0;
		constexpr auto RecentlyTeleported = 0x324030;
		constexpr auto ShowToast_int_Translate_Phrase = 0x326E20;
		constexpr auto ChatMessage_string = 0x3090D0;
		constexpr auto ConsoleMessage_string = 0x30E720;
		constexpr auto PenetrationResistance_HitInfo = 0x321BF0;
		constexpr auto ScaleDamage_HitInfo = 0x325090;
		constexpr auto UpdateMoveSpeedFromClothing = 0x328CA0;
		constexpr auto UpdateProtectionFromClothing = 0x329250;
		constexpr auto Categorize = 0x3090A0;
		constexpr auto ToString = 0x327310;
		constexpr auto GetDebugStatus = 0x3113D0;
		constexpr auto GetItem_uint = 0x312080;
		constexpr auto get_Traits = 0x32BA30;
		constexpr auto WaterFactor = 0x32A900;
		constexpr auto AirFactor = 0x306250;
		constexpr auto GetOxygenTime_ItemModGiveOxygen_AirSupplyType = 0x3136B0;
		constexpr auto ShouldInheritNetworkGroup = 0x316C20;
		constexpr auto AnyPlayersVisibleToEntity_Vector3_float_BaseEntity_Vector3_bool = 0x306980;
		constexpr auto IsStandingOnEntity_BaseEntity_int = 0x316C30;
		constexpr auto SetActiveTelephone_PhoneController = 0x325CA0;
		constexpr auto get_HasActiveTelephone = 0x32B450;
		constexpr auto get_IsDesigningAI = 0x32B920;
		constexpr auto ClearDesigningAIEntity = 0x3099D0;
		constexpr auto _ctor = 0x32B200;
		constexpr auto _cctor = 0x32B0B0;
	}

	namespace Door {
		// Class
		constexpr auto Door_TypeInfo = 0x31C8250;

		// Offsets
		constexpr auto __menuOption_Menu_CloseDoor = 0x268;
		constexpr auto __menuOption_Menu_KnockDoor = 0x2C0;
		constexpr auto __menuOption_Menu_OpenDoor = 0x318;
		constexpr auto __menuOption_Menu_ToggleHatch = 0x370;
		constexpr auto knockEffect = 0x3C8;
		constexpr auto canTakeLock = 0x3D0;
		constexpr auto hasHatch = 0x3D1;
		constexpr auto canTakeCloser = 0x3D2;
		constexpr auto canTakeKnocker = 0x3D3;
		constexpr auto canNpcOpen = 0x3D4;
		constexpr auto canHandOpen = 0x3D5;
		constexpr auto isSecurityDoor = 0x3D6;
		constexpr auto vehiclePhysBoxes = 0x3D8;
		constexpr auto checkPhysBoxesOnOpen = 0x3E0;
		constexpr auto vehicleCollisionSfx = 0x3E8;
		constexpr auto ClosedColliderRoots = 0x3F0;

		// Static Offsets
		constexpr auto openHash = 0x0;
		constexpr auto closeHash = 0x4;

		// Methods
		constexpr auto GetMenuOptions_List_Option_ = 0xBE7C60;
		constexpr auto get_HasMenuOptions = 0xBE9740;
		constexpr auto OnRpcMessage_BasePlayer_uint_Message = 0xBE9090;
		constexpr auto ResetState = 0xBE94E0;
		constexpr auto HasSlot_BaseEntity_Slot = 0xBE8850;
		constexpr auto CanPickup_BasePlayer = 0xBE7AF0;
		constexpr auto Menu_OpenDoor_BasePlayer = 0xBE8C40;
		constexpr auto Menu_OpenDoor_Proxy_Option = 0xBE8B20;
		constexpr auto Menu_OpenDoorStart = 0xBE8AE0;
		constexpr auto Menu_OpenDoor_ShowIf_BasePlayer = 0xBE8C00;
		constexpr auto Menu_CloseDoor_BasePlayer = 0xBE89F0;
		constexpr auto Menu_CloseDoor_Proxy_Option = 0xBE88D0;
		constexpr auto Menu_CloseDoorStart = 0xBE8890;
		constexpr auto Menu_CloseDoor_ShowIf_BasePlayer = 0xBE89B0;
		constexpr auto Menu_KnockDoor_BasePlayer = 0xBE8AA0;
		constexpr auto Menu_KnockDoor_ShowIf_BasePlayer = 0xBE8A30;
		constexpr auto Menu_ToggleHatch_BasePlayer = 0xBE8C90;
		constexpr auto Menu_ToggleHatch_ShowIf_BasePlayer = 0xBE8C80;
		constexpr auto NeedsCrosshair = 0x2F7110;
		constexpr auto OnDoorInterrupted_BaseEntity_RPCMessage = 0xBE8CD0;
		constexpr auto ReverseDoorAnimation_bool = 0xBE94F0;
		constexpr auto BoundsPadding = 0x2F6A90;
		constexpr auto OnObjects_TriggerNotify = 0x2F5370;
		constexpr auto OnEmpty = 0x2F5370;
		constexpr auto OnFlagsChanged_BaseEntity_Flags_BaseEntity_Flags = 0xBE8F60;
		constexpr auto _ctor = 0xBE9720;
		constexpr auto _cctor = 0xBE96B0;
	}

	namespace BaseEntity {
		// Class
		constexpr auto BaseEntity_TypeInfo = 0x31D20C8;

		// Offsets
		constexpr auto ragdoll = 0x70;
		constexpr auto positionLerp = 0x78;
		constexpr auto menuOptions = 0x80;
		constexpr auto broadcastProtocol = 0x88;
		constexpr auto links = 0x90;
		constexpr auto linkedToNeighbours = 0x98;
		constexpr auto _pendingFileRequests = 0xA0;
		constexpr auto updateParentingAction = 0xA8;
		constexpr auto addedToParentEntity = 0xB0;
		constexpr auto itemSkin = 0xB8;
		constexpr auto entitySlots = 0xC0;
		constexpr auto triggers = 0xC8;
		constexpr auto isVisible = 0xD0;
		constexpr auto isAnimatorVisible = 0xD1;
		constexpr auto isShadowVisible = 0xD2;
		constexpr auto localOccludee = 0xD8;
		constexpr auto Weightk__BackingField = 0xF8;
		constexpr auto bounds = 0xFC;
		constexpr auto impactEffect = 0x118;
		constexpr auto enableSaving = 0x120;
		constexpr auto syncPosition = 0x121;
		constexpr auto model = 0x128;
		constexpr auto flags = 0x130;
		constexpr auto parentBone = 0x134;
		constexpr auto skinID = 0x138;
		constexpr auto _components = 0x140;
		constexpr auto HasBrain = 0x148;
		constexpr auto _name = 0x150;
		constexpr auto OwnerIDk__BackingField = 0x158;

		// Static Offsets
		constexpr auto globalBroadcastQueue = 0x0;
		constexpr auto globalBroadcastProtocol = 0x8;

		// Methods
		constexpr auto OnRpcMessage_BasePlayer_uint_Message = 0x8E67E0;
		constexpr auto GetEntityMenu_BasePlayer_List_Option_ = 0x8E1D10;
		constexpr auto GetMenuOptions_List_Option_ = 0x2F5370;
		constexpr auto get_HasMenuOptions = 0x2F4190;
		constexpr auto GetItemOptions_List_Option_ = 0x8E23C0;
		constexpr auto GetMovementModify = 0x8E2E10;
		constexpr auto GetExtrapolationTime = 0x8E1E50;
		constexpr auto GetInterpolationDelay = 0x8E2210;
		constexpr auto GetInterpolationInertia = 0x8E22A0;
		constexpr auto GetInterpolationSmoothing = 0x8E2330;
		constexpr auto GetAngularVelocityClient = 0x8E17B0;
		constexpr auto GetLocalVelocityClient = 0x8E2610;
		constexpr auto DrawInterpolationState_TransformInterpolator_Segment_List_TransformInterpolator_Entry_ = 0x8DFCA0;
		constexpr auto LerpIdleDisable = 0x8E5160;
		constexpr auto ClientInit_Entity = 0x8DEF10;
		constexpr auto ClientOnEnable = 0x8DEFC0;
		constexpr auto OnPositionalFromNetwork_Vector3_Vector3_float = 0x8E6480;
		constexpr auto StartLerping_float = 0x8E9830;
		constexpr auto StopLerping = 0x8E99B0;
		constexpr auto ShouldLerp = 0x8E9420;
		constexpr auto SetNetworkPosition_Vector3 = 0x8E8F10;
		constexpr auto SetNetworkRotation_Quaternion = 0x8E9080;
		constexpr auto DoDestroyEffects_BaseNetworkable_DestroyMode_Message = 0x8DFC80;
		constexpr auto SpawnGibs = 0x8E9520;
		constexpr auto DoNetworkDestroy = 0x3049C0;
		constexpr auto PostNetworkUpdate = 0x8E7BA0;
		constexpr auto OnBecameRagdoll_Ragdoll = 0x8E61C0;
		constexpr auto GetMenuInformation_GameObject_BasePlayer = 0x8E2790;
		constexpr auto HideMenuItems_BasePlayer = 0x8E3B60;
		constexpr auto GetMenuItems_BasePlayer = 0x8E2A80;
		constexpr auto OnUse_BasePlayer = 0x8E7990;
		constexpr auto OnUseHeld_BasePlayer = 0x8E7770;
		constexpr auto OnUseStopped_BasePlayer = 0x2F5370;
		constexpr auto OnRendered = 0x2F5370;
		constexpr auto DoClientDestroy = 0x8DF9E0;
		constexpr auto GetEyeTransform = 0x8E1EE0;
		constexpr auto NeedsCrosshair = 0x8E60B0;
		constexpr auto AlwaysShowCrosshair = 0x2F4190;
		constexpr auto ShouldDestroyWithGroup = 0x8E9370;
		constexpr auto DetachEffects = 0x8DF5D0;
		constexpr auto OnVoiceData_bytearray = 0x2F5370;
		constexpr auto LookingAtTick = 0x2F5370;
		constexpr auto get_RealisticMass = 0x321BF0;
		constexpr auto OnCollision_Collision_BaseEntity = 0x8E6270;
		constexpr auto ReceiveCollisionMessages_bool = 0x8E7C90;
		constexpr auto DebugClient_int_float = 0x2F5370;
		constexpr auto OnDebugStart = 0x8E62C0;
		constexpr auto DebugText_Vector3_string_Color_float = 0x8DF4F0;
		constexpr auto HasFlag_BaseEntity_Flags = 0x8E3B20;
		constexpr auto ParentHasFlag_BaseEntity_Flags = 0x8E7B00;
		constexpr auto SetFlag_BaseEntity_Flags_bool_bool_bool = 0x8E8D40;
		constexpr auto IsOn = 0x8E4190;
		constexpr auto IsOpen = 0x8E41A0;
		constexpr auto IsOnFire = 0x8E4180;
		constexpr auto IsLocked = 0x8E3ED0;
		constexpr auto IsDebugging = 0x8E3CE0;
		constexpr auto IsDisabled = 0x8E3CF0;
		constexpr auto IsBroken = 0x8E3CD0;
		constexpr auto IsBusy = 0x8E3B60;
		constexpr auto GetLogColor = 0x8E2740;
		constexpr auto OnFlagsChanged_BaseEntity_Flags_BaseEntity_Flags = 0x8E6380;
		constexpr auto IsOccupied_Socket_Base = 0x8E3FD0;
		constexpr auto IsOccupied_string = 0x8E3EE0;
		constexpr auto FindLink_Socket_Base = 0x8E0970;
		constexpr auto FindLink_string = 0x8E0A70;
		constexpr auto FindLink_stringarray = 0x8E0B50;
		constexpr auto EntityLinkBroadcast = 0x8E0450;
		constexpr auto ReceivedEntityLinkBroadcast = 0x8E7D20;
		constexpr auto GetEntityLinks_bool = 0x8E1CD0;
		constexpr auto LinkToEntity_BaseEntity = 0x8E5190;
		constexpr auto LinkToNeighbours = 0x8E53F0;
		constexpr auto InitEntityLinks = 0x8E3B70;
		constexpr auto FreeEntityLinks = 0x8E16D0;
		constexpr auto RefreshEntityLinks = 0x8E7D90;
		constexpr auto RequestFileFromServer_uint_FileStorage_Type_string_uint = 0x8E8610;
		constexpr auto RequestFileFromServer_IServerFileReceiver_FileStorage_Type_uint_uint_bool = 0x8E82D0;
		constexpr auto CL_ReceiveFileRequest_BaseEntity_RPCMessage = 0x8DEC20;
		constexpr auto CompletePendingFileRequests_FileStorage_Type_uint_uint_bytearray = 0x8DF1C0;
		constexpr auto UpdateChildren = 0x8E9B70;
		constexpr auto UpdateParenting = 0x8EA8E0;
		constexpr auto UpdateParenting_bool = 0x8EA260;
		constexpr auto SetParentTransform_Transform_bool = 0x8E9150;
		constexpr auto UpdateDisableState = 0x8E9EE0;
		constexpr auto HasClientTransformOffset = 0x8E3980;
		constexpr auto RemoveClientTransformOffset = 0x8E80A0;
		constexpr auto AddClientTransformOffset = 0x8DE5E0;
		constexpr auto OnParentChangingClient_Transform_Transform = 0x2F5370;
		constexpr auto GetBuildingPrivilege = 0x8E1C60;
		constexpr auto GetBuildingPrivilege_OBB = 0x8E1970;
		constexpr auto ServerRPC_SendMethod_string = 0x8E8A00;
		constexpr auto ServerRPC_string = 0x8E8D30;
		constexpr auto ServerRPCStart_string = 0x8E8850;
		constexpr auto ServerRPCSend_SendInfo = 0x8E87E0;
		constexpr auto CL_RPCMessage_uint_ulong_Message = 0x8DE930;
		constexpr auto SendSignalBroadcast_BaseEntity_Signal_string = 0x8E8730;
		constexpr auto SignalFromServerEx_BaseEntity_RPCMessage = 0x8E9440;
		constexpr auto SignalFromServer_BaseEntity_RPCMessage = 0x8E94D0;
		constexpr auto OnSignal_BaseEntity_Signal_string = 0x2F5370;
		constexpr auto OnSkinChanged_ulong_ulong = 0x8E73E0;
		constexpr auto OnSkinRefreshStart = 0x8E7750;
		constexpr auto OnSkinRefreshEnd = 0x8E7730;
		constexpr auto PreProcess_IPrefabProcessor_GameObject_string_bool_bool_bool = 0x8E7BC0;
		constexpr auto HasAnySlot = 0x8E38A0;
		constexpr auto GetSlot_BaseEntity_Slot = 0x8E3420;
		constexpr auto GetSlotAnchorName_BaseEntity_Slot = 0x8E32E0;
		constexpr auto GetSlotAnchor_BaseEntity_Slot = 0x8E3370;
		constexpr auto HasSlot_BaseEntity_Slot = 0x2F4190;
		constexpr auto get_Traits = 0x2FCD80;
		constexpr auto HasTrait_BaseEntity_TraitFlag = 0x8E3B30;
		constexpr auto HasAnyTrait_BaseEntity_TraitFlag = 0x8E3950;
		constexpr auto EnterTrigger_TriggerBase = 0x8E03A0;
		constexpr auto LeaveTrigger_TriggerBase = 0x8E50C0;
		constexpr auto RemoveFromTriggers = 0x8E8100;
		constexpr auto ForceUpdateTriggersAction = 0x8E0C50;
		constexpr auto ForceUpdateTriggers_bool_bool_bool = 0x8E0C80;
		constexpr auto MakeVisible = 0x8E6090;
		constexpr auto UpdateCullingSpheres = 0x8E9D60;
		constexpr auto RegisterForCulling = 0x8E7E70;
		constexpr auto OnVisibilityChanged_bool = 0x2F5370;
		constexpr auto UnregisterFromCulling = 0x8E9AF0;
		constexpr auto UpdateCullingBounds = 0x8E9C90;
		constexpr auto CheckVisibility = 0x8DEEF0;
		constexpr auto CalcEntityVisUpdateRate = 0x8DEDD0;
		constexpr auto DebugDrawCullingBounds = 0x8DF420;
		constexpr auto get_Weight = 0x8EB0D0;
		constexpr auto set_Weight_float = 0x8EB0F0;
		constexpr auto get_Components = 0x8EB050;
		constexpr auto ToPlayer = 0x2FCD80;
		constexpr auto get_IsNpc = 0x2F4190;
		constexpr auto InitShared = 0x8E3CB0;
		constexpr auto DestroyShared = 0x8DF5B0;
		constexpr auto ResetState = 0x8E86C0;
		constexpr auto InheritedVelocityScale = 0x2FD130;
		constexpr auto GetInheritedProjectileVelocity = 0x8E2060;
		constexpr auto GetInheritedThrowVelocity = 0x8E21E0;
		constexpr auto GetInheritedDropVelocity = 0x8E1F80;
		constexpr auto GetParentVelocity = 0x8E3020;
		constexpr auto GetWorldVelocity = 0x8E3480;
		constexpr auto GetLocalVelocity = 0x8E26A0;
		constexpr auto GetAngularVelocity = 0x8E1840;
		constexpr auto WorldSpaceBounds = 0x8EAD80;
		constexpr auto PivotPoint = 0x32D780;
		constexpr auto CenterPoint = 0x8DEEB0;
		constexpr auto ClosestPoint_Vector3 = 0x8DF110;
		constexpr auto TriggerPoint = 0x8DEEB0;
		constexpr auto Distance_Vector3 = 0x8DF8A0;
		constexpr auto SqrDistance_Vector3 = 0x8E96F0;
		constexpr auto Distance_BaseEntity = 0x8DF840;
		constexpr auto SqrDistance_BaseEntity = 0x8E9690;
		constexpr auto Distance2D_Vector3 = 0x8DF700;
		constexpr auto SqrDistance2D_Vector3 = 0x8E9550;
		constexpr auto Distance2D_BaseEntity = 0x8DF840;
		constexpr auto SqrDistance2D_BaseEntity = 0x8E9690;
		constexpr auto IsVisible_Ray_int_float = 0x8E4D00;
		constexpr auto IsVisibleSpecificLayers_Vector3_Vector3_int_float = 0x8E46B0;
		constexpr auto IsVisible_Vector3_Vector3_float = 0x8E4920;
		constexpr auto IsVisible_Vector3_float = 0x8E4BA0;
		constexpr auto IsVisibleAndCanSee_Vector3_float = 0x8E44A0;
		constexpr auto IsOlderThan_BaseEntity = 0x8E40E0;
		constexpr auto IsOutside = 0x8E41B0;
		constexpr auto IsOutside_Vector3 = 0x8E4210;
		constexpr auto WaterFactor = 0x8EA8F0;
		constexpr auto AirFactor = 0x8DE680;
		constexpr auto WaterTestFromVolumes_Vector3_WaterLevel_WaterInfo = 0x8EAAC0;
		constexpr auto IsInWaterVolume_Vector3 = 0x8E3D90;
		constexpr auto WaterTestFromVolumes_Bounds_WaterLevel_WaterInfo = 0x8EA990;
		constexpr auto WaterTestFromVolumes_Vector3_Vector3_float_WaterLevel_WaterInfo = 0x8EABF0;
		constexpr auto BlocksWaterFor_BasePlayer = 0x2F4190;
		constexpr auto Health = 0x2FD130;
		constexpr auto MaxHealth = 0x2FD130;
		constexpr auto MaxVelocity = 0x2FD130;
		constexpr auto BoundsPadding = 0x8DE6C0;
		constexpr auto PenetrationResistance_HitInfo = 0x321BF0;
		constexpr auto GetImpactEffect_HitInfo = 0x8E1F70;
		constexpr auto OnAttacked_HitInfo = 0x2F5370;
		constexpr auto GetItem = 0x2FCD80;
		constexpr auto GetItem_uint = 0x2FCD80;
		constexpr auto GiveItem_Item_BaseEntity_GiveItemReason = 0x8E3870;
		constexpr auto CanBeLooted_BasePlayer = 0x2F7110;
		constexpr auto GetEntity = 0x327300;
		constexpr auto ToString = 0x8E9A00;
		constexpr auto Categorize = 0x8DEE80;
		constexpr auto Log_string = 0x8E5BE0;
		constexpr auto SetModel_Model = 0x8E8E60;
		constexpr auto GetModel = 0x539540;
		constexpr auto GetBones = 0x8E18E0;
		constexpr auto FindBone_string = 0x8E0800;
		constexpr auto FindBoneID_Transform = 0x8E0720;
		constexpr auto FindClosestBone_Vector3 = 0x8E08B0;
		constexpr auto get_OwnerID = 0x8EB0C0;
		constexpr auto set_OwnerID_ulong = 0x8EB0E0;
		constexpr auto ShouldBlockProjectiles = 0x2F7110;
		constexpr auto ShouldInheritNetworkGroup = 0x2F7110;
		constexpr auto SupportsChildDeployables = 0x2F7110;
		constexpr auto BroadcastEntityMessage_string_float_int = 0x8DE6D0;
		constexpr auto OnEntityMessage_BaseEntity_string = 0x2F5370;
		constexpr auto Load_BaseNetworkable_LoadInfo = 0x8E56E0;
		constexpr auto _ctor = 0x8EAF40;
		constexpr auto _cctor = 0x8EAEC0;
	}

	namespace BaseHelicopter {
		// Offsets
		constexpr auto weakspots = 0x238;
		constexpr auto rotorPivot = 0x240;
		constexpr auto mainRotor = 0x248;
		constexpr auto mainRotor_blades = 0x250;
		constexpr auto mainRotor_blur = 0x258;
		constexpr auto tailRotor = 0x260;
		constexpr auto tailRotor_blades = 0x268;
		constexpr auto tailRotor_blur = 0x270;
		constexpr auto rocket_tube_left = 0x278;
		constexpr auto rocket_tube_right = 0x280;
		constexpr auto left_gun_yaw = 0x288;
		constexpr auto left_gun_pitch = 0x290;
		constexpr auto left_gun_muzzle = 0x298;
		constexpr auto right_gun_yaw = 0x2A0;
		constexpr auto right_gun_pitch = 0x2A8;
		constexpr auto right_gun_muzzle = 0x2B0;
		constexpr auto spotlight_rotation = 0x2B8;
		constexpr auto rocket_fire_effect = 0x2C0;
		constexpr auto gun_fire_effect = 0x2C8;
		constexpr auto bulletEffect = 0x2D0;
		constexpr auto explosionEffect = 0x2D8;
		constexpr auto fireBall = 0x2E0;
		constexpr auto crateToDrop = 0x2E8;
		constexpr auto maxCratesToSpawn = 0x2F0;
		constexpr auto bulletSpeed = 0x2F4;
		constexpr auto bulletDamage = 0x2F8;
		constexpr auto servergibs = 0x300;
		constexpr auto debrisFieldMarker = 0x308;
		constexpr auto rotorWashSoundDef = 0x310;
		constexpr auto _rotorWashSound = 0x318;
		constexpr auto flightEngineSoundDef = 0x320;
		constexpr auto flightThwopsSoundDef = 0x328;
		constexpr auto flightEngineSound = 0x330;
		constexpr auto flightThwopsSound = 0x338;
		constexpr auto flightEngineGainMod = 0x340;
		constexpr auto flightThwopsGainMod = 0x348;
		constexpr auto rotorGainModSmoothing = 0x350;
		constexpr auto engineGainMin = 0x354;
		constexpr auto engineGainMax = 0x358;
		constexpr auto thwopGainMin = 0x35C;
		constexpr auto thwopGainMax = 0x360;
		constexpr auto spotlightJitterAmount = 0x364;
		constexpr auto spotlightJitterSpeed = 0x368;
		constexpr auto nightLights = 0x370;
		constexpr auto spotlightTarget = 0x378;
		constexpr auto engineSpeed = 0x384;
		constexpr auto targetEngineSpeed = 0x388;
		constexpr auto blur_rotationScale = 0x38C;
		constexpr auto _rotorWashParticles = 0x390;
		constexpr auto myAI = 0x398;
		constexpr auto mapMarkerEntityPrefab = 0x3A0;
		constexpr auto client_rotorPivotIdeal = 0x3A8;
		constexpr auto nightLightsOn = 0x3B8;

		// Methods
		constexpr auto OnRpcMessage_BasePlayer_uint_Message = 0x8F6130;
		constexpr auto InitalizeWeakspots = 0x8F5B90;
		constexpr auto MaxVelocity = 0x321BF0;
		constexpr auto InitShared = 0x8F5B00;
		constexpr auto Load_BaseNetworkable_LoadInfo = 0x8F5E70;
		constexpr auto ClientInit_Entity = 0x8F5500;
		constexpr auto InitializeClientsideEffects = 0x8F5C10;
		constexpr auto DoClientDestroy = 0x8F5540;
		constexpr auto SetLights_bool = 0x8F6580;
		constexpr auto Update = 0x8F7000;
		constexpr auto UpdateEffects = 0x8F66A0;
		constexpr auto UpdateRotorWashPosition_Vector3_Vector3 = 0x8F6EC0;
		constexpr auto ToggleRotorWash_bool = 0x8F6620;
		constexpr auto UpdateRotorVisibility = 0x8F6E30;
		constexpr auto FireGun_BaseEntity_RPCMessage = 0x8F5620;
		constexpr auto _ctor = 0x8F7790;
	}

	namespace BaseMelee {
		// Class
		constexpr auto BaseMelee_TypeInfo = 0x31D20F8;

		// Offsets
		constexpr auto canThrowAsProjectile = 0x278;
		constexpr auto canAiHearIt = 0x279;
		constexpr auto onlyThrowAsProjectile = 0x27A;
		constexpr auto damageProperties = 0x280;
		constexpr auto damageTypes = 0x288;
		constexpr auto maxDistance = 0x290;
		constexpr auto attackRadius = 0x294;
		constexpr auto isAutomatic = 0x298;
		constexpr auto blockSprintOnAttack = 0x299;
		constexpr auto strikeFX = 0x2A0;
		constexpr auto useStandardHitEffects = 0x2A8;
		constexpr auto aiStrikeDelay = 0x2AC;
		constexpr auto swingEffect = 0x2B0;
		constexpr auto materialStrikeFX = 0x2B8;
		constexpr auto heartStress = 0x2C0;
		constexpr auto gathering = 0x2C8;
		constexpr auto throwReady = 0x2D0;

		// Methods
		constexpr auto OnRpcMessage_BasePlayer_uint_Message = 0x2F8540;
		constexpr auto GetInheritedVelocity_BasePlayer = 0x2F7F90;
		constexpr auto DoThrow = 0x2F7760;
		constexpr auto CreateProjectile_string_Vector3_Vector3_Vector3 = 0x2F7120;
		constexpr auto GetAttackStats_HitInfo = 0x2F7F00;
		constexpr auto DoAttackShared_HitInfo = 0x2F72D0;
		constexpr auto OnInput = 0x2F8160;
		constexpr auto get_CanAttack = 0x2F7110;
		constexpr auto get_CanThrow = 0x2F7110;
		constexpr auto ClientAttack = 0x2F5370;
		constexpr auto OnHolstered = 0x2F8140;
		constexpr auto ProcessAttack_HitTest = 0x2F86F0;
		constexpr auto DoAttack = 0x2F7520;
		constexpr auto DoViewmodelImpact_HitTest = 0x2F7E70;
		constexpr auto OnViewmodelEvent_string = 0x2F8630;
		constexpr auto ProcessSpectatorViewmodel_ViewModel = 0x2F8A30;
		constexpr auto ProcessSpectatorViewmodelEvent_ViewModel_BaseEntity_Signal_string = 0x2F8980;
		constexpr auto GetGatherInfoFromIndex_ResourceDispenser_GatherType = 0x2F7F60;
		constexpr auto CanHit_HitTest = 0x2F7110;
		constexpr auto TotalDamage = 0x2F8AE0;
		constexpr auto CanBeUsedInWater = 0x2F7110;
		constexpr auto GetStrikeEffectPath_string = 0x2F7FE0;
		constexpr auto _ctor = 0x2F8C40;
	}

	namespace BaseProjectile {
		// Class
		constexpr auto BaseProjectile_TypeInfo = 0x31D0280;

		// Offsets
		constexpr auto NoiseRadius = 0x278;
		constexpr auto damageScale = 0x27C;
		constexpr auto distanceScale = 0x280;
		constexpr auto projectileVelocityScale = 0x284;
		constexpr auto automatic = 0x288;
		constexpr auto usableByTurret = 0x289;
		constexpr auto turretDamageScale = 0x28C;
		constexpr auto attackFX = 0x290;
		constexpr auto silencedAttack = 0x298;
		constexpr auto muzzleBrakeAttack = 0x2A0;
		constexpr auto MuzzlePoint = 0x2A8;
		constexpr auto reloadTime = 0x2B0;
		constexpr auto canUnloadAmmo = 0x2B4;
		constexpr auto primaryMagazine = 0x2B8;
		constexpr auto fractionalReload = 0x2C0;
		constexpr auto reloadStartDuration = 0x2C4;
		constexpr auto reloadFractionDuration = 0x2C8;
		constexpr auto reloadEndDuration = 0x2CC;
		constexpr auto aimSway = 0x2D0;
		constexpr auto aimSwaySpeed = 0x2D4;
		constexpr auto recoil = 0x2D8;
		constexpr auto aimconeCurve = 0x2E0;
		constexpr auto aimCone = 0x2E8;
		constexpr auto hipAimCone = 0x2EC;
		constexpr auto aimconePenaltyPerShot = 0x2F0;
		constexpr auto aimConePenaltyMax = 0x2F4;
		constexpr auto aimconePenaltyRecoverTime = 0x2F8;
		constexpr auto aimconePenaltyRecoverDelay = 0x2FC;
		constexpr auto stancePenaltyScale = 0x300;
		constexpr auto hasADS = 0x304;
		constexpr auto noAimingWhileCycling = 0x305;
		constexpr auto manualCycle = 0x306;
		constexpr auto needsCycle = 0x307;
		constexpr auto isCycling = 0x308;
		constexpr auto aiming = 0x309;
		constexpr auto resetDuration = 0x30C;
		constexpr auto numShotsFired = 0x310;
		constexpr auto nextReloadTime = 0x314;
		constexpr auto startReloadTime = 0x318;
		constexpr auto stancePenalty = 0x31C;
		constexpr auto aimconePenalty = 0x320;
		constexpr auto isReloading = 0x324;
		constexpr auto swaySampleTime = 0x328;
		constexpr auto lastShotTime = 0x32C;
		constexpr auto reloadPressTime = 0x330;
		constexpr auto ammoTypePreReload = 0x338;
		constexpr auto fractionalReloadDesiredCount = 0x340;
		constexpr auto fractionalReloadNumAdded = 0x344;
		constexpr auto triggerReady = 0x348;
		constexpr auto nextHeightCheckTime = 0x34C;
		constexpr auto cachedUnderground = 0x350;
		constexpr auto createdProjectiles = 0x358;

		// Methods
		constexpr auto OnRpcMessage_BasePlayer_uint_Message = 0x934990;
		constexpr auto GetInheritedVelocity_BasePlayer = 0x932070;
		constexpr auto GetDamageScale_bool = 0x932050;
		constexpr auto GetDistanceScale_bool = 0x932060;
		constexpr auto GetProjectileVelocityScale_bool = 0x301F50;
		constexpr auto StartReloadCooldown_float = 0x936110;
		constexpr auto ResetReloadCooldown = 0x935590;
		constexpr auto HasReloadCooldown = 0x932F60;
		constexpr auto GetReloadCooldown = 0x932860;
		constexpr auto GetReloadIdle = 0x9329C0;
		constexpr auto OnDrawGizmos = 0x9341D0;
		constexpr auto GetRecoil = 0x932850;
		constexpr auto get_isSemiAuto = 0x936470;
		constexpr auto GetAimCone = 0x9317B0;
		constexpr auto ScaleRepeatDelay_float = 0x9355A0;
		constexpr auto GetProjectileModifier = 0x932210;
		constexpr auto DidAttackClientside = 0x92FEA0;
		constexpr auto GetItemOptions_List_Option_ = 0x9320C0;
		constexpr auto EditViewAngles = 0x930DB0;
		constexpr auto OnFrame = 0x9345A0;
		constexpr auto ShotFired = 0x9358D0;
		constexpr auto SimulateAimcone = 0x935930;
		constexpr auto CanAttack = 0x92F9D0;
		constexpr auto CanAim = 0x92F9A0;
		constexpr auto OnInput = 0x9345B0;
		constexpr auto ReadyToAim = 0x9354E0;
		constexpr auto ReadyToFire = 0x935530;
		constexpr auto AmmoTypeClicked_ItemDefinition = 0x92F880;
		constexpr auto AddAmmoOption_ItemDefinition_List_Option__int = 0x92F6D0;
		constexpr auto GetReloadMenu_BasePlayer = 0x932A40;
		constexpr auto PredictAmmoType = 0x935140;
		constexpr auto HasMoreThanOneAmmoType_AmmoTypes = 0x932CB0;
		constexpr auto OnDeploy = 0x934190;
		constexpr auto DoReload = 0x930830;
		constexpr auto InsertAmmoFraction = 0x932F90;
		constexpr auto CancelFractionalReloading = 0x92F9F0;
		constexpr auto ClientFinishFractionalReload = 0x92FA90;
		constexpr auto ClientSingleReload = 0x92FBD0;
		constexpr auto DoAttack = 0x92FF70;
		constexpr auto BeginCycle = 0x92F910;
		constexpr auto LaunchProjectile = 0x933FA0;
		constexpr auto DryFire = 0x930CF0;
		constexpr auto ProcessSpectatorViewmodel_ViewModel = 0x935480;
		constexpr auto ProcessSpectatorViewmodelEvent_ViewModel_BaseEntity_Signal_string = 0x935370;
		constexpr auto GetReloadDuration = 0x9328E0;
		constexpr auto GetAvailableAmmo = 0x931E40;
		constexpr auto IsSilenced = 0x932FF0;
		constexpr auto FiredUnderground = 0x931720;
		constexpr auto OnSignal_BaseEntity_Signal_string = 0x934A80;
		constexpr auto LaunchProjectileClientside_ItemDefinition_int_float = 0x9331D0;
		constexpr auto CreateProjectile_string_Vector3_Vector3_Vector3 = 0x92FD10;
		constexpr auto UpdateAmmoDisplay = 0x936160;
		constexpr auto get_UsingInfiniteAmmoCheat = 0x2F4190;
		constexpr auto Load_BaseNetworkable_LoadInfo = 0x9340F0;
		constexpr auto _ctor = 0x936210;
	}

	namespace BowWeapon {
		// Class
		constexpr auto BowWeapon_TypeInfo = 0x31D0230;

		// Offsets
		constexpr auto attackReady = 0x360;
		constexpr auto arrowBack = 0x364;
		constexpr auto swapArrows = 0x368;
		constexpr auto wasAiming = 0x370;

		// Methods
		constexpr auto OnRpcMessage_BasePlayer_uint_Message = 0x4EC340;
		constexpr auto ClientInit_Entity = 0x4EBAA0;
		constexpr auto OnSignal_BaseEntity_Signal_string = 0x4EC430;
		constexpr auto UpdatePullbackThink = 0x4EC880;
		constexpr auto CancelPullbackThink = 0x4EBA30;
		constexpr auto PullbackThink = 0x4EC740;
		constexpr auto OnInput = 0x4EBFC0;
		constexpr auto OnHolstered = 0x4EBF80;
		constexpr auto DoAttack = 0x4EBB10;
		constexpr auto IsAiming = 0x4EBDB0;
		constexpr auto OnViewmodelEvent_string = 0x4EC5A0;
		constexpr auto OnFrame = 0x4EBE50;
		constexpr auto PostNetworkUpdate = 0x4EC610;
		constexpr auto TryReload = 0x4EC810;
		constexpr auto ProcessSpectatorViewmodel_ViewModel = 0x4EC6B0;
		constexpr auto _ctor = 0x2F4AE0;
	}

	namespace HeldEntity {
		// Class
		constexpr auto HeldEntity_TypeInfo = 0x31D2E40;

		// Offsets
		constexpr auto _punches = 0x160;
		constexpr auto punchAdded = 0x168;
		constexpr auto lastPunchTime = 0x174;
		constexpr auto worldModelAnimator = 0x178;
		constexpr auto thirdPersonDeploySound = 0x180;
		constexpr auto thirdPersonAimSound = 0x188;
		constexpr auto thirdPersonAimEndSound = 0x190;
		constexpr auto viewModel = 0x198;
		constexpr auto isDeployed = 0x1A0;
		constexpr auto nextExamineTime = 0x1A4;
		constexpr auto handBone = 0x1A8;
		constexpr auto HoldAnimationOverride = 0x1B0;
		constexpr auto isBuildingTool = 0x1B8;
		constexpr auto hostileScore = 0x1BC;
		constexpr auto holsterInfo = 0x1C0;
		constexpr auto HeldCameraMode = 0x1C8;
		constexpr auto FirstPersonArmOffset = 0x1CC;
		constexpr auto FirstPersonArmRotation = 0x1D8;
		constexpr auto FirstPersonRotationStrength = 0x1E4;
		constexpr auto ownerItemUID = 0x1E8;

		// Static Offsets
		constexpr auto lastExamineTime = 0x0;

		// Methods
		constexpr auto OnRpcMessage_BasePlayer_uint_Message = 0x6AF6E0;
		constexpr auto AddPunch_Vector3_float = 0x6AE960;
		constexpr auto CL_Punch_BaseEntity_RPCMessage = 0x6AEA30;
		constexpr auto DoRecoilCompensation = 0x2F5370;
		constexpr auto SimPunches = 0x6AFED0;
		constexpr auto ClientInit_Entity = 0x6AEAE0;
		constexpr auto GetFovOverride = 0x6AED60;
		constexpr auto DoNetworkDestroy = 0x6AEBB0;
		constexpr auto PostLateClientCycle = 0x2F5370;
		constexpr auto PostNetworkUpdate = 0x6AFB90;
		constexpr auto UpdateHolsteredOffset = 0x6B03B0;
		constexpr auto EditViewAngles = 0x2F5370;
		constexpr auto ClampPitch_float = 0x2F5370;
		constexpr auto OnFrame = 0x6AF550;
		constexpr auto OnInput = 0x2F5370;
		constexpr auto Examine = 0x6AEBF0;
		constexpr auto OnDeploy = 0x6AF290;
		constexpr auto OnDeployed = 0x6AF540;
		constexpr auto OnHolster = 0x6AF570;
		constexpr auto OnHolstered = 0x6AF6D0;
		constexpr auto OnViewmodelEvent_string = 0x2F5370;
		constexpr auto OnReliableEvent_string = 0x2F5370;
		constexpr auto ModifyCamera = 0x2F5370;
		constexpr auto ShouldDestroyImmediately = 0x2F7110;
		constexpr auto UpdatePlayerModel_PlayerModel = 0x6B0BB0;
		constexpr auto ProcessPlayerModel_PlayerModel = 0x2F5370;
		constexpr auto GetHoldAnimations = 0x6AEF50;
		constexpr auto GetMovementMultiplier = 0x2FD390;
		constexpr auto OnSpawnedForWorkshopPreview = 0x2F5370;
		constexpr auto HeldEntityBlocksMovement_InputState = 0x2F4190;
		constexpr auto ProcessSpectatorViewmodel_ViewModel = 0x2F5370;
		constexpr auto ProcessSpectatorViewmodelEvent_ViewModel_BaseEntity_Signal_string = 0x6AFE20;
		constexpr auto get_hostile = 0x6B0D60;
		constexpr auto LightsOn = 0x6771C0;
		constexpr auto IsDeployed = 0x6AF220;
		constexpr auto GetOwnerPlayer = 0x6AF160;
		constexpr auto GetOwnerConnection = 0x6AEF70;
		constexpr auto CanBeUsedInWater = 0x2F4190;
		constexpr auto BlocksGestures = 0x2F4190;
		constexpr auto GetOwnerItem = 0x6AF080;
		constexpr auto GetItem = 0x6AEF60;
		constexpr auto GetOwnerItemDefinition = 0x6AF000;
		constexpr auto IsInstrument = 0x2F4190;
		constexpr auto Load_BaseNetworkable_LoadInfo = 0x6AF230;
		constexpr auto _ctor = 0x6B0C70;
		constexpr auto _cctor = 0x6B0C30;
	}

	namespace MedicalTool {
		// Offsets
		constexpr auto healDurationSelf = 0x278;
		constexpr auto healDurationOther = 0x27C;
		constexpr auto healDurationOtherWounded = 0x280;
		constexpr auto maxDistanceOther = 0x284;
		constexpr auto canUseOnOther = 0x288;
		constexpr auto canRevive = 0x289;
		constexpr auto useTarget = 0x290;
		constexpr auto resetTime = 0x298;

		// Methods
		constexpr auto OnRpcMessage_BasePlayer_uint_Message = 0x7168F0;
		constexpr auto GetTarget = 0x716190;
		constexpr auto AnyPressed = 0x7160C0;
		constexpr auto OnInput = 0x716540;
		constexpr auto OnViewmodelEvent_string = 0x716CC0;
		constexpr auto Reset = 0x716ED0;
		constexpr auto OnDeploy = 0x7164E0;
		constexpr auto OnHolstered = 0x716510;
		constexpr auto ProcessSpectatorViewmodelEvent_ViewModel_BaseEntity_Signal_string = 0x716E10;
		constexpr auto _ctor = 0x716EF0;
	}

	namespace PlayerInventory {
		// Offsets
		constexpr auto containerMain = 0x20;
		constexpr auto containerBelt = 0x28;
		constexpr auto containerWear = 0x30;
		constexpr auto crafting = 0x38;
		constexpr auto loot = 0x40;

		// Methods
		constexpr auto OnRpcMessage_BasePlayer_uint_Message = 0xA62680;
		constexpr auto Initialize = 0xA62300;
		constexpr auto DoDestroy = 0xA61AE0;
		constexpr auto ClientInit_BasePlayer = 0xA61A60;
		constexpr auto UpdatedItemContainer_BaseEntity_RPCMessage = 0xA62AD0;
		constexpr auto FindItemUID_uint = 0xA62120;
		constexpr auto FindItemID_string = 0xA61E40;
		constexpr auto FindItemID_int = 0xA61F60;
		constexpr auto FindBySubEntityID_uint = 0xA61BC0;
		constexpr auto FindItemIDs_int = 0xA62030;
		constexpr auto FindContainer_uint = 0xA61C90;
		constexpr auto GetContainer_PlayerInventory_Type = 0xA62280;
		constexpr auto Load_PlayerInventory = 0xA62530;
		constexpr auto GetAmount_int = 0xA62200;
		constexpr auto AllItems = 0xA61990;
		constexpr auto AllItemsNoAlloc_List_Item_ = 0xA618C0;
		constexpr auto FindAmmo_List_Item__AmmoTypes = 0xA61B70;
		constexpr auto HasAmmo_AmmoTypes = 0xA622A0;
		constexpr auto _ctor = 0xA62CC0;
	}

	namespace MainCamera {
		// Class
		constexpr auto MainCamera_TypeInfo = 0x31D3BF0;

		// Offsets
		constexpr auto totalFrameTime = 0x138;
		constexpr auto lowestFrameTime = 0x140;
		constexpr auto highestFrameTime = 0x148;
		constexpr auto totalFrames = 0x150;
		constexpr auto timeSinceFrameSubmit = 0x154;
		constexpr auto frameTime = 0x158;

		// Static Offsets
		constexpr auto mainCamera = 0x0;
		constexpr auto mainCameraTransform = 0x8;
		constexpr auto velocityk__BackingField = 0x10;
		constexpr auto MipStreamingBudget = 0x20;

		// Methods
		constexpr auto get_isValid = 0x585710;
		constexpr auto get_velocity = 0x585A20;
		constexpr auto set_velocity_Vector3 = 0x585D90;
		constexpr auto get_position = 0x5857F0;
		constexpr auto set_position_Vector3 = 0x585B30;
		constexpr auto get_forward = 0x585680;
		constexpr auto set_forward_Vector3 = 0x585A90;
		constexpr auto get_right = 0x585880;
		constexpr auto set_right_Vector3 = 0x585BC0;
		constexpr auto get_up = 0x585990;
		constexpr auto set_up_Vector3 = 0x585CE0;
		constexpr auto get_rotation = 0x585910;
		constexpr auto set_rotation_Quaternion = 0x585C60;
		constexpr auto get_Ray = 0x5852C0;
		constexpr auto get_Raycast = 0x585440;
		constexpr auto GetEnvironment = 0x583EB0;
		constexpr auto InEnvironment_EnvironmentType = 0x583F90;
		constexpr auto Awake = 0x583710;
		constexpr auto Setup = 0x5848E0;
		constexpr auto OnDestroy = 0x584440;
		constexpr auto AdjustTextureStreamingBudget = 0x583520;
		constexpr auto Update = 0x5851E0;
		constexpr auto RecordFrameTime = 0x584540;
		constexpr auto LateUpdate = 0x584230;
		constexpr auto Distance_Vector3 = 0x583B20;
		constexpr auto SqrDistance_Vector3 = 0x584D70;
		constexpr auto Distance_BaseEntity = 0x583CC0;
		constexpr auto SqrDistance_BaseEntity = 0x584B60;
		constexpr auto Distance2D_Vector3 = 0x5837F0;
		constexpr auto SqrDistance2D_Vector3 = 0x5849A0;
		constexpr auto Distance2D_BaseEntity = 0x583960;
		constexpr auto Trace_float_BaseEntity_float = 0x584F40;
		constexpr auto IsInFrontOfLocalPlayerCamera_Vector3 = 0x584080;
		constexpr auto _ctor = 0x585260;
		constexpr auto _cctor = 0x5851F0;
	}

	namespace Model {
		// Offsets
		constexpr auto collision = 0x18;
		constexpr auto rootBone = 0x20;
		constexpr auto headBone = 0x28;
		constexpr auto eyeBone = 0x30;
		constexpr auto animator = 0x38;
		constexpr auto skeleton = 0x40;
		constexpr auto boneTransforms = 0x48;
		constexpr auto boneNames = 0x50;
		constexpr auto boneDict = 0x58;
		constexpr auto skin = 0x60;
		constexpr auto _lodGroup = 0x68;

		// Methods
		constexpr auto OnEnable = 0x6718E0;
		constexpr auto BuildBoneDictionary = 0x671050;
		constexpr auto GetSkin = 0x5202D0;
		constexpr auto FindBoneInternal_string = 0x671140;
		constexpr auto FindBone_string = 0x6711D0;
		constexpr auto FindBone_uint = 0x671180;
		constexpr auto FindBoneID_Transform = 0x671100;
		constexpr auto GetBones = 0x6713E0;
		constexpr auto FindClosestBone_Vector3 = 0x671240;
		constexpr auto get_lodGroup = 0x6720D0;
		constexpr auto OnDisable = 0x6717B0;
		constexpr auto SyncBones_Model = 0x671CB0;
		constexpr auto Trigger_string = 0x672020;
		constexpr auto GetTransform_Transform_Vector3_BaseEntity = 0x671410;
		constexpr auto ApplyVisibility_bool_bool_bool = 0x670EC0;
		constexpr auto PreProcess_IPrefabProcessor_GameObject_string_bool_bool_bool = 0x6718F0;
		constexpr auto _ctor = 0x2F8E60;
	}

	namespace Projectile {
		// Class
		constexpr auto Projectile_TypeInfo = 0x31C7D98;

		// Offsets
		constexpr auto initialVelocity = 0x18;
		constexpr auto drag = 0x24;
		constexpr auto gravityModifier = 0x28;
		constexpr auto thickness = 0x2C;
		constexpr auto initialDistance = 0x30;
		constexpr auto remainInWorld = 0x34;
		constexpr auto stickProbability = 0x38;
		constexpr auto breakProbability = 0x3C;
		constexpr auto conditionLoss = 0x40;
		constexpr auto ricochetChance = 0x44;
		constexpr auto penetrationPower = 0x48;
		constexpr auto damageProperties = 0x50;
		constexpr auto damageDistances = 0x58;
		constexpr auto damageMultipliers = 0x60;
		constexpr auto damageTypes = 0x68;
		constexpr auto rendererToScale = 0x70;
		constexpr auto firstPersonRenderer = 0x78;
		constexpr auto createDecals = 0x80;
		constexpr auto doDefaultHitEffects = 0x81;
		constexpr auto flybySound = 0x88;
		constexpr auto flybySoundDistance = 0x90;
		constexpr auto closeFlybySound = 0x98;
		constexpr auto closeFlybyDistance = 0xA0;
		constexpr auto tumbleSpeed = 0xA4;
		constexpr auto tumbleAxis = 0xA8;
		constexpr auto swimScale = 0xB4;
		constexpr auto swimSpeed = 0xC0;
		constexpr auto owner = 0xD0;
		constexpr auto sourceWeaponPrefab = 0xD8;
		constexpr auto sourceProjectilePrefab = 0xE0;
		constexpr auto mod = 0xE8;
		constexpr auto projectileID = 0xF0;
		constexpr auto seed = 0xF4;
		constexpr auto clientsideEffect = 0xF8;
		constexpr auto clientsideAttack = 0xF9;
		constexpr auto integrity = 0xFC;
		constexpr auto maxDistance = 0x100;
		constexpr auto modifier = 0x104;
		constexpr auto invisible = 0x114;
		constexpr auto currentVelocity = 0x118;
		constexpr auto currentPosition = 0x124;
		constexpr auto traveledDistance = 0x130;
		constexpr auto traveledTime = 0x134;
		constexpr auto launchTime = 0x138;
		constexpr auto sentPosition = 0x13C;
		constexpr auto previousPosition = 0x148;
		constexpr auto previousVelocity = 0x154;
		constexpr auto previousTraveledTime = 0x160;
		constexpr auto isRicochet = 0x164;
		constexpr auto isRetiring = 0x165;
		constexpr auto flybyPlayed = 0x166;
		constexpr auto wasFacingPlayer = 0x167;
		constexpr auto flybyPlane = 0x168;
		constexpr auto flybyRay = 0x178;
		constexpr auto cleanupAction = 0x190;
		constexpr auto hitTest = 0x198;
		constexpr auto swimRandom = 0x1A0;

		// Static Offsets
		constexpr auto _fleshMaterialID = 0x0;
		constexpr auto _waterMaterialID = 0x4;
		constexpr auto cachedWaterString = 0x8;

		// Methods
		constexpr auto CalculateDamage_HitInfo_Projectile_Modifier_float = 0x63FF70;
		constexpr auto get_isAuthoritative = 0x644D20;
		constexpr auto get_isAlive = 0x644CE0;
		constexpr auto Retire = 0x643AD0;
		constexpr auto Cleanup = 0x6404C0;
		constexpr auto AdjustVelocity_Vector3 = 0x63FD00;
		constexpr auto InitializeVelocity_Vector3 = 0x642D10;
		constexpr auto OnDisable = 0x642F80;
		constexpr auto Update = 0x644940;
		constexpr auto SetEffectScale_float = 0x6440A0;
		constexpr auto DoFlybySound = 0x6406C0;
		constexpr auto CalculateEffectScale = 0x640420;
		constexpr auto UpdateVelocity_float = 0x644660;
		constexpr auto DoVelocityUpdate_float = 0x642520;
		constexpr auto DoMovement_float = 0x6413E0;
		constexpr auto DoWaterHit_HitTest_Vector3 = 0x642900;
		constexpr auto DoRicochet_HitTest_Vector3_Vector3 = 0x642100;
		constexpr auto DoHit_HitTest_Vector3_Vector3 = 0x640CD0;
		constexpr auto AdditiveImpactEffect_HitInfo = 0x2F5370;
		constexpr auto Reflect_uint_Vector3_Vector3 = 0x643250;
		constexpr auto Refract_uint_Vector3_Vector3_float = 0x6435A0;
		constexpr auto Refract_Vector3_Vector3_float = 0x643970;
		constexpr auto RandomRotation_uint_float = 0x643150;
		constexpr auto Launch = 0x642EF0;
		constexpr auto FleshMaterialID = 0x642C10;
		constexpr auto WaterMaterialID = 0x644A40;
		constexpr auto IsWaterMaterial_string = 0x642DC0;
		constexpr auto ShouldStopProjectile_RaycastHit = 0x6445A0;
		constexpr auto _ctor = 0x644B40;
		constexpr auto _cctor = 0x2F5370;
	}

	namespace ViewModel {
		// Offsets
		constexpr auto viewModelPrefab = 0x18;
		constexpr auto targetEntity = 0x20;
		constexpr auto instance = 0x28;

		// Methods
		constexpr auto Deploy_BaseEntity = 0x7630B0;
		constexpr auto OnDisable = 0x763420;
		constexpr auto Holster = 0x7633B0;
		constexpr auto Clear = 0x762F40;
		constexpr auto OnFrame = 0x763490;
		constexpr auto Play_string_int = 0x7635F0;
		constexpr auto ResetTrigger_string = 0x763720;
		constexpr auto ResetTrigger_int = 0x763690;
		constexpr auto Trigger_string = 0x763A30;
		constexpr auto Trigger_int = 0x763AC0;
		constexpr auto CrossFade_string_float = 0x763010;
		constexpr auto SetBool_string_bool = 0x763850;
		constexpr auto SetBool_int_bool = 0x7637B0;
		constexpr auto SetFloat_string_float = 0x763990;
		constexpr auto SetFloat_int_float = 0x7638F0;
		constexpr auto set_ironSights_bool = 0x763B50;
		constexpr auto _ctor = 0x2F8E60;
	}

	namespace GamePhysics {
		// Class
		constexpr auto GamePhysics_TypeInfo = 0x31D1C88;

		// Static Offsets
		constexpr auto hitBuffer = 0x0;
		constexpr auto hitBufferB = 0x8;
		constexpr auto colBuffer = 0x10;

		// Methods
		constexpr auto CheckSphere_Vector3_float_int_QueryTriggerInteraction = 0x5572C0;
		constexpr auto CheckCapsule_Vector3_Vector3_float_int_QueryTriggerInteraction = 0x556AD0;
		constexpr auto CheckOBB_OBB_int_QueryTriggerInteraction = 0x557190;
		constexpr auto CheckBounds_Bounds_int_QueryTriggerInteraction = 0x556970;
		constexpr auto CheckInsideNonConvexMesh_Vector3_int = 0x556DE0;
		constexpr auto CheckInsideAnyCollider_Vector3_int = 0x556C50;
		constexpr auto OverlapSphere_Vector3_float_List_Collider__int_QueryTriggerInteraction = 0x5586D0;
		constexpr auto CapsuleSweep_Vector3_Vector3_float_Vector3_float_List_RaycastHit__int_QueryTriggerInteraction = 0x5566D0;
		constexpr auto OverlapCapsule_Vector3_Vector3_float_List_Collider__int_QueryTriggerInteraction = 0x558450;
		constexpr auto OverlapOBB_OBB_List_Collider__int_QueryTriggerInteraction = 0x558580;
		constexpr auto OverlapBounds_Bounds_List_Collider__int_QueryTriggerInteraction = 0x5582B0;
		constexpr auto BufferToList_int_List_Collider_ = 0x556530;
		constexpr auto HitBufferToList_int_List_RaycastHit_ = 0x557500;
		constexpr auto Trace_Ray_float_RaycastHit_float_int_QueryTriggerInteraction_BaseEntity = 0x558D80;
		constexpr auto TraceAll_Ray_float_List_RaycastHit__float_int_QueryTriggerInteraction_BaseEntity = 0x558CA0;
		constexpr auto TraceAllUnordered_Ray_float_List_RaycastHit__float_int_QueryTriggerInteraction_BaseEntity = 0x5589B0;
		constexpr auto LineOfSightRadius_Vector3_Vector3_int_float_float_float_BaseEntity = 0x557E90;
		constexpr auto LineOfSightRadius_Vector3_Vector3_int_float_float_BaseEntity = 0x557CE0;
		constexpr auto LineOfSightRadius_Vector3_Vector3_int_float_BaseEntity = 0x557DC0;
		constexpr auto LineOfSight_Vector3_Vector3_int_float_float_BaseEntity = 0x558080;
		constexpr auto LineOfSight_Vector3_Vector3_int_float_BaseEntity = 0x5581A0;
		constexpr auto LineOfSight_Vector3_Vector3_int_BaseEntity = 0x557F70;
		constexpr auto LineOfSightInternal_Vector3_Vector3_int_float_float_float_BaseEntity = 0x557670;
		constexpr auto Verify_RaycastHit_BaseEntity = 0x558F90;
		constexpr auto Verify_Collider_Vector3_BaseEntity = 0x559040;
		constexpr auto CompareEntity_BaseEntity_BaseEntity = 0x557380;
		constexpr auto HandleTerrainCollision_Vector3_int = 0x5573F0;
		constexpr auto Sort_List_RaycastHit_ = 0x5588B0;
		constexpr auto Sort_RaycastHitarray = 0x5587C0;
		constexpr auto _cctor = 0x559240;
	}

	namespace GameTrace {
		// Methods
		constexpr auto TraceAll_HitTest_List_TraceInfo__int = 0xF8C2A0;
		constexpr auto Trace_HitTest_int = 0xF8CBA0;
	}

	namespace AttackEntity {
		// Class
		constexpr auto AttackEntity_TypeInfo = 0x31D2E88;

		// Offsets
		constexpr auto deployDelay = 0x1F0;
		constexpr auto repeatDelay = 0x1F4;
		constexpr auto animationDelay = 0x1F8;
		constexpr auto effectiveRange = 0x1FC;
		constexpr auto npcDamageScale = 0x200;
		constexpr auto attackLengthMin = 0x204;
		constexpr auto attackLengthMax = 0x208;
		constexpr auto attackSpacing = 0x20C;
		constexpr auto aiAimSwayOffset = 0x210;
		constexpr auto aiAimCone = 0x214;
		constexpr auto aiOnlyInRange = 0x218;
		constexpr auto CloseRangeAddition = 0x21C;
		constexpr auto MediumRangeAddition = 0x220;
		constexpr auto LongRangeAddition = 0x224;
		constexpr auto CanUseAtMediumRange = 0x228;
		constexpr auto CanUseAtLongRange = 0x229;
		constexpr auto reloadSounds = 0x230;
		constexpr auto thirdPersonMeleeSound = 0x238;
		constexpr auto recoilCompDelayOverride = 0x240;
		constexpr auto wantsRecoilComp = 0x244;
		constexpr auto nextAttackTime = 0x248;
		constexpr auto lastTickTime = 0x24C;
		constexpr auto nextTickTime = 0x250;
		constexpr auto timeSinceDeploy = 0x254;
		constexpr auto lastRecoilCompTime = 0x258;
		constexpr auto startAimingDirection = 0x25C;
		constexpr auto wasDoingRecoilComp = 0x268;
		constexpr auto reductionSpeed = 0x26C;

		// Static Offsets
		constexpr auto reductionSpeedScalars = 0x0;

		// Methods
		constexpr auto GetInheritedVelocity_BasePlayer = 0x8CD120;
		constexpr auto get_NextAttackTime = 0x8CD600;
		constexpr auto GetAttackStats_HitInfo = 0x2F5370;
		constexpr auto StartAttackCooldownRaw_float = 0x8CD340;
		constexpr auto StartAttackCooldown_float = 0x8CD370;
		constexpr auto ResetAttackCooldown = 0x8CD330;
		constexpr auto HasAttackCooldown = 0x8CD190;
		constexpr auto GetAttackCooldown = 0x8CD020;
		constexpr auto GetAttackIdle = 0x8CD0A0;
		constexpr auto CalculateCooldownTime_float_float_bool = 0x8CC5D0;
		constexpr auto IsFullyDeployed = 0x8CD1C0;
		constexpr auto ProcessInputTime = 0x8CD260;
		constexpr auto OnInput = 0x8CD200;
		constexpr auto OnDeploy = 0x8CD1E0;
		constexpr auto RecoilCompReady = 0x8CD2B0;
		constexpr auto AddPunch_Vector3_float = 0x8CC420;
		constexpr auto DoRecoilCompensation = 0x8CC710;
		constexpr auto _ctor = 0x8CD510;
		constexpr auto _cctor = 0x8CD4A0;
	}

	namespace BaseNetworkable {
		// Class
		constexpr auto BaseNetworkable_TypeInfo = 0x31D2CF0;

		// Offsets
		constexpr auto JustCreatedk__BackingField = 0x18;
		constexpr auto entityDestroy = 0x20;
		constexpr auto postNetworkUpdateComponents = 0x28;
		constexpr auto parentEntity = 0x30;
		constexpr auto children = 0x40;
		constexpr auto prefabID = 0x48;
		constexpr auto globalBroadcast = 0x4C;
		constexpr auto net = 0x50;
		constexpr auto IsDestroyedk__BackingField = 0x58;
		constexpr auto _prefabName = 0x60;
		constexpr auto _prefabNameWithoutExtension = 0x68;

		// Static Offsets
		constexpr auto clientEntities = 0x0;

		// Methods
		constexpr auto get_JustCreated = 0x301580;
		constexpr auto set_JustCreated_bool = 0x301770;
		constexpr auto ClientSpawn_Entity = 0x2FFD50;
		constexpr auto ClientOnEnable = 0x2FFCD0;
		constexpr auto ClientInit_Entity = 0x2FFAE0;
		constexpr auto OnNetworkUpdate_Entity = 0x301050;
		constexpr auto PreNetworkUpdate = 0x2F5370;
		constexpr auto PostNetworkUpdate = 0x2F5370;
		constexpr auto ShouldDestroyWithGroup = 0x2F7110;
		constexpr auto ShouldDestroyImmediately = 0x2F4190;
		constexpr auto NetworkDestroy_bool = 0x300BE0;
		constexpr auto DoClientDestroy = 0x300120;
		constexpr auto DoNetworkDestroy = 0x2F5370;
		constexpr auto BroadcastOnPostNetworkUpdate_BaseEntity = 0x2FF8C0;
		constexpr auto PostProcess_IPrefabProcessor_GameObject_string_bool_bool_bool = 0x3011D0;
		constexpr auto GetParentEntity = 0x300510;
		constexpr auto HasParent = 0x300520;
		constexpr auto AddChild_BaseEntity = 0x2FF830;
		constexpr auto OnChildAdded_BaseEntity = 0x2F5370;
		constexpr auto RemoveChild_BaseEntity = 0x301250;
		constexpr auto OnChildRemoved_BaseEntity = 0x2F5370;
		constexpr auto get_gameManager = 0x3016A0;
		constexpr auto get_prefabAttribute = 0x301700;
		constexpr auto get_IsDestroyed = 0x301570;
		constexpr auto set_IsDestroyed_bool = 0x301760;
		constexpr auto get_PrefabName = 0x301590;
		constexpr auto get_ShortPrefabName = 0x301610;
		constexpr auto GetNetworkPosition = 0x300480;
		constexpr auto GetNetworkRotation = 0x3004D0;
		constexpr auto InvokeString = 0x300530;
		constexpr auto LookupPrefab = 0x300B40;
		constexpr auto EqualNetID_BaseNetworkable = 0x300430;
		constexpr auto EqualNetID_uint = 0x300460;
		constexpr auto ResetState = 0x3012C0;
		constexpr auto InitShared = 0x2F5370;
		constexpr auto PreInitShared = 0x2F5370;
		constexpr auto PostInitShared = 0x2F5370;
		constexpr auto DestroyShared = 0x2F5370;
		constexpr auto OnNetworkGroupEnter_Group = 0x2F5370;
		constexpr auto OnNetworkGroupLeave_Group = 0x2F5370;
		constexpr auto OnNetworkGroupChange = 0x300F10;
		constexpr auto OnNetworkSubscribersEnter_List_Connection_ = 0x2F5370;
		constexpr auto OnNetworkSubscribersLeave_List_Connection_ = 0x2F5370;
		constexpr auto EntityDestroy = 0x300340;
		constexpr auto DoEntityDestroy = 0x3001E0;
		constexpr auto SpawnShared = 0x301310;
		constexpr auto Load_BaseNetworkable_LoadInfo = 0x300780;
		constexpr auto get_isServer = 0x2F4190;
		constexpr auto get_isClient = 0x2F7110;
		constexpr auto OnRpcMessage_BasePlayer_uint_Message = 0x2F4190;
		constexpr auto _ctor = 0x3014D0;
		constexpr auto _cctor = 0x301420;
	}

	namespace PlayerEyes {
		// Class
		constexpr auto PlayerEyes_TypeInfo = 0x31BCC00;

		// Offsets
		constexpr auto thirdPersonSleepingOffset = 0x20;
		constexpr auto defaultLazyAim = 0x30;
		constexpr auto viewOffset = 0x38;
		constexpr auto bodyRotationk__BackingField = 0x44;
		constexpr auto headAnglesk__BackingField = 0x54;
		constexpr auto rotationLookk__BackingField = 0x60;
		constexpr auto IsAltLookingLegsThresholdk__BackingField = 0x70;

		// Static Offsets
		constexpr auto EyeOffset = 0x0;
		constexpr auto DuckOffset = 0xC;
		constexpr auto CrawlOffset = 0x18;

		// Methods
		constexpr auto get_worldMountedPosition = 0xA5E780;
		constexpr auto get_worldStandingPosition = 0xA5E970;
		constexpr auto get_worldCrouchedPosition = 0xA5E680;
		constexpr auto get_worldCrawlingPosition = 0xA5E580;
		constexpr auto get_position = 0xA5E040;
		constexpr auto get_BodyLeanOffset = 0xA5D700;
		constexpr auto get_center = 0xA5DA60;
		constexpr auto get_offset = 0xA5DD80;
		constexpr auto get_rotation = 0xA5E4D0;
		constexpr auto set_rotation_Quaternion = 0xA5EAD0;
		constexpr auto get_bodyRotation = 0xA5D980;
		constexpr auto set_bodyRotation_Quaternion = 0xA5EAA0;
		constexpr auto get_headAngles = 0xA5DD60;
		constexpr auto set_headAngles_Vector3 = 0xA5EAB0;
		constexpr auto get_rotationLook = 0xA5E4C0;
		constexpr auto set_rotationLook_Quaternion = 0xA5EAC0;
		constexpr auto get_parentRotation = 0xA5DEB0;
		constexpr auto get_canUpdateViewAngles = 0xA5D990;
		constexpr auto get_IsAltLookingLegsThreshold = 0xA5D970;
		constexpr auto set_IsAltLookingLegsThreshold_bool = 0xA5EA90;
		constexpr auto FrameUpdate_Camera = 0xA5C2C0;
		constexpr auto UpdateAltLegsThreshold_float = 0xA5D330;
		constexpr auto UpdateCamera_Camera = 0xA5D3A0;
		constexpr auto DoFirstPersonCamera_Camera = 0xA5A3A0;
		constexpr auto DoInEyeCamera_Camera = 0xA5A9F0;
		constexpr auto DoThirdPersonCamera_Camera = 0xA5AD40;
		constexpr auto ApplyCameraMoves_Camera = 0xA59D70;
		constexpr auto MovementForward = 0xA5CFB0;
		constexpr auto MovementRight = 0xA5D170;
		constexpr auto BodyRay = 0xA59F50;
		constexpr auto BodyForward = 0xA59E00;
		constexpr auto BodyRight = 0xA5A100;
		constexpr auto BodyUp = 0xA5A250;
		constexpr auto HeadRay = 0xA5CBF0;
		constexpr auto HeadForward = 0xA5CB00;
		constexpr auto HeadRight = 0xA5CDD0;
		constexpr auto HeadUp = 0xA5CEC0;
		constexpr auto GetLookRotation = 0xA5C980;
		constexpr auto GetAimRotation = 0xA5C8C0;
		constexpr auto _ctor = 0xA5D640;
		constexpr auto _cctor = 0xA5D540;
	}

	namespace PlayerInput {
		// Offsets
		constexpr auto state = 0x20;
		constexpr auto hadInputBuffer = 0x28;
		constexpr auto bodyRotation = 0x2C;
		constexpr auto bodyAngles = 0x3C;
		constexpr auto headRotation = 0x48;
		constexpr auto headAngles = 0x58;
		constexpr auto recoilAngles = 0x64;
		constexpr auto viewDelta = 0x70;
		constexpr auto headLerp = 0x78;
		constexpr auto mouseWheelUp = 0x7C;
		constexpr auto mouseWheelDn = 0x80;
		constexpr auto autorun = 0x84;
		constexpr auto toggleDuck = 0x85;
		constexpr auto offsetAngles = 0x88;
		constexpr auto ignoredButtons = 0x94;
		constexpr auto hasKeyFocus = 0x98;

		// Methods
		constexpr auto OnDisable = 0xA61350;
		constexpr auto FrameUpdate = 0xA605F0;
		constexpr auto Flip = 0xA60490;
		constexpr auto AdjustMouseMovement_Vector2 = 0xA5EB90;
		constexpr auto UpdateViewAngles = 0xA61560;
		constexpr auto ApplyViewAngles = 0xA5EDD0;
		constexpr auto SetViewVars_Vector3 = 0xA61440;
		constexpr auto FinalizeRecoil = 0xA602C0;
		constexpr auto ResetOffsetAngles = 0xA613D0;
		constexpr auto ClientAngles = 0xA60290;
		constexpr auto ClientLookVars = 0xA602A0;
		constexpr auto HeadAngles = 0xA546B0;
		constexpr auto HeadLookVars = 0xA609A0;
		constexpr auto ModifyInputState_InputMessage = 0xA612C0;
		constexpr auto IsButtonDownNative_BUTTON = 0xA60E10;
		constexpr auto BuildInputState_bool = 0xA5F950;
		constexpr auto IsAiming = 0xA60CC0;
		constexpr auto UpdateButton_InputMessage_BUTTON = 0xA614D0;
		constexpr auto IgnoreCurrentButtons = 0xA609C0;
		constexpr auto get_hasOnlyPartialKeyInput = 0xA61850;
		constexpr auto get_hasNoKeyInput = 0xA616C0;
		constexpr auto UpdateKeyFocus_bool = 0xA61540;
		constexpr auto IgnoreCurrentKeys = 0xA60AD0;
		constexpr auto _ctor = 0xA61650;
	}

	namespace PlayerModel {
		// Class
		constexpr auto PlayerModel_TypeInfo = 0x31CC208;

		// Offsets
		constexpr auto _smoothAimWeight = 0x18;
		constexpr auto _smoothVelocity = 0x1C;
		constexpr auto _smoothlookAngle = 0x20;
		constexpr auto allowMountedHeadLook = 0x2C;
		constexpr auto smoothLookDir = 0x30;
		constexpr auto lastSafeLookDir = 0x3C;
		constexpr auto Shoulders = 0x48;
		constexpr auto AdditionalSpineBones = 0x50;
		constexpr auto LegParts = 0x58;
		constexpr auto fakeSpineBones = 0x60;
		constexpr auto extraLeanBack = 0x68;
		constexpr auto drawState = 0x6C;
		constexpr auto timeInArmsMode = 0x70;
		constexpr auto collision = 0x78;
		constexpr auto censorshipCube = 0x80;
		constexpr auto censorshipCubeBreasts = 0x88;
		constexpr auto jawBone = 0x90;
		constexpr auto neckBone = 0x98;
		constexpr auto headBone = 0xA0;
		constexpr auto eyeController = 0xA8;
		constexpr auto blinkController = 0xB0;
		constexpr auto SpineBones = 0xB8;
		constexpr auto leftFootBone = 0xC0;
		constexpr auto rightFootBone = 0xC8;
		constexpr auto leftHandPropBone = 0xD0;
		constexpr auto rightHandPropBone = 0xD8;
		constexpr auto rightHandTarget = 0xE0;
		constexpr auto leftHandTargetPosition = 0xEC;
		constexpr auto leftHandTargetRotation = 0xF8;
		constexpr auto rightHandTargetPosition = 0x108;
		constexpr auto rightHandTargetRotation = 0x114;
		constexpr auto steeringTargetDegrees = 0x124;
		constexpr auto rightFootTargetPosition = 0x128;
		constexpr auto rightFootTargetRotation = 0x134;
		constexpr auto leftFootTargetPosition = 0x144;
		constexpr auto leftFootTargetRotation = 0x150;
		constexpr auto CinematicAnimationController = 0x160;
		constexpr auto DefaultAvatar = 0x168;
		constexpr auto CinematicAvatar = 0x170;
		constexpr auto DefaultHoldType = 0x178;
		constexpr auto SleepGesture = 0x180;
		constexpr auto CrawlToIncapacitatedGesture = 0x188;
		constexpr auto StandToIncapacitatedGesture = 0x190;
		constexpr auto CurrentGesture = 0x198;
		constexpr auto MaleSkin = 0x1A0;
		constexpr auto FemaleSkin = 0x1A8;
		constexpr auto subsurfaceProfile = 0x1B0;
		constexpr auto voiceVolume = 0x1B8;
		constexpr auto skinColor = 0x1BC;
		constexpr auto skinNumber = 0x1C0;
		constexpr auto meshNumber = 0x1C4;
		constexpr auto hairNumber = 0x1C8;
		constexpr auto skinType = 0x1CC;
		constexpr auto movementSounds = 0x1D0;
		constexpr auto showSash = 0x1D8;
		constexpr auto tempPoseType = 0x1DC;
		constexpr auto underwearSkin = 0x1E0;
		constexpr auto overrideSkinSeedk__BackingField = 0x1E8;
		constexpr auto AimAnglesk__BackingField = 0x1F0;
		constexpr auto LookAnglesk__BackingField = 0x200;
		constexpr auto modelState = 0x210;
		constexpr auto position = 0x218;
		constexpr auto velocity = 0x224;
		constexpr auto speedOverride = 0x230;
		constexpr auto newVelocity = 0x23C;
		constexpr auto rotation = 0x248;
		constexpr auto mountedRotation = 0x258;
		constexpr auto smoothLeftFootIK = 0x268;
		constexpr auto smoothRightFootIK = 0x274;
		constexpr auto drawShadowOnly = 0x280;
		constexpr auto isIncapacitated = 0x281;
		constexpr auto flinchLocation = 0x284;
		constexpr auto visible = 0x288;
		constexpr auto nameTag = 0x290;
		constexpr auto animatorNeedsWarmup = 0x298;
		constexpr auto isLocalPlayer = 0x299;
		constexpr auto aimSoundDef = 0x2A0;
		constexpr auto aimEndSoundDef = 0x2A8;
		constexpr auto InGesture = 0x2B0;
		constexpr auto CurrentGestureConfig = 0x2B8;
		constexpr auto InCinematic = 0x2C0;
		constexpr auto defaultAnimatorController = 0x2C8;
		constexpr auto _multiMesh = 0x2D0;
		constexpr auto _animator = 0x2D8;
		constexpr auto _lodGroup = 0x2E0;
		constexpr auto _currentGesture = 0x2E8;
		constexpr auto holdTypeLock = 0x2F0;
		constexpr auto wasMountedRightAim = 0x2F4;
		constexpr auto cachedMask = 0x2F8;
		constexpr auto cachedConstructionMask = 0x2FC;
		constexpr auto WorkshopHeldEntity = 0x300;
		constexpr auto wasCrawling = 0x308;
		constexpr auto mountedSpineLookWeight = 0x30C;
		constexpr auto mountedAnimSpeed = 0x310;
		constexpr auto preserveBones = 0x314;
		constexpr auto downLimitOverride = 0x318;
		constexpr auto IsNpck__BackingField = 0x320;
		constexpr auto timeSinceReactionStart = 0x324;
		constexpr auto timeSinceLeftFootTest = 0x328;
		constexpr auto cachedLeftFootPos = 0x32C;
		constexpr auto cachedLeftFootNormal = 0x338;
		constexpr auto timeSinceRightFootTest = 0x344;
		constexpr auto cachedRightFootPos = 0x348;
		constexpr auto cachedRightFootNormal = 0x354;

		// Static Offsets
		constexpr auto pm_uplimit = 0x0;
		constexpr auto pm_downlimit = 0x4;
		constexpr auto pm_upspine = 0x8;
		constexpr auto pm_downspine = 0xC;
		constexpr auto pm_lookoffset = 0x10;
		constexpr auto pm_anglesmoothspeed = 0x1C;
		constexpr auto pm_nohold = 0x20;
		constexpr auto pm_ladder = 0x24;
		constexpr auto pm_minweight = 0x28;
		constexpr auto FinishedLegWearables = 0x30;
		constexpr auto speed = 0x38;
		constexpr auto acceleration = 0x3C;
		constexpr auto rotationYaw = 0x40;
		constexpr auto forward = 0x44;
		constexpr auto right = 0x48;
		constexpr auto up = 0x4C;
		constexpr auto ducked = 0x50;
		constexpr auto grounded = 0x54;
		constexpr auto crawling = 0x58;
		constexpr auto waterlevel = 0x5C;
		constexpr auto attack = 0x60;
		constexpr auto attack_alt = 0x64;
		constexpr auto deploy = 0x68;
		constexpr auto reload = 0x6C;
		constexpr auto throwWeapon = 0x70;
		constexpr auto holster = 0x74;
		constexpr auto aiming = 0x78;
		constexpr auto onLadder = 0x7C;
		constexpr auto posing = 0x80;
		constexpr auto poseType = 0x84;
		constexpr auto relaxGunPose = 0x88;
		constexpr auto vehicle_aim_yaw = 0x8C;
		constexpr auto vehicle_aim_speed = 0x90;
		constexpr auto onPhone = 0x94;
		constexpr auto usePoseTransition = 0x98;
		constexpr auto leftFootIK = 0x9C;
		constexpr auto rightFootIK = 0xA0;
		constexpr auto vehicleSteering = 0xA4;
		constexpr auto sitReaction = 0xA8;
		constexpr auto forwardReaction = 0xAC;
		constexpr auto rightReaction = 0xB0;

		// Methods
		constexpr auto SetMountedLookAtOverride_bool = 0xA6DDD0;
		constexpr auto SpineIk = 0xA6E1F0;
		constexpr auto ParentArmsToCamera = 0xA6C010;
		constexpr auto OnAnimatorIK = 0xA6B680;
		constexpr auto HandIK_float = 0xA69C90;
		constexpr auto FootIK_float = 0xA664A0;
		constexpr auto HeadIK_float = 0xA6A0F0;
		constexpr auto get_ShouldDoLegs = 0xA73AE0;
		constexpr auto get_ShouldShowHands = 0xA73B60;
		constexpr auto ClearLegs = 0xA65310;
		constexpr auto RebuildLegs = 0xA6C9C0;
		constexpr auto InitializeLegSpineBones = 0xA6A820;
		constexpr auto UpdateLegsBeforeRender = 0xA6FA00;
		constexpr auto UpdateLegsDisable_bool = 0xA708F0;
		constexpr auto AddLegRenderer_SkinnedMeshRenderer_PaintableItem = 0xA64840;
		constexpr auto SwapLegBone_Transform = 0xA6EBE0;
		constexpr auto GetFlat_Vector3 = 0xA69100;
		constexpr auto RebuildAll = 0xA6C5C0;
		constexpr auto get_overrideSkinSeed = 0xA73E40;
		constexpr auto set_overrideSkinSeed_ulong = 0xA73E80;
		constexpr auto get_IsFemale = 0xA73A90;
		constexpr auto get_SkinSet = 0xA73C40;
		constexpr auto get_AimAngles = 0xA73940;
		constexpr auto set_AimAngles_Quaternion = 0xA73E50;
		constexpr auto get_LookAngles = 0xA73AD0;
		constexpr auto set_LookAngles_Quaternion = 0xA73E70;
		constexpr auto get_GestureAllowsSpineMovement = 0xA739F0;
		constexpr auto get_GestureAllowsRootMotion = 0xA73950;
		constexpr auto get_IsFirstPerson = 0xA73AA0;
		constexpr auto get_IsNpc = 0xA73AC0;
		constexpr auto set_IsNpc_bool = 0xA73E60;
		constexpr auto get_multiMesh = 0xA73DA0;
		constexpr auto get_animator = 0xA73C60;
		constexpr auto get_lodGroup = 0xA73D00;
		constexpr auto GetTargetVelocity = 0xA69B30;
		constexpr auto Awake = 0xA65270;
		constexpr auto OnEnable = 0xA6BAA0;
		constexpr auto OnDisable = 0xA6B7B0;
		constexpr auto SetDefaultAnimatorWeights = 0xA6D6E0;
		constexpr auto UpdateMultiMesh_bool = 0xA70F90;
		constexpr auto UpdateCensorship = 0xA6F120;
		constexpr auto UpdateCollider_bool_bool_bool_bool_bool = 0xA6F5A0;
		constexpr auto UpdateModelState_ModelState = 0xA70F40;
		constexpr auto UpdatePosition = 0xA71A00;
		constexpr auto UpdateRotation = 0xA71B20;
		constexpr auto UpdateLocalVelocity_Vector3_Transform = 0xA70E70;
		constexpr auto UpdateVelocity = 0xA724A0;
		constexpr auto UpdateParameters = 0xA71120;
		constexpr auto UpdateFrom_PlayerModel = 0xA6F810;
		constexpr auto UpdateGlobalShaderConstants = 0xA6F870;
		constexpr auto LateCycle = 0xA6B000;
		constexpr auto FrameUpdate = 0xA68710;
		constexpr auto FrameUpdate_Default = 0xA67D30;
		constexpr auto FrameUpdate_Sleeping = 0xA68440;
		constexpr auto FrameUpdate_Incapacitated = 0xA67EA0;
		constexpr auto FrameUpdate_OnLadder = 0xA68170;
		constexpr auto GetAim360 = 0xA68E90;
		constexpr auto UpdateVehicleAim360 = 0xA71FB0;
		constexpr auto ResetCurrentState_int = 0xA6D590;
		constexpr auto DoAimingSounds_float_float = 0xA65C40;
		constexpr auto SetAimSounds_SoundDefinition_SoundDefinition = 0xA6D6A0;
		constexpr auto SetMountedLookAtWeight_float = 0xA6DDE0;
		constexpr auto SetMountedAnimationSpeed_float = 0xA6DDC0;
		constexpr auto UpdateLocalPlayerPosition_Vector3_Quaternion = 0xA70B20;
		constexpr auto Attack = 0xA651F0;
		constexpr auto AltAttack = 0xA64EB0;
		constexpr auto Deploy = 0xA65B90;
		constexpr auto Reload = 0xA6D310;
		constexpr auto Holster = 0xA6A7A0;
		constexpr auto Flinch_uint = 0xA66440;
		constexpr auto Flinch = 0xA66470;
		constexpr auto SetReactionAnim_PlayerModel_ReactionDir_float = 0xA6DDF0;
		constexpr auto OnReactionEnded = 0xA6BFE0;
		constexpr auto Throw = 0xA6EF10;
		constexpr auto Gesture_string_GestureConfig = 0xA68B00;
		constexpr auto FadeInGestureUpperBodyLayer = 0xA65EA0;
		constexpr auto FadeOutGestureUpperBodyLayer = 0xA66190;
		constexpr auto FadeInGestureFullBodyLayer = 0xA65D80;
		constexpr auto FadeOutGestureFullBodyLayer = 0xA65FC0;
		constexpr auto AnimatorWarmup = 0xA64F60;
		constexpr auto AlwaysAnimate_bool = 0xA64F30;
		constexpr auto SetHoldType_RuntimeAnimatorController_bool = 0xA6DA40;
		constexpr auto FadeOutGestureLayer = 0xA66120;
		constexpr auto SetGesture = 0xA6D7F0;
		constexpr auto FadeOutPlayerGestureLayers = 0xA662F0;
		constexpr auto StopGesture = 0xA6EAE0;
		constexpr auto PlayCinematic_string_float = 0xA6C430;
		constexpr auto StopCinematic = 0xA6EA80;
		constexpr auto SetSpeedOverride_Vector3 = 0xA6E1D0;
		constexpr auto GetReplacementUnderwear = 0xA69A70;
		constexpr auto RemoveUnderwearParts_SkinReplacement_SkinType = 0xA6D460;
		constexpr auto Clear = 0xA65470;
		constexpr auto Rebuild_bool = 0xA6CD80;
		constexpr auto AddPart_string_Item = 0xA64BD0;
		constexpr auto RemovePart_string = 0xA6D390;
		constexpr auto HasPart_string = 0xA6A030;
		constexpr auto IsBarefoot = 0xA6AF70;
		constexpr auto GetSkinColor = 0xA69AB0;
		constexpr auto SetSkinProperties_MaterialPropertyBlock = 0xA6E0B0;
		constexpr auto RefreshUnderwear = 0xA6CF80;
		constexpr auto ForceModelSeed_ulong = 0xA67B00;
		constexpr auto ForceModelSeed_ulong_bool = 0xA67C10;
		constexpr auto FindBone_string = 0xA66410;
		constexpr auto GetBones = 0xA690D0;
		constexpr auto GetFootPlacement_Vector3_Vector3 = 0xA69140;
		constexpr auto ApplyVisibility_bool_bool_bool = 0xA64FC0;
		constexpr auto ToggleUpdateOffscreen_bool = 0xA6EFB0;
		constexpr auto OnParentDestroying = 0xA6BEE0;
		constexpr auto WorkshopPreviewSetup_GameObjectarray = 0xA728B0;
		constexpr auto _ctor = 0xA73790;
		constexpr auto _cctor = 0xA73250;
	}

	namespace LocalPlayer {
		// Class
		constexpr auto LocalPlayer_TypeInfo = 0x31D4390;

		// Static Offsets
		constexpr auto Entityk__BackingField = 0x0;
		constexpr auto LastAttackerSteamIDk__BackingField = 0x8;
		constexpr auto LastAttackerNamek__BackingField = 0x10;
		constexpr auto LastDeathTime = 0x18;
		constexpr auto CurrentPetCommandDesc = 0x20;
		constexpr auto CraftCounts = 0x50;
		constexpr auto ItemBluePrintOrdered = 0x58;

		// Methods
		constexpr auto get_Entity = 0x5699C0;
		constexpr auto set_Entity_BasePlayer = 0x56A3F0;
		constexpr auto get_LastAttackerSteamID = 0x569A80;
		constexpr auto set_LastAttackerSteamID_ulong = 0x56A4C0;
		constexpr auto get_LastAttackerName = 0x569A20;
		constexpr auto set_LastAttackerName_string = 0x56A450;
		constexpr auto get_TimeSinceLastDeath = 0x569FC0;
		constexpr auto EndLooting = 0x567B10;
		constexpr auto GetContainer_PlayerInventory_Type = 0x567F80;
		constexpr auto GetLootContainer_int = 0x568620;
		constexpr auto OnInventoryChanged = 0x5695B0;
		constexpr auto OnItemAmountChanged = 0x569750;
		constexpr auto HasUnlocked_ItemDefinition = 0x568E30;
		constexpr auto GetCraftLevel = 0x568190;
		constexpr auto HasCraftLevel_int = 0x568850;
		constexpr auto MoveItem_uint_uint_int_int = 0x569430;
		constexpr auto DropItemStack_uint = 0x5678C0;
		constexpr auto DropItem_uint_int = 0x567AA0;
		constexpr auto ItemCommand_uint_string = 0x568F80;
		constexpr auto get_isSleeping = 0x56A2B0;
		constexpr auto get_isAdmin = 0x56A030;
		constexpr auto get_isDeveloper = 0x56A170;
		constexpr auto FindAmmo_List_Item__AmmoTypes = 0x567E00;
		constexpr auto ModifyCamera = 0x5692C0;
		constexpr auto HasItems_List_ItemAmount__int = 0x568BE0;
		constexpr auto GetItemAmount_ItemDefinition = 0x568400;
		constexpr auto BuildItemRequiredString_List_ItemAmount_ = 0x567200;
		constexpr auto HasInventoryItem_int = 0x5688B0;
		constexpr auto ResetCraftCounts = 0x5697A0;
		constexpr auto ListCraftCounts = 0x569120;
		constexpr auto GetCraftCount_ItemBlueprint = 0x568030;
		constexpr auto AddCraftCount_ItemBlueprint = 0x567120;
		constexpr auto get_LocalOrSpectatePlayer = 0x569AE0;
		constexpr auto get_SpectatePlayer = 0x569C00;
		constexpr auto _cctor = 0x569910;
	}

	namespace BaseMovement {
		// Offsets
		constexpr auto adminCheat = 0x18;
		constexpr auto adminSpeed = 0x1C;
		constexpr auto Ownerk__BackingField = 0x20;
		constexpr auto InheritedVelocityk__BackingField = 0x28;
		constexpr auto TargetMovementk__BackingField = 0x34;
		constexpr auto Runningk__BackingField = 0x40;
		constexpr auto Duckingk__BackingField = 0x44;
		constexpr auto Crawlingk__BackingField = 0x48;
		constexpr auto Groundedk__BackingField = 0x4C;
		constexpr auto lastTeleportedTime = 0x50;

		// Methods
		constexpr auto get_Owner = 0x2FF400;
		constexpr auto set_Owner_BasePlayer = 0x2FF2B0;
		constexpr auto get_InheritedVelocity = 0x2FF3A0;
		constexpr auto set_InheritedVelocity_Vector3 = 0x2FF4A0;
		constexpr auto get_TargetMovement = 0x2FF450;
		constexpr auto set_TargetMovement_Vector3 = 0x2FF4C0;
		constexpr auto get_Running = 0x2FF440;
		constexpr auto set_Running_float = 0x2FF4B0;
		constexpr auto get_Ducking = 0x2FF380;
		constexpr auto set_Ducking_float = 0x2FF480;
		constexpr auto get_Crawling = 0x2FF370;
		constexpr auto set_Crawling_float = 0x2FF470;
		constexpr auto get_Grounded = 0x2FF390;
		constexpr auto set_Grounded_float = 0x2FF490;
		constexpr auto get_IsRunning = 0x2FF3F0;
		constexpr auto get_IsDucked = 0x2FF3D0;
		constexpr auto get_IsCrawling = 0x2FF3C0;
		constexpr auto get_IsGrounded = 0x2FF3E0;
		constexpr auto CurrentVelocity = 0x2FEFE0;
		constexpr auto CurrentMoveSpeed = 0x2FD130;
		constexpr auto GetCollider = 0x2FCD80;
		constexpr auto Init_BasePlayer = 0x2FF2B0;
		constexpr auto BlockJump_float = 0x2F5370;
		constexpr auto BlockSprint_float = 0x2F5370;
		constexpr auto get_RecentlyTeleported = 0x2FF410;
		constexpr auto ClientInput_InputState_ModelState = 0x2F5370;
		constexpr auto DoFixedUpdate_ModelState = 0x2F5370;
		constexpr auto FrameUpdate_BasePlayer_ModelState = 0x2FF160;
		constexpr auto TeleportTo_Vector3_BasePlayer = 0x2FF2C0;
		constexpr auto Push_Vector3 = 0x2F5370;
		constexpr auto SetParent_Transform = 0x2F5370;
		constexpr auto FixedUpdate = 0x2FF050;
		constexpr auto PlayerAttemptedMount = 0x2F5370;
		constexpr auto PlayerCompletedMount = 0x2F5370;
		constexpr auto _ctor = 0x2FF360;
	}

	namespace PlayerWalkMovement {
		// Offsets
		constexpr auto zeroFrictionMaterial = 0x58;
		constexpr auto highFrictionMaterial = 0x60;
		constexpr auto capsuleHeight = 0x68;
		constexpr auto capsuleCenter = 0x6C;
		constexpr auto capsuleHeightDucked = 0x70;
		constexpr auto capsuleCenterDucked = 0x74;
		constexpr auto capsuleHeightCrawling = 0x78;
		constexpr auto capsuleCenterCrawling = 0x7C;
		constexpr auto gravityTestRadius = 0x80;
		constexpr auto gravityMultiplier = 0x84;
		constexpr auto gravityMultiplierSwimming = 0x88;
		constexpr auto maxAngleWalking = 0x8C;
		constexpr auto maxAngleClimbing = 0x90;
		constexpr auto maxAngleSliding = 0x94;
		constexpr auto maxStepHeight = 0x98;
		constexpr auto body = 0xA0;
		constexpr auto initialColDetectionMode = 0xA8;
		constexpr auto capsule = 0xB0;
		constexpr auto ladder = 0xB8;
		constexpr auto maxVelocity = 0xC0;
		constexpr auto groundAngle = 0xC4;
		constexpr auto groundAngleNew = 0xC8;
		constexpr auto groundTime = 0xCC;
		constexpr auto jumpTime = 0xD0;
		constexpr auto landTime = 0xD4;
		constexpr auto previousPosition = 0xD8;
		constexpr auto previousVelocity = 0xE4;
		constexpr auto previousInheritedVelocity = 0xF0;
		constexpr auto groundNormal = 0xFC;
		constexpr auto groundNormalNew = 0x108;
		constexpr auto groundVelocity = 0x114;
		constexpr auto groundVelocityNew = 0x120;
		constexpr auto nextSprintTime = 0x12C;
		constexpr auto lastSprintTime = 0x130;
		constexpr auto sprintForced = 0x134;
		constexpr auto attemptedMountTime = 0x138;
		constexpr auto modify = 0x13C;
		constexpr auto grounded = 0x140;
		constexpr auto climbing = 0x141;
		constexpr auto sliding = 0x142;
		constexpr auto swimming = 0x143;
		constexpr auto wasSwimming = 0x144;
		constexpr auto jumping = 0x145;
		constexpr auto wasJumping = 0x146;
		constexpr auto falling = 0x147;
		constexpr auto wasFalling = 0x148;
		constexpr auto flying = 0x149;
		constexpr auto wasFlying = 0x14A;
		constexpr auto forcedDuckDelta = 0x14C;

		// Methods
		constexpr auto Awake = 0x96A990;
		constexpr auto GetCollider = 0x2FF650;
		constexpr auto OnDisable = 0x96F870;
		constexpr auto Init_BasePlayer = 0x96D0A0;
		constexpr auto OnCollisionEnter_Collision = 0x96F6B0;
		constexpr auto OnCollisionStay_Collision = 0x96F790;
		constexpr auto GroundCheck_Collision = 0x96C860;
		constexpr auto TeleportTo_Vector3_BasePlayer = 0x96FF20;
		constexpr auto UpdateCurrentLadder_InputState_bool = 0x970250;
		constexpr auto WantsSprint_InputState = 0x9712C0;
		constexpr auto ClientInput_InputState_ModelState = 0x96AC80;
		constexpr auto Movement_Water_InputState_ModelState = 0x96EB00;
		constexpr auto Movement_Mounted_InputState_ModelState = 0x96DBE0;
		constexpr auto Movement_Ladder_InputState_ModelState = 0x96D590;
		constexpr auto Movement_Noclip_InputState_ModelState = 0x96DCF0;
		constexpr auto Movement_Walking_InputState_ModelState = 0x96E280;
		constexpr auto GetHeldEntityMovementMultiplier = 0x96C7B0;
		constexpr auto HandleGrounded_ModelState_bool = 0x96CB30;
		constexpr auto HandleRunDuckCrawl_ModelState_bool_bool_bool = 0x96CCB0;
		constexpr auto GetForcedDuck = 0x96C6C0;
		constexpr auto HandleJumping_ModelState_bool_bool = 0x96CB80;
		constexpr auto CanJump = 0x96AB00;
		constexpr auto BlockJump_float = 0x96AA70;
		constexpr auto BlockSprint_float = 0x96AAB0;
		constexpr auto SetKinematic_bool = 0x96FCF0;
		constexpr auto ApplyForce_Vector3 = 0x96A950;
		constexpr auto CanSprint = 0x96AC10;
		constexpr auto Jump_ModelState_bool = 0x96D270;
		constexpr auto DoFixedUpdate_ModelState = 0x96B030;
		constexpr auto DoStepUp = 0x96B850;
		constexpr auto UpdateVelocity = 0x970770;
		constexpr auto UpdateGravity_ModelState = 0x970420;
		constexpr auto FrameUpdate_BasePlayer_ModelState = 0x96C220;
		constexpr auto TransformState_Matrix4x4 = 0x970040;
		constexpr auto SetParent_Transform = 0x96FD20;
		constexpr auto FallVelocity = 0x96C170;
		constexpr auto CurrentVelocity = 0x96AFF0;
		constexpr auto CurrentMoveSpeed = 0x96AFA0;
		constexpr auto PlayerAttemptedMount = 0x96FC90;
		constexpr auto PlayerCompletedMount = 0x96FCC0;
		constexpr auto _ctor = 0x971350;
	}

	namespace HitTest {
		// Class
		constexpr auto HitTest_TypeInfo = 0x31D14D0;

		// Offsets
		constexpr auto type = 0x10;
		constexpr auto AttackRay = 0x14;
		constexpr auto Radius = 0x2C;
		constexpr auto Forgiveness = 0x30;
		constexpr auto MaxDistance = 0x34;
		constexpr auto RayHit = 0x38;
		constexpr auto MultiHit = 0x64;
		constexpr auto BestHit = 0x65;
		constexpr auto DidHit = 0x66;
		constexpr auto damageProperties = 0x68;
		constexpr auto gameObject = 0x70;
		constexpr auto collider = 0x78;
		constexpr auto ignoreEntity = 0x80;
		constexpr auto HitEntity = 0x88;
		constexpr auto HitPoint = 0x90;
		constexpr auto HitNormal = 0x9C;
		constexpr auto HitDistance = 0xA8;
		constexpr auto HitTransform = 0xB0;
		constexpr auto HitPart = 0xB8;
		constexpr auto HitMaterial = 0xC0;

		// Methods
		constexpr auto HitPointWorld = 0x6B4DB0;
		constexpr auto HitNormalWorld = 0x6B4C90;
		constexpr auto BuildAttackMessage = 0x6B4400;
		constexpr auto Clear = 0x6B4BB0;
		constexpr auto _ctor = 0x3049C0;
	}

	namespace HitInfo {
		// Class
		constexpr auto HitInfo_TypeInfo = 0x31D1508;

		// Offsets
		constexpr auto Initiator = 0x10;
		constexpr auto WeaponPrefab = 0x18;
		constexpr auto Weapon = 0x20;
		constexpr auto DoHitEffects = 0x28;
		constexpr auto DoDecals = 0x29;
		constexpr auto IsPredicting = 0x2A;
		constexpr auto UseProtection = 0x2B;
		constexpr auto Predicted = 0x30;
		constexpr auto DidHit = 0x38;
		constexpr auto HitEntity = 0x40;
		constexpr auto HitBone = 0x48;
		constexpr auto HitPart = 0x4C;
		constexpr auto HitMaterial = 0x50;
		constexpr auto HitPositionWorld = 0x54;
		constexpr auto HitPositionLocal = 0x60;
		constexpr auto HitNormalWorld = 0x6C;
		constexpr auto HitNormalLocal = 0x78;
		constexpr auto PointStart = 0x84;
		constexpr auto PointEnd = 0x90;
		constexpr auto ProjectileID = 0x9C;
		constexpr auto ProjectileHits = 0xA0;
		constexpr auto ProjectileDistance = 0xA4;
		constexpr auto ProjectileIntegrity = 0xA8;
		constexpr auto ProjectileTravelTime = 0xAC;
		constexpr auto ProjectileTrajectoryMismatch = 0xB0;
		constexpr auto ProjectileVelocity = 0xB4;
		constexpr auto ProjectilePrefab = 0xC0;
		constexpr auto material = 0xC8;
		constexpr auto damageProperties = 0xD0;
		constexpr auto damageTypes = 0xD8;
		constexpr auto CanGather = 0xE0;
		constexpr auto DidGather = 0xE1;
		constexpr auto gatherScale = 0xE4;

		// Methods
		constexpr auto IsProjectile = 0x6B33D0;
		constexpr auto get_InitiatorPlayer = 0x6B3C20;
		constexpr auto get_attackNormal = 0x6B3CB0;
		constexpr auto get_hasDamage = 0x6B41B0;
		constexpr auto _ctor = 0x6B3A40;
		constexpr auto _ctor_BaseEntity_BaseEntity_DamageType_float_Vector3 = 0x6B3AC0;
		constexpr auto _ctor_BaseEntity_BaseEntity_DamageType_float = 0x6B3890;
		constexpr auto LoadFromAttack_Attack_bool = 0x6B33E0;
		constexpr auto get_isHeadshot = 0x6B41E0;
		constexpr auto get_bonePhrase = 0x6B4050;
		constexpr auto get_boneName = 0x6B3EC0;
		constexpr auto get_boneArea = 0x6B3DB0;
		constexpr auto PositionOnRay_Vector3 = 0x6B35E0;
		constexpr auto HitPositionOnRay = 0x6B31A0;
		constexpr auto IsNaNOrInfinity = 0x6B31F0;
	}

	namespace WaterLevel {
		// Methods
		constexpr auto Factor_Vector3_Vector3_float_BaseEntity = 0xA45D20;
		constexpr auto Factor_Bounds_BaseEntity = 0xA45AA0;
		constexpr auto Test_Vector3_bool_BaseEntity = 0xA48070;
		constexpr auto GetWaterDepth_Vector3_bool_BaseEntity = 0xA46640;
		constexpr auto GetOverallWaterDepth_Vector3_bool_BaseEntity_bool = 0xA464F0;
		constexpr auto GetBuoyancyWaterInfo_Vector3_Vector2_float_float_bool_BaseEntity = 0xA45F00;
		constexpr auto GetWaterInfo_Vector3_bool_BaseEntity_bool = 0xA469D0;
		constexpr auto GetWaterInfo_Bounds_BaseEntity_bool = 0xA470C0;
		constexpr auto GetWaterInfo_Vector3_Vector3_float_BaseEntity_bool = 0xA477A0;
		constexpr auto GetWaterInfoFromVolumes_Bounds_BaseEntity = 0xA46780;
		constexpr auto GetWaterInfoFromVolumes_Vector3_BaseEntity = 0xA46830;
		constexpr auto GetWaterInfoFromVolumes_Vector3_Vector3_float_BaseEntity = 0xA468E0;
	}

	namespace InputState {
		// Class
		constexpr auto InputState_TypeInfo = 0x31D0038;

		// Offsets
		constexpr auto current = 0x10;
		constexpr auto previous = 0x18;
		constexpr auto SwallowedButtons = 0x20;

		// Methods
		constexpr auto IsDown_BUTTON = 0xA02500;
		constexpr auto WasDown_BUTTON = 0xA025D0;
		constexpr auto IsAnyDown = 0xA024D0;
		constexpr auto WasJustPressed_BUTTON = 0xA025F0;
		constexpr auto WasJustReleased_BUTTON = 0xA02630;
		constexpr auto SwallowButton_BUTTON = 0xA025C0;
		constexpr auto AimAngle = 0xA02310;
		constexpr auto MouseDelta = 0xA02530;
		constexpr auto Flip_InputMessage = 0xA02400;
		constexpr auto Clear = 0xA023D0;
		constexpr auto _ctor = 0xA02670;
	}

	namespace Item {
		// Class
		constexpr auto Item_TypeInfo = 0x31C21B8;

		// Offsets
		constexpr auto amountOverride = 0x10;
		constexpr auto _condition = 0x18;
		constexpr auto _maxCondition = 0x1C;
		constexpr auto info = 0x20;
		constexpr auto uid = 0x28;
		constexpr auto dirty = 0x2C;
		constexpr auto amount = 0x30;
		constexpr auto position = 0x34;
		constexpr auto busyTime = 0x38;
		constexpr auto removeTime = 0x3C;
		constexpr auto fuel = 0x40;
		constexpr auto isServer = 0x44;
		constexpr auto instanceData = 0x48;
		constexpr auto skin = 0x50;
		constexpr auto name = 0x58;
		constexpr auto text = 0x60;
		constexpr auto OnDirty = 0x68;
		constexpr auto flags = 0x70;
		constexpr auto contents = 0x78;
		constexpr auto parent = 0x80;
		constexpr auto worldEnt = 0x88;
		constexpr auto heldEntity = 0x98;

		// Static Offsets
		constexpr auto FormatAmountMemoized = 0x0;
		constexpr auto DefaultArmourBreakEffectPath = 0x8;

		// Methods
		constexpr auto UpdateAmountDisplay_Text = 0xA16E40;
		constexpr auto UpdateAmountDisplay_Text_Item_Nullable_int__ItemDefinition = 0xA16EC0;
		constexpr auto FormatAmount_ItemDefinition_AmountType_int = 0xA158F0;
		constexpr auto set_condition_float = 0xA17E10;
		constexpr auto get_condition = 0x7F0010;
		constexpr auto set_maxCondition_float = 0xA17E90;
		constexpr auto get_maxCondition = 0x7EFFE0;
		constexpr auto get_maxConditionNormalized = 0xA17BC0;
		constexpr auto get_conditionNormalized = 0xA17750;
		constexpr auto set_conditionNormalized_float = 0xA17D70;
		constexpr auto get_hasCondition = 0xA17850;
		constexpr auto get_isBroken = 0xA17A90;
		constexpr auto get_despawnMultiplier = 0xA17790;
		constexpr auto get_blueprintTargetDef = 0xA17720;
		constexpr auto get_blueprintTarget = 0xA17740;
		constexpr auto set_blueprintTarget_int = 0xA17CE0;
		constexpr auto get_blueprintAmount = 0xA17710;
		constexpr auto set_blueprintAmount_int = 0xA17CD0;
		constexpr auto IsBlueprint = 0xA15E30;
		constexpr auto add_OnDirty_Action_Item_ = 0xA17650;
		constexpr auto remove_OnDirty_Action_Item_ = 0xA17C30;
		constexpr auto HasFlag_Item_Flag = 0xA15E20;
		constexpr auto SetFlag_Item_Flag_bool = 0xA16940;
		constexpr auto IsOn = 0xA16060;
		constexpr auto IsOnFire = 0xA16050;
		constexpr auto IsCooking = 0xA16010;
		constexpr auto IsLocked = 0xA16020;
		constexpr auto get_parentItem = 0xA17BF0;
		constexpr auto MarkDirty = 0xA16490;
		constexpr auto OnChanged = 0xA16580;
		constexpr auto CollectedForCrafting_BasePlayer = 0x2F5370;
		constexpr auto ReturnedFromCancelledCraft_BasePlayer = 0x2F5370;
		constexpr auto IsChildContainer_ItemContainer = 0xA15E80;
		constexpr auto IsBusy = 0xA15E50;
		constexpr auto BusyFor_float = 0xA153A0;
		constexpr auto Remove_float = 0xA16730;
		constexpr auto DoRemove = 0xA15650;
		constexpr auto SwitchOnOff_bool = 0xA16AD0;
		constexpr auto LockUnlock_bool = 0xA16410;
		constexpr auto get_temperature = 0xA17C10;
		constexpr auto GetOwnerPlayer = 0xA15C30;
		constexpr auto CanBeHeld = 0xA153D0;
		constexpr auto CanStack_Item = 0xA15410;
		constexpr auto IsValid = 0xA16070;
		constexpr auto SetWorldEntity_BaseEntity = 0xA16960;
		constexpr auto OnMovedToWorld = 0xA166A0;
		constexpr auto GetWorldEntity = 0xA15CE0;
		constexpr auto GetHeldEntity = 0xA15C10;
		constexpr auto BeltBarSelect_BasePlayer = 0xA15300;
		constexpr auto GetTotalUISlots = 0xA15C50;
		constexpr auto GetFilledUISlots = 0xA15B80;
		constexpr auto HasAmmo_AmmoTypes = 0xA15D00;
		constexpr auto FindAmmo_List_Item__AmmoTypes = 0xA156A0;
		constexpr auto GetAmmoAmount_AmmoTypes = 0xA15A50;
		constexpr auto ToString = 0xA16B50;
		constexpr auto FindItem_uint = 0xA157E0;
		constexpr auto MaxStackable = 0xA164F0;
		constexpr auto get_iconSprite = 0xA178F0;
		constexpr auto get_isLoadingIconSprite = 0xA17AC0;
		constexpr auto get_Traits = 0xA176F0;
		constexpr auto Save_bool_bool = 0xA16790;
		constexpr auto Load_Item = 0xA16080;
		constexpr auto _ctor = 0xA17630;
		constexpr auto _cctor = 0xA17540;
		constexpr auto _get_iconSprite_b__95_0_ItemSkinDirectory_Skin = 0xA16E30;
		constexpr auto _get_isLoadingIconSprite_b__97_0_ItemSkinDirectory_Skin = 0xA16E30;
	}

	namespace ItemContainer {
		// Class
		constexpr auto ItemContainer_TypeInfo = 0x31C2150;

		// Offsets
		constexpr auto flags = 0x10;
		constexpr auto allowedContents = 0x14;
		constexpr auto onlyAllowedItems = 0x18;
		constexpr auto availableSlots = 0x20;
		constexpr auto capacity = 0x28;
		constexpr auto uid = 0x2C;
		constexpr auto dirty = 0x30;
		constexpr auto itemList = 0x38;
		constexpr auto temperature = 0x40;
		constexpr auto parent = 0x48;
		constexpr auto playerOwner = 0x50;
		constexpr auto entityOwner = 0x58;
		constexpr auto isServer = 0x60;
		constexpr auto maxStackSize = 0x64;

		// Methods
		constexpr auto HasFlag_ItemContainer_Flag = 0xA12A50;
		constexpr auto SetFlag_ItemContainer_Flag_bool = 0xA13B00;
		constexpr auto IsLocked = 0xA12C20;
		constexpr auto PlayerItemInputBlocked = 0xA13740;
		constexpr auto get_HasLimitedAllowedItems = 0xA13E40;
		constexpr auto OnChanged = 0xA136A0;
		constexpr auto ClientInitialize_Item_int = 0xA11BB0;
		constexpr auto FindItemByUID_uint = 0xA12150;
		constexpr auto IsFull = 0xA12BD0;
		constexpr auto IsEmpty = 0xA12B90;
		constexpr auto CanAccept_Item = 0xA11A80;
		constexpr auto GetMaxTransferAmount_ItemDefinition = 0xA12700;
		constexpr auto SetOnlyAllowedItem_ItemDefinition = 0xA13B20;
		constexpr auto SetOnlyAllowedItems_ItemDefinitionarray = 0xA13BE0;
		constexpr auto Insert_Item = 0xA12A60;
		constexpr auto SlotTaken_Item_int = 0xA13D70;
		constexpr auto GetSlot_int = 0xA128B0;
		constexpr auto FindPosition_Item = 0xA12430;
		constexpr auto Clear = 0xA11AD0;
		constexpr auto Kill = 0xA12C30;
		constexpr auto GetAmount_int_bool = 0xA12580;
		constexpr auto FindItemByItemID_int = 0xA11FE0;
		constexpr auto FindItemsByItemName_string = 0xA122E0;
		constexpr auto FindBySubEntityID_uint = 0xA11D80;
		constexpr auto FindItemsByItemID_int = 0xA12230;
		constexpr auto Save = 0xA13750;
		constexpr auto Load_ItemContainer = 0xA12EF0;
		constexpr auto GetOwnerPlayer = 0x544B40;
		constexpr auto FindAmmo_List_Item__AmmoTypes = 0xA11CC0;
		constexpr auto HasAmmo_AmmoTypes = 0xA12980;
		constexpr auto GetAmmoAmount_AmmoTypes = 0xA124C0;
		constexpr auto ContentsHash = 0xA11BF0;
		constexpr auto FindContainer_uint = 0xA11EF0;
		constexpr auto CanAcceptItem_Item_int = 0xA11610;
		constexpr auto _ctor = 0xA13D90;
	}

	namespace ItemDefinition {
		// Offsets
		constexpr auto itemid = 0x18;
		constexpr auto shortname = 0x20;
		constexpr auto displayName = 0x28;
		constexpr auto displayDescription = 0x30;
		constexpr auto iconSprite = 0x38;
		constexpr auto category = 0x40;
		constexpr auto selectionPanel = 0x44;
		constexpr auto maxDraggable = 0x48;
		constexpr auto itemType = 0x4C;
		constexpr auto amountType = 0x50;
		constexpr auto occupySlots = 0x54;
		constexpr auto stackable = 0x58;
		constexpr auto quickDespawn = 0x5C;
		constexpr auto rarity = 0x60;
		constexpr auto spawnAsBlueprint = 0x64;
		constexpr auto inventorySelectSound = 0x68;
		constexpr auto inventoryGrabSound = 0x70;
		constexpr auto inventoryDropSound = 0x78;
		constexpr auto physImpactSoundDef = 0x80;
		constexpr auto condition = 0x88;
		constexpr auto hidden = 0xA0;
		constexpr auto flags = 0xA4;
		constexpr auto steamItem = 0xA8;
		constexpr auto steamDlc = 0xB0;
		constexpr auto Parent = 0xB8;
		constexpr auto worldModelPrefab = 0xC0;
		constexpr auto isRedirectOf = 0xC8;
		constexpr auto redirectVendingBehaviour = 0xD0;
		constexpr auto itemMods = 0xD8;
		constexpr auto Traits = 0xE0;
		constexpr auto skins = 0xE8;
		constexpr auto _skins2 = 0xF0;
		constexpr auto panel = 0xF8;
		constexpr auto ItemModWearablek__BackingField = 0x100;
		constexpr auto isHoldablek__BackingField = 0x108;
		constexpr auto isUsablek__BackingField = 0x109;
		constexpr auto CraftableWithSkink__BackingField = 0x10A;
		constexpr auto Children = 0x110;

		// Methods
		constexpr auto get_skins2 = 0xA15060;
		constexpr auto InvalidateWorkshopSkinCache = 0xA14DB0;
		constexpr auto get_Blueprint = 0xA14EC0;
		constexpr auto get_craftingStackable = 0xA14F80;
		constexpr auto HasFlag_ItemDefinition_Flag = 0xA14B30;
		constexpr auto Initialize_List_ItemDefinition_ = 0xA14B40;
		constexpr auto GetDisplayName_Item = 0xA14A30;
		constexpr auto GetDescriptionText_Item = 0xA14960;
		constexpr auto GetDescriptionText = 0xA149F0;
		constexpr auto FindIconSprite_int = 0xA14600;
		constexpr auto get_isWearable = 0xA15000;
		constexpr auto get_ItemModWearable = 0xA14F70;
		constexpr auto set_ItemModWearable_ItemModWearable = 0xA152D0;
		constexpr auto get_isHoldable = 0xA14FE0;
		constexpr auto set_isHoldable_bool = 0xA152E0;
		constexpr auto get_isUsable = 0xA14FF0;
		constexpr auto set_isUsable_bool = 0xA152F0;
		constexpr auto get_HasSkins = 0xA14F10;
		constexpr auto get_CraftableWithSkin = 0xA14F00;
		constexpr auto set_CraftableWithSkin_bool = 0xA152C0;
		constexpr auto _ctor = 0xA14E50;
		constexpr auto _Initialize_b__45_0_ItemDefinition = 0xA14DD0;
	}

	namespace ItemModProjectile {
		// Offsets
		constexpr auto projectileObject = 0x18;
		constexpr auto mods = 0x20;
		constexpr auto ammoType = 0x28;
		constexpr auto numProjectiles = 0x2C;
		constexpr auto projectileSpread = 0x30;
		constexpr auto projectileVelocity = 0x34;
		constexpr auto projectileVelocitySpread = 0x38;
		constexpr auto useCurve = 0x3C;
		constexpr auto spreadScalar = 0x40;
		constexpr auto attackEffectOverride = 0x48;
		constexpr auto barrelConditionLoss = 0x50;
		constexpr auto category = 0x58;

		// Methods
		constexpr auto GetRandomVelocity = 0x8127D0;
		constexpr auto GetSpreadScalar = 0x812810;
		constexpr auto GetIndexedSpreadScalar_int_int = 0x812740;
		constexpr auto GetAverageVelocity = 0x812730;
		constexpr auto GetMinVelocity = 0x8127C0;
		constexpr auto GetMaxVelocity = 0x8127B0;
		constexpr auto IsAmmo_AmmoTypes = 0x812870;
		constexpr auto ServerProjectileHit_HitInfo = 0x812880;
		constexpr auto _ctor = 0x812950;
	}

	namespace AssetNameCache {
		// Class
		constexpr auto AssetNameCache_TypeInfo = 0x31D30E0;

		// Static Offsets
		constexpr auto mixed = 0x0;
		constexpr auto lower = 0x8;
		constexpr auto upper = 0x10;

		// Methods
		constexpr auto LookupName_Object = 0x8C8BB0;
		constexpr auto LookupNameLower_Object = 0x8C88F0;
		constexpr auto LookupNameUpper_Object = 0x8C8A50;
		constexpr auto GetName_PhysicMaterial = 0x8C8830;
		constexpr auto GetNameLower_PhysicMaterial = 0x8C86B0;
		constexpr auto GetNameUpper_PhysicMaterial = 0x8C8770;
		constexpr auto GetName_Material = 0x8C8890;
		constexpr auto GetNameLower_Material = 0x8C8710;
		constexpr auto GetNameUpper_Material = 0x8C87D0;
		constexpr auto _cctor = 0x8C8CF0;
	}

	namespace RecoilProperties {
		// Offsets
		constexpr auto recoilYawMin = 0x18;
		constexpr auto recoilYawMax = 0x1C;
		constexpr auto recoilPitchMin = 0x20;
		constexpr auto recoilPitchMax = 0x24;
		constexpr auto timeToTakeMin = 0x28;
		constexpr auto timeToTakeMax = 0x2C;
		constexpr auto ADSScale = 0x30;
		constexpr auto movementPenalty = 0x34;
		constexpr auto clampPitch = 0x38;
		constexpr auto pitchCurve = 0x40;
		constexpr auto yawCurve = 0x48;
		constexpr auto useCurves = 0x50;
		constexpr auto shotsUntilMax = 0x54;

		// Methods
		constexpr auto _ctor = 0x94AC10;
	}

	namespace UnityEngine_DDraw {
		// Class
		constexpr auto UnityEngine_DDraw_TypeInfo = 0x31D31A0;

		// Offsets
		constexpr auto list = 0x18;

		// Static Offsets
		constexpr auto store = 0x0;
		constexpr auto singleton = 0x8;
		constexpr auto AutoYPosition = 0x10;
		constexpr auto LastAutoY = 0x14;
		constexpr auto lineMaterial = 0x18;
		constexpr auto _skin = 0x20;

		// Methods
		constexpr auto Get = 0x4FEBF0;
		constexpr auto Capsule_Vector3_Quaternion_float_float_Color_float_bool = 0x4FE840;
		constexpr auto Sphere_Vector3_float_Color_float_bool = 0x4FFF70;
		constexpr auto SphereGizmo_Vector3_float_Color_float_bool_bool = 0x4FFCC0;
		constexpr auto Line_Vector3_Vector3_Color_float_bool_bool = 0x4FEEC0;
		constexpr auto Line_Vector3_Vector3_float_Color_float_bool_bool = 0x4FF040;
		constexpr auto Arrow_Vector3_Vector3_float_Color_float = 0x4FDA10;
		constexpr auto ArrowPadded_Vector3_Vector3_float_float_Color_float = 0x4FD2C0;
		constexpr auto Arrow_Vector3_Vector3_float_float_Color_float = 0x4FD5C0;
		constexpr auto Bounds_Bounds_Color_float_bool_bool = 0x4FDC40;
		constexpr auto Bounds_Matrix4x4_Bounds_Color_float = 0x4FDEC0;
		constexpr auto Box_Vector3_float_Color_float_bool = 0x4FE190;
		constexpr auto Box_Vector3_Quaternion_Vector3_Color_float_bool = 0x4FE410;
		constexpr auto Box_Vector3 = 0x4FE5F0;
		constexpr auto Box_Matrix4x4_Color_float = 0x4FE6A0;
		constexpr auto Text_string_Vector3_Color_float = 0x500210;
		constexpr auto ScreenText_string_int_int_Color_float = 0x4FFB80;
		constexpr auto ScreenText_string_int_Color_float = 0x4FF900;
		constexpr auto Awake = 0x4FDBD0;
		constexpr auto OnPreRender = 0x4FF7F0;
		constexpr auto OnPostRender = 0x4FF4B0;
		constexpr auto OnGUI = 0x4FF2E0;
		constexpr auto CreateLineMaterial = 0x4FEA90;
		constexpr auto get_skin = 0x5003D0;
		constexpr auto _ctor = 0x500360;
		constexpr auto _cctor = 0x2F5370;
	}

	namespace UnityEngine_GameObjectEx {
		// Methods
		constexpr auto ToBaseEntity_GameObject = 0x10C35E0;
		constexpr auto ToBaseEntity_Collider = 0x10C38A0;
		constexpr auto ToBaseEntity_Transform = 0x10C3610;
		constexpr auto IsOnLayer_GameObject_Layer = 0x10C3490;
		constexpr auto IsOnLayer_GameObject_int = 0x10C3490;
		constexpr auto GetEntityFromRegistry_Transform = 0x10C3360;
		constexpr auto GetEntityFromComponent_Transform = 0x10C3260;
		constexpr auto SetHierarchyGroup_GameObject_string_bool_bool = 0x10C3520;
	}

	namespace Facepunch_GUI_Controls {
		// Class
		constexpr auto Facepunch_GUI_Controls_TypeInfo = 0x31C8E28;

		// Static Offsets
		constexpr auto labelWidth = 0x2DF88;

		// Methods
		constexpr auto FloatSlider_string_float_float_float_string = 0x916640;
		constexpr auto IntSlider_string_int_int_int_string = 0x916890;
		constexpr auto TextArea_string_string = 0x916AD0;
		constexpr auto Checkbox_string_bool = 0x9164F0;
		constexpr auto Button_string = 0x916480;
		constexpr auto _cctor = 0x916C10;
	}

}