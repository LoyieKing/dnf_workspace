# process

`_ZN35Dispatcher_UpdateContractOfCubeInfo7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_UpdateContractOfCubeInfo::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UpdateContractOfCubeInfo` | `0x0825f900` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825f900  _ZN35Dispatcher_UpdateContractOfCubeInfo7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_UpdateContractOfCubeInfo::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x0825f900, 0x0825f9ad]
0825f900 +0x00:  push   %ebp
0825f901 +0x01:  mov    %esp,%ebp
0825f903 +0x03:  sub    $0x28,%esp
0825f906 +0x06:  mov    0x10(%ebp),%eax
0825f909 +0x09:  mov    %eax,-0x10(%ebp)
0825f90c +0x0c:  mov    0x14(%ebp),%eax
0825f90f +0x0f:  mov    %eax,-0xc(%ebp)
0825f912 +0x12:  mov    -0x10(%ebp),%eax
0825f915 +0x15:  movzbl 0xd(%eax),%edx
0825f919 +0x19:  mov    -0xc(%ebp),%eax
0825f91c +0x1c:  mov    %dl,0x8(%eax)
0825f91f +0x1f:  mov    -0x10(%ebp),%eax
0825f922 +0x22:  movzbl 0xe(%eax),%edx
0825f926 +0x26:  mov    -0xc(%ebp),%eax
0825f929 +0x29:  mov    %dl,0x9(%eax)
0825f92c +0x2c:  mov    0x10(%ebp),%eax
0825f92f +0x2f:  mov    %eax,0x8(%esp)
0825f933 +0x33:  mov    0xc(%ebp),%eax
0825f936 +0x36:  mov    %eax,0x4(%esp)
0825f93a +0x3a:  mov    0x8(%ebp),%eax
0825f93d +0x3d:  mov    %eax,(%esp)
0825f940 +0x40:  call   0825fa8e <_ZN35Dispatcher_UpdateContractOfCubeInfo11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_UpdateContractOfCubeInfo::check_error(CUser*, MSG_BASE&)
0825f945 +0x45:  mov    -0xc(%ebp),%edx
0825f948 +0x48:  mov    %eax,0x4(%edx)
0825f94b +0x4b:  mov    -0xc(%ebp),%eax
0825f94e +0x4e:  mov    0x4(%eax),%eax
0825f951 +0x51:  test   %eax,%eax
0825f953 +0x53:  je     0825f95c <+0x5c>
0825f955 +0x55:  mov    $0x0,%eax
0825f95a +0x5a:  jmp    0825f9ac <+0xac>
0825f95c +0x5c:  mov    -0x10(%ebp),%eax
0825f95f +0x5f:  movzbl 0xe(%eax),%eax
0825f963 +0x63:  movzbl %al,%ecx
0825f966 +0x66:  mov    -0x10(%ebp),%eax
0825f969 +0x69:  movzbl 0xd(%eax),%eax
0825f96d +0x6d:  test   %al,%al
0825f96f +0x6f:  setne  %al
0825f972 +0x72:  movzbl %al,%edx
0825f975 +0x75:  mov    0xc(%ebp),%eax
0825f978 +0x78:  mov    %ecx,0x8(%esp)
0825f97c +0x7c:  mov    %edx,0x4(%esp)
0825f980 +0x80:  mov    %eax,(%esp)
0825f983 +0x83:  call   08260494 <_GLOBAL__I__ZN35Dispatcher_UseRightOfChangeGrowType4readER9PacketBufR8MSG_BASE+0x1c4>  ; global constructors keyed to Dispatcher_UseRightOfChangeGrowType::read(PacketBuf&, MSG_BASE&)+0x1c4
0825f988 +0x88:  mov    -0x10(%ebp),%eax
0825f98b +0x8b:  movzbl 0xe(%eax),%eax
0825f98f +0x8f:  movzbl %al,%eax
0825f992 +0x92:  mov    0xc(%ebp),%edx
0825f995 +0x95:  add    $0x79700,%edx
0825f99b +0x9b:  mov    %eax,0x4(%esp)
0825f99f +0x9f:  mov    %edx,(%esp)
0825f9a2 +0xa2:  call   08686da0 <_ZN15cUserHistoryLog27SelectCubeForPremiumServiceEi>  ; cUserHistoryLog::SelectCubeForPremiumService(int)
0825f9a7 +0xa7:  mov    $0x0,%eax
0825f9ac +0xac:  leave
0825f9ad +0xad:  ret
```

## 反编译 C

```c
// Dispatcher_UpdateContractOfCubeInfo::process @ 0x825f900

/* Dispatcher_UpdateContractOfCubeInfo::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_UpdateContractOfCubeInfo::process
          (Dispatcher_UpdateContractOfCubeInfo *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  undefined4 uVar1;
  
  *(MSG_BASE *)(param_3 + 8) = param_2[0xd];
  *(MSG_BASE *)(param_3 + 9) = param_2[0xe];
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) == 0) {
    CUserCharacInfo::setConctractOfCubePremiumInfo
              ((CUserCharacInfo *)param_1,param_2[0xd] != (MSG_BASE)0x0,(uchar)param_2[0xe]);
    cUserHistoryLog::SelectCubeForPremiumService
              ((cUserHistoryLog *)(param_1 + 0x79700),(uint)(byte)param_2[0xe]);
  }
  return 0;
}
```
