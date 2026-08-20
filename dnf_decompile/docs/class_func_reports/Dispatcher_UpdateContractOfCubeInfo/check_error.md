# check_error

`_ZN35Dispatcher_UpdateContractOfCubeInfo11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_UpdateContractOfCubeInfo::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UpdateContractOfCubeInfo` | `0x0825fa8e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825fa8e  _ZN35Dispatcher_UpdateContractOfCubeInfo11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_UpdateContractOfCubeInfo::check_error(CUser*, MSG_BASE&)
# range [0x0825fa8e, 0x0825fabb]
0825fa8e +0x00:  push   %ebp
0825fa8f +0x01:  mov    %esp,%ebp
0825fa91 +0x03:  sub    $0x18,%esp
0825fa94 +0x06:  movl   $0x5c,0x4(%esp)
0825fa9c +0x0e:  mov    0xc(%ebp),%eax
0825fa9f +0x11:  mov    %eax,(%esp)
0825faa2 +0x14:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
0825faa7 +0x19:  xor    $0x1,%eax
0825faaa +0x1c:  test   %al,%al
0825faac +0x1e:  je     0825fab5 <+0x27>
0825faae +0x20:  mov    $0x8,%eax
0825fab3 +0x25:  jmp    0825faba <+0x2c>
0825fab5 +0x27:  mov    $0x0,%eax
0825faba +0x2c:  leave
0825fabb +0x2d:  ret
```

## 反编译 C

```c
// Dispatcher_UpdateContractOfCubeInfo::check_error @ 0x825fa8e

/* Dispatcher_UpdateContractOfCubeInfo::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_UpdateContractOfCubeInfo::check_error(CUser *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = CUser::isAffectedPremium((CUser *)param_2,0x5c);
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = 8;
  }
  return uVar2;
}
```
