# Qt-CPPDLL
vs项目分模块编译 dll+exe


注意事项：
1.最好把几个模块生成的dll啊  exe 啊，中间件什么的都放在一个目录下面，好找(就改生成目录什么的)
2.库目录，包含目录记得加上(还有一个引用目录，是干嘛的呢  不懂，感觉跟包含很像啊)
3.dll项目可以直接选择dll项目新建，也可以新建空项目，然后生成目标改成dll
4.生成的exe文件在本地打不开是因为没有配置Qt环境的原因，（说什么找不到Qtxxx.dll，）搞一下环境就好了 例如：D:\Qt\Qt5.1.1\5.1.1\msvc2010\bin;D:\Qt\Qt5.1.1\Tools\QtCreator\bin
5.同理，如果把程序给别人用因为有Qt的，需要把Qt环境也打包给别人（网上搜一下Qt程序打包）
