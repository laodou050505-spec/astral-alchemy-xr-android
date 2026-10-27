# Astral Alchemy XR — Android Gradle 工程（Unity 导出）

本仓库是 Unity 工程用 Export Project 在本地导出的 Android Gradle 工程，供云端打包使用。

- Unity 6000.5.5f1，脚本后端 IL2CPP
- 目标架构只有 arm64-v8a，不导出调试符号（debugSymbolLevel none）
- compileSdk / targetSdk 36，minSdk 29
- 包名 `com.astralworkshop.alchemyxr.en`，版本 1.0

构建：`gradle assembleRelease`，产物在 `launcher/build/outputs/apk/release/`。
`local.properties` 未提交，请按构建环境设置 Android SDK 路径。
