# check_error

`_ZN21DisPatcher_FinishLoad11check_errorEP5CUserR8MSG_BASE`

`DisPatcher_FinishLoad::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_FinishLoad` | `0x08264bfe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08264bfe  _ZN21DisPatcher_FinishLoad11check_errorEP5CUserR8MSG_BASE
#           DisPatcher_FinishLoad::check_error(CUser*, MSG_BASE&)
# range [0x08264bfe, 0x08264c27]
08264bfe +0x00:  push   %ebp
08264bff +0x01:  mov    %esp,%ebp
08264c01 +0x03:  sub    $0x18,%esp
08264c04 +0x06:  mov    0xc(%ebp),%eax
08264c07 +0x09:  mov    %eax,(%esp)
08264c0a +0x0c:  call   0826532e <_GLOBAL__I__ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0x106>  ; global constructors keyed to Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)+0x106
08264c0f +0x11:  cmp    $0x1,%eax
08264c12 +0x14:  sete   %al
08264c15 +0x17:  test   %al,%al
08264c17 +0x19:  je     08264c20 <+0x22>
08264c19 +0x1b:  mov    $0x7fffffff,%eax
08264c1e +0x20:  jmp    08264c25 <+0x27>
08264c20 +0x22:  mov    $0x0,%eax
08264c25 +0x27:  leave
08264c26 +0x28:  ret
08264c27 +0x29:  nop
```

## 反编译 C

```c
// DisPatcher_FinishLoad::check_error @ 0x8264bfe

/* DisPatcher_FinishLoad::check_error(CUser*, MSG_BASE&) */

undefined4 DisPatcher_FinishLoad::check_error(CUser *param_1,MSG_BASE *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CUser::GetDebugCommand((CUser *)param_2);
  if (iVar1 == 1) {
    uVar2 = 0x7fffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
