# testlint

1.tt.cpp  是被检测的目标代码

2.CMakeLists.txt是tt.cpp对应的cmake文件，主要用来描述头文件路径。(其他机器使用CMakeLists.txt可能需要改一下系统的头文件路径)

3.cmk.sh和tidy.sh是两个脚本文件  
cmk.sh 用来执行cmake生成compile_commands.json文件.  
tidy.sh 用来执行clang-tidy检测，命令参数太长了懒得输入。(其他机器使用tidy.sh需要改一下clang-tidy 的文件路径)

4.Check_namespace_nameCheck.cpp和Check_namespace_nameCheck.h  
这两个是自己写的check代码  

5.clang-format和 .clang-format 分别是10.0.0版本的format和style文件。  

6.pre-commit 是git hook 的脚本文件(其他机器使用pre-commit需要改一下clang-tidy 的文件路径)
