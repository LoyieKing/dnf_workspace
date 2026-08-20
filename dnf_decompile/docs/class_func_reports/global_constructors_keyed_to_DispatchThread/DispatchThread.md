# DispatchThread

`_GLOBAL__I__ZN14DispatchThreadC2Ev`

`global constructors keyed to DispatchThread::DispatchThread()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to DispatchThread` | `0x0847e840` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0847e840  _GLOBAL__I__ZN14DispatchThreadC2Ev
#           global constructors keyed to DispatchThread::DispatchThread()
# range [0x0847e840, 0x0847e983]
0847e840 +0x000:  push   %ebp
0847e841 +0x001:  mov    %esp,%ebp
0847e843 +0x003:  sub    $0x18,%esp
0847e846 +0x006:  movl   $0xffff,0x4(%esp)
0847e84e +0x00e:  movl   $0x1,(%esp)
0847e855 +0x015:  call   0847e800 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0847e85a +0x01a:  leave
0847e85b +0x01b:  ret
0847e85c +0x01c:  push   %ebp
0847e85d +0x01d:  mov    %esp,%ebp
0847e85f +0x01f:  mov    0x8(%ebp),%eax
0847e862 +0x022:  movl   $0x0,(%eax)
0847e868 +0x028:  mov    0x8(%ebp),%eax
0847e86b +0x02b:  movl   $0x0,0x4(%eax)
0847e872 +0x032:  mov    0x8(%ebp),%eax
0847e875 +0x035:  movl   $0x75,0x8(%eax)
0847e87c +0x03c:  mov    0x8(%ebp),%eax
0847e87f +0x03f:  movl   $0x0,0xc(%eax)
0847e886 +0x046:  movl   $0x0,0x10(%eax)
0847e88d +0x04d:  mov    0x8(%ebp),%eax
0847e890 +0x050:  movl   $0x0,0x14(%eax)
0847e897 +0x057:  mov    0x8(%ebp),%eax
0847e89a +0x05a:  movl   $0x0,0x18(%eax)
0847e8a1 +0x061:  pop    %ebp
0847e8a2 +0x062:  ret
0847e8a3 +0x063:  nop
0847e8a4 +0x064:  push   %ebp
0847e8a5 +0x065:  mov    %esp,%ebp
0847e8a7 +0x067:  sub    $0x18,%esp
0847e8aa +0x06a:  mov    0x8(%ebp),%eax
0847e8ad +0x06d:  mov    %eax,(%esp)
0847e8b0 +0x070:  call   0847e92a <+0xea>
0847e8b5 +0x075:  leave
0847e8b6 +0x076:  ret
0847e8b7 +0x077:  push   %ebp
0847e8b8 +0x078:  mov    %esp,%ebp
0847e8ba +0x07a:  sub    $0x8,%esp
0847e8bd +0x07d:  call   0847e93d <+0xfd>
0847e8c2 +0x082:  leave
0847e8c3 +0x083:  ret
0847e8c4 +0x084:  push   %ebp
0847e8c5 +0x085:  mov    %esp,%ebp
0847e8c7 +0x087:  sub    $0x8,%esp
0847e8ca +0x08a:  call   0847e94f <+0x10f>
0847e8cf +0x08f:  leave
0847e8d0 +0x090:  ret
0847e8d1 +0x091:  nop
0847e8d2 +0x092:  push   %ebp
0847e8d3 +0x093:  mov    %esp,%ebp
0847e8d5 +0x095:  sub    $0x18,%esp
0847e8d8 +0x098:  mov    0x8(%ebp),%eax
0847e8db +0x09b:  mov    %eax,(%esp)
0847e8de +0x09e:  call   084501c8 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dde>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dde
0847e8e3 +0x0a3:  mov    0x8(%ebp),%eax
0847e8e6 +0x0a6:  movl   $0x0,0x118(%eax)
0847e8f0 +0x0b0:  mov    0x8(%ebp),%eax
0847e8f3 +0x0b3:  lea    0x18(%eax),%edx
0847e8f6 +0x0b6:  mov    0x10(%ebp),%eax
0847e8f9 +0x0b9:  mov    %eax,0xc(%esp)
0847e8fd +0x0bd:  mov    0xc(%ebp),%eax
0847e900 +0x0c0:  mov    %eax,0x8(%esp)
0847e904 +0x0c4:  movl   $"./log/%s/%s",0x4(%esp)
0847e90c +0x0cc:  mov    %edx,(%esp)
0847e90f +0x0cf:  call   0807e440 <_init+0xd38>
0847e914 +0x0d4:  leave
0847e915 +0x0d5:  ret
0847e916 +0x0d6:  push   %ebp
0847e917 +0x0d7:  mov    %esp,%ebp
0847e919 +0x0d9:  sub    $0x18,%esp
0847e91c +0x0dc:  mov    0x8(%ebp),%eax
0847e91f +0x0df:  mov    %eax,(%esp)
0847e922 +0x0e2:  call   0844d4bc <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xd2>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xd2
0847e927 +0x0e7:  leave
0847e928 +0x0e8:  ret
0847e929 +0x0e9:  nop
0847e92a +0x0ea:  push   %ebp
0847e92b +0x0eb:  mov    %esp,%ebp
0847e92d +0x0ed:  sub    $0x18,%esp
0847e930 +0x0f0:  mov    0x8(%ebp),%eax
0847e933 +0x0f3:  mov    %eax,(%esp)
0847e936 +0x0f6:  call   0847e962 <+0x122>
0847e93b +0x0fb:  leave
0847e93c +0x0fc:  ret
0847e93d +0x0fd:  push   %ebp
0847e93e +0x0fe:  mov    %esp,%ebp
0847e940 +0x100:  sub    $0x8,%esp
0847e943 +0x103:  call   082b645a <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x8355>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x8355
0847e948 +0x108:  mov    &_ZN14GlobalInstanceI15InterDispatcherE3m_pE,%eax
0847e94d +0x10d:  leave
0847e94e +0x10e:  ret
0847e94f +0x10f:  push   %ebp
0847e950 +0x110:  mov    %esp,%ebp
0847e952 +0x112:  sub    $0x8,%esp
0847e955 +0x115:  call   082b6518 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x8413>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x8413
0847e95a +0x11a:  mov    &_ZN14GlobalInstanceI15TimerDispatcherE3m_pE,%eax
0847e95f +0x11f:  leave
0847e960 +0x120:  ret
0847e961 +0x121:  nop
0847e962 +0x122:  push   %ebp
0847e963 +0x123:  mov    %esp,%ebp
0847e965 +0x125:  mov    0x8(%ebp),%eax
0847e968 +0x128:  mov    0x4(%eax),%eax
0847e96b +0x12b:  mov    %eax,%edx
0847e96d +0x12d:  mov    0x8(%ebp),%eax
0847e970 +0x130:  mov    (%eax),%eax
0847e972 +0x132:  mov    %edx,%ecx
0847e974 +0x134:  sub    %eax,%ecx
0847e976 +0x136:  mov    %ecx,%eax
0847e978 +0x138:  sar    $0x2,%eax
0847e97b +0x13b:  imul   $0xb6db6db7,%eax,%eax
0847e981 +0x141:  pop    %ebp
0847e982 +0x142:  ret
0847e983 +0x143:  nop
```

## 反编译 C

```c
// <global>::global @ 0x847e840

/* DispatchThread::DispatchThread() */

void DispatchThread::_GLOBAL__I_DispatchThread(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
