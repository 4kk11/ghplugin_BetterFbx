#pragma once
#include <fbxsdk.h>


extern "C"
{
    __declspec(dllexport) void CreateManager();
    __declspec(dllexport) void DeleteManager();
    __declspec(dllexport) void ExportFBX(bool isAscii, int axisSelect, const wchar_t* path);
    __declspec(dllexport) void CreateNode(const CRhinoObject* rhinoObject);

    //<FbxNodeComponent>
    __declspec(dllexport) FbxNode* FbxNode_New(const wchar_t* name);
    __declspec(dllexport) void FbxNode_Delete(FbxNode* pFbxNode);
    __declspec(dllexport) void FbxNode_AddChild(FbxNode* pFbxNode_parent, FbxNode* pFbxNode_child);
    __declspec(dllexport) void FbxNode_SetAttribute(FbxNode* pFbxNode, FbxNodeAttribute* pFbxNodeAttr);
    //</FbxNodeComponent>

    //<FbxNodeAttributeComponent>
    __declspec(dllexport) FbxMesh* FbxMesh_New(const ON_Mesh* pRhinoMesh);
    __declspec(dllexport) void FbxNodeAttribute_Delete(FbxNodeAttribute* pFbxNodeAttr);
    //</FbxNodeAttributeComponent>
}

