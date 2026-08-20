# ~PacketDispatcher

`_ZN16PacketDispatcherD1Ev`

`PacketDispatcher::~PacketDispatcher()`

| 类 | 地址 |
|---|---|
| `PacketDispatcher` | `0x08594840` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08594840  _ZN16PacketDispatcherD1Ev
#           PacketDispatcher::~PacketDispatcher()
# range [0x08594840, 0x085948e1]
08594840 +0x00:  push   %ebp
08594841 +0x01:  mov    %esp,%ebp
08594843 +0x03:  push   %esi
08594844 +0x04:  push   %ebx
08594845 +0x05:  sub    $0x20,%esp
08594848 +0x08:  movl   $0x0,-0xc(%ebp)
0859484f +0x0f:  jmp    0859489a <+0x5a>
08594851 +0x11:  mov    -0xc(%ebp),%edx
08594854 +0x14:  mov    0x8(%ebp),%eax
08594857 +0x17:  mov    (%eax,%edx,4),%eax
0859485a +0x1a:  test   %eax,%eax
0859485c +0x1c:  je     08594889 <+0x49>
0859485e +0x1e:  mov    -0xc(%ebp),%edx
08594861 +0x21:  mov    0x8(%ebp),%eax
08594864 +0x24:  mov    (%eax,%edx,4),%eax
08594867 +0x27:  test   %eax,%eax
08594869 +0x29:  je     08594889 <+0x49>
0859486b +0x2b:  mov    -0xc(%ebp),%edx
0859486e +0x2e:  mov    0x8(%ebp),%eax
08594871 +0x31:  mov    (%eax,%edx,4),%eax
08594874 +0x34:  mov    (%eax),%eax
08594876 +0x36:  add    $0x8,%eax
08594879 +0x39:  mov    (%eax),%ecx
0859487b +0x3b:  mov    -0xc(%ebp),%edx
0859487e +0x3e:  mov    0x8(%ebp),%eax
08594881 +0x41:  mov    (%eax,%edx,4),%eax
08594884 +0x44:  mov    %eax,(%esp)
08594887 +0x47:  call   *%ecx
08594889 +0x49:  mov    -0xc(%ebp),%edx
0859488c +0x4c:  mov    0x8(%ebp),%eax
0859488f +0x4f:  movl   $0x0,(%eax,%edx,4)
08594896 +0x56:  addl   $0x1,-0xc(%ebp)
0859489a +0x5a:  cmpl   $0x25d,-0xc(%ebp)
085948a1 +0x61:  setle  %al
085948a4 +0x64:  test   %al,%al
085948a6 +0x66:  jne    08594851 <+0x11>
085948a8 +0x68:  jmp    085948ca <+0x8a>
085948aa +0x6a:  mov    %edx,%ebx
085948ac +0x6c:  mov    %eax,%esi
085948ae +0x6e:  mov    0x8(%ebp),%eax
085948b1 +0x71:  add    $0x978,%eax
085948b6 +0x76:  mov    %eax,(%esp)
085948b9 +0x79:  call   08595094 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x74>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x74
085948be +0x7e:  mov    %esi,%eax
085948c0 +0x80:  mov    %ebx,%edx
085948c2 +0x82:  mov    %eax,(%esp)
085948c5 +0x85:  call   08ae3750 <_Unwind_Resume>
085948ca +0x8a:  mov    0x8(%ebp),%eax
085948cd +0x8d:  add    $0x978,%eax
085948d2 +0x92:  mov    %eax,(%esp)
085948d5 +0x95:  call   08595094 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x74>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x74
085948da +0x9a:  add    $0x20,%esp
085948dd +0x9d:  pop    %ebx
085948de +0x9e:  pop    %esi
085948df +0x9f:  pop    %ebp
085948e0 +0xa0:  ret
085948e1 +0xa1:  nop
```

## 反编译 C

```c
// PacketDispatcher::~PacketDispatcher @ 0x8594840

/* PacketDispatcher::~PacketDispatcher() */

void __thiscall PacketDispatcher::~PacketDispatcher(PacketDispatcher *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 0x25e; local_10 = local_10 + 1) {
    if ((*(int *)(this + local_10 * 4) != 0) && (*(int *)(this + local_10 * 4) != 0)) {
                    /* try { // try from 08594887 to 08594888 has its CatchHandler @ 085948aa */
      (**(code **)(**(int **)(this + local_10 * 4) + 8))(*(undefined4 *)(this + local_10 * 4));
    }
    *(undefined4 *)(this + local_10 * 4) = 0;
  }
  CLocalChinaErrorDispatcher::~CLocalChinaErrorDispatcher
            ((CLocalChinaErrorDispatcher *)(this + 0x978));
  return;
}
```
