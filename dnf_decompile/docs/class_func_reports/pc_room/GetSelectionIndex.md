# GetSelectionIndex

`_ZN7pc_room17GetSelectionIndexER5CUserRii`

`pc_room::GetSelectionIndex(CUser&, int&, int)`

| 类 | 地址 |
|---|---|
| `pc_room` | `0x082711f7` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082711f7  _ZN7pc_room17GetSelectionIndexER5CUserRii
#           pc_room::GetSelectionIndex(CUser&, int&, int)
# range [0x082711f7, 0x082712a5]
082711f7 +0x00:  push   %ebp
082711f8 +0x01:  mov    %esp,%ebp
082711fa +0x03:  sub    $0x28,%esp
082711fd +0x06:  mov    0x8(%ebp),%eax
08271200 +0x09:  mov    %eax,(%esp)
08271203 +0x0c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08271208 +0x11:  mov    %eax,-0x10(%ebp)
0827120b +0x14:  cmpl   $0x0,-0x10(%ebp)
0827120f +0x18:  jne    0827121b <+0x24>
08271211 +0x1a:  mov    $0x0,%eax
08271216 +0x1f:  jmp    082712a4 <+0xad>
0827121b +0x24:  mov    -0x10(%ebp),%eax
0827121e +0x27:  movzwl 0x27(%eax),%eax
08271222 +0x2b:  cwtl
08271223 +0x2c:  mov    %eax,-0x18(%ebp)
08271226 +0x2f:  movl   $0x16,0x4(%esp)
0827122e +0x37:  mov    0x8(%ebp),%eax
08271231 +0x3a:  mov    %eax,(%esp)
08271234 +0x3d:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
08271239 +0x42:  test   %al,%al
0827123b +0x44:  je     08271246 <+0x4f>
0827123d +0x46:  mov    -0x18(%ebp),%eax
08271240 +0x49:  add    $0x5,%eax
08271243 +0x4c:  mov    %eax,-0x18(%ebp)
08271246 +0x4f:  cmpl   $0x2,0x10(%ebp)
0827124a +0x53:  jne    08271257 <+0x60>
0827124c +0x55:  mov    -0x10(%ebp),%eax
0827124f +0x58:  movzwl 0x27(%eax),%eax
08271253 +0x5c:  cwtl
08271254 +0x5d:  mov    %eax,-0x18(%ebp)
08271257 +0x60:  movl   $0x0,-0x14(%ebp)
0827125e +0x67:  lea    -0x18(%ebp),%eax
08271261 +0x6a:  mov    %eax,0x4(%esp)
08271265 +0x6e:  lea    -0x14(%ebp),%eax
08271268 +0x71:  mov    %eax,(%esp)
0827126b +0x74:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
08271270 +0x79:  mov    (%eax),%eax
08271272 +0x7b:  mov    0x10(%ebp),%edx
08271275 +0x7e:  mov    %edx,0x4(%esp)
08271279 +0x82:  mov    %eax,(%esp)
0827127c +0x85:  call   08271338 <_ZN7pc_room16GetRewardSectionEii>  ; pc_room::GetRewardSection(int, int)
08271281 +0x8a:  mov    %eax,-0xc(%ebp)
08271284 +0x8d:  cmpl   $0x0,-0xc(%ebp)
08271288 +0x91:  jne    08271291 <+0x9a>
0827128a +0x93:  mov    $0x0,%eax
0827128f +0x98:  jmp    082712a4 <+0xad>
08271291 +0x9a:  mov    -0xc(%ebp),%eax
08271294 +0x9d:  movzbl (%eax),%eax
08271297 +0xa0:  movzbl %al,%edx
0827129a +0xa3:  mov    0xc(%ebp),%eax
0827129d +0xa6:  mov    %edx,(%eax)
0827129f +0xa8:  mov    $0x1,%eax
082712a4 +0xad:  leave
082712a5 +0xae:  ret
```

## 反编译 C

```c
// pc_room::GetSelectionIndex @ 0x82711f7

/* pc_room::GetSelectionIndex(CUser&, int&, int) */

undefined4 pc_room::GetSelectionIndex(CUser *param_1,int *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  byte *pbVar4;
  int local_1c [6];
  
  local_1c[2] = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (local_1c[2] == 0) {
    uVar2 = 0;
  }
  else {
    local_1c[0] = (int)*(short *)(local_1c[2] + 0x27);
    cVar1 = CUser::isAffectedPremium(param_1,0x16);
    if (cVar1 != '\0') {
      local_1c[0] = local_1c[0] + 5;
    }
    if (param_3 == 2) {
      local_1c[0] = (int)*(short *)(local_1c[2] + 0x27);
    }
    local_1c[1] = 0;
    piVar3 = std::max<int>(local_1c + 1,local_1c);
    pbVar4 = (byte *)GetRewardSection(*piVar3,param_3);
    if (pbVar4 == (byte *)0x0) {
      uVar2 = 0;
    }
    else {
      *param_2 = (uint)*pbVar4;
      uVar2 = 1;
    }
  }
  return uVar2;
}
```
