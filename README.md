# UnityOpenGLRender
Using OpenGL native plugin in unity to render some objects.
在Unity当中，有时我们有些渲染需求，可能直接在Unity里不太好实现，比如想要改变shader中vertex 函数的入口参数appdata，向里面添加一些新的变量。
此时我们就可以用OpenGL或者DX来做这个渲染的事情，然后通过Unity将mesh信息传入到plugins里面。
这里有待解决的几个问题有：
1、这样渲染的物体是否能跟Unity的渲染结合，即它是单独渲染的，还是可以在深度检测时会与Unity一致；
2、目前测得在Scene视图是看不见这个渲染的结果的，必须在Game视图。
