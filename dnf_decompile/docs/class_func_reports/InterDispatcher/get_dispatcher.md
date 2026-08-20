# get_dispatcher

`_ZN15InterDispatcher14get_dispatcherEi`

`InterDispatcher::get_dispatcher(int)`

| 类 | 地址 |
|---|---|
| `InterDispatcher` | `0x084be906` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084be906  _ZN15InterDispatcher14get_dispatcherEi
#           InterDispatcher::get_dispatcher(int)
# range [0x084be906, 0x084be95d]
084be906 +0x00:  push   %ebp
084be907 +0x01:  mov    %esp,%ebp
084be909 +0x03:  sub    $0x28,%esp
084be90c +0x06:  mov    0xc(%ebp),%edx
084be90f +0x09:  mov    0x8(%ebp),%eax
084be912 +0x0c:  mov    (%eax,%edx,4),%eax
084be915 +0x0f:  test   %eax,%eax
084be917 +0x11:  je     084be924 <+0x1e>
084be919 +0x13:  mov    0xc(%ebp),%edx
084be91c +0x16:  mov    0x8(%ebp),%eax
084be91f +0x19:  mov    (%eax,%edx,4),%eax
084be922 +0x1c:  jmp    084be95c <+0x56>
084be924 +0x1e:  mov    0xc(%ebp),%eax
084be927 +0x21:  mov    %eax,0x14(%esp)
084be92b +0x25:  movl   $"cmd_map.find( code %d )",0x10(%esp)
084be933 +0x2d:  movl   $0x5e5,0xc(%esp)
084be93b +0x35:  movl   $&_ZZN15InterDispatcher14get_dispatcherEiE19__PRETTY_FUNCTION__,0x8(%esp)
084be943 +0x3d:  movl   $"InterDispatcher.cpp",0x4(%esp)
084be94b +0x45:  movl   $0x1,(%esp)
084be952 +0x4c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084be957 +0x51:  mov    $0x0,%eax
084be95c +0x56:  leave
084be95d +0x57:  ret
```

## 反编译 C

```c
// InterDispatcher::get_dispatcher @ 0x84be906

/* InterDispatcher::get_dispatcher(int) */

undefined4 __thiscall InterDispatcher::get_dispatcher(InterDispatcher *this,int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(this + param_1 * 4) == 0) {
    LogManager::logFormat
              (1,"InterDispatcher.cpp","ISigDispatcher* InterDispatcher::get_dispatcher(int)",0x5e5,
               "cmd_map.find( code %d )",param_1);
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(this + param_1 * 4);
  }
  return uVar1;
}
```
