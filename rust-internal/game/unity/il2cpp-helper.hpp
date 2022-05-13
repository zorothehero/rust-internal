#pragma once
namespace il2cpp
{
	const Il2CppClass* getClass(const char* name, const char* namespaze = "")
	{
		size_t assembly_count = 0;

		const Il2CppAssembly** assemblies = il2cpp_domain_get_assemblies(il2cpp_domain_get(), &assembly_count);
		for (int i = 0; i < assembly_count; i++)
		{
			const Il2CppImage* image = il2cpp_assembly_get_image(assemblies[i]);
			const Il2CppClass* klass = il2cpp_class_from_name(image, namespaze, name);
			if (!klass) continue;

			return klass;
		}

		return nullptr;
	}

	const MethodInfo* getMethod(const Il2CppClass* klass, const char* name, int argCount)
	{
		void* iterator = nullptr;

		while (const MethodInfo* meth = il2cpp_class_get_methods(klass, &iterator))
		{
			if (strcmp(meth->name, name) || meth->parameters_count != argCount) continue;

			return meth;
		}

		return nullptr;
	}
}