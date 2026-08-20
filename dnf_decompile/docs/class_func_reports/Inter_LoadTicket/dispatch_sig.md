# dispatch_sig

`_ZN16Inter_LoadTicket12dispatch_sigEP5CUserPci`

`Inter_LoadTicket::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadTicket` | `0x084c515c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c515c  _ZN16Inter_LoadTicket12dispatch_sigEP5CUserPci
#           Inter_LoadTicket::dispatch_sig(CUser*, char*, int)
# range [0x084c515c, 0x084c5211]
084c515c +0x00:  push   %ebp
084c515d +0x01:  mov    %esp,%ebp
084c515f +0x03:  sub    $0x28,%esp
084c5162 +0x06:  cmpl   $0x0,0xc(%ebp)
084c5166 +0x0a:  jne    084c5172 <+0x16>
084c5168 +0x0c:  mov    $0x1a70,%eax
084c516d +0x11:  jmp    084c5210 <+0xb4>
084c5172 +0x16:  mov    0xc(%ebp),%eax
084c5175 +0x19:  mov    %eax,(%esp)
084c5178 +0x1c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084c517d +0x21:  test   %eax,%eax
084c517f +0x23:  sete   %al
084c5182 +0x26:  test   %al,%al
084c5184 +0x28:  je     084c5190 <+0x34>
084c5186 +0x2a:  mov    $0x1a72,%eax
084c518b +0x2f:  jmp    084c5210 <+0xb4>
084c5190 +0x34:  mov    0x10(%ebp),%eax
084c5193 +0x37:  mov    %eax,-0x10(%ebp)
084c5196 +0x3a:  mov    -0x10(%ebp),%eax
084c5199 +0x3d:  mov    0x4(%eax),%eax
084c519c +0x40:  cmp    $0x1,%eax
084c519f +0x43:  jne    084c51a8 <+0x4c>
084c51a1 +0x45:  mov    $0x1a79,%eax
084c51a6 +0x4a:  jmp    084c5210 <+0xb4>
084c51a8 +0x4c:  mov    -0x10(%ebp),%eax
084c51ab +0x4f:  mov    0x8(%eax),%eax
084c51ae +0x52:  cmp    $0x63,%eax
084c51b1 +0x55:  jle    084c51ba <+0x5e>
084c51b3 +0x57:  mov    $0x1a7e,%eax
084c51b8 +0x5c:  jmp    084c5210 <+0xb4>
084c51ba +0x5e:  movl   $0x0,-0xc(%ebp)
084c51c1 +0x65:  jmp    084c51e8 <+0x8c>
084c51c3 +0x67:  mov    -0xc(%ebp),%edx
084c51c6 +0x6a:  mov    -0x10(%ebp),%eax
084c51c9 +0x6d:  mov    0xc(%eax,%edx,4),%eax
084c51cd +0x71:  movl   $0x0,0x8(%esp)
084c51d5 +0x79:  mov    %eax,0x4(%esp)
084c51d9 +0x7d:  mov    0xc(%ebp),%eax
084c51dc +0x80:  mov    %eax,(%esp)
084c51df +0x83:  call   08678282 <_ZN5CUser9AddTicketEib>  ; CUser::AddTicket(int, bool)
084c51e4 +0x88:  addl   $0x1,-0xc(%ebp)
084c51e8 +0x8c:  mov    -0x10(%ebp),%eax
084c51eb +0x8f:  mov    0x8(%eax),%eax
084c51ee +0x92:  cmp    -0xc(%ebp),%eax
084c51f1 +0x95:  setg   %al
084c51f4 +0x98:  test   %al,%al
084c51f6 +0x9a:  jne    084c51c3 <+0x67>
084c51f8 +0x9c:  movl   $0x4,0x4(%esp)
084c5200 +0xa4:  mov    0xc(%ebp),%eax
084c5203 +0xa7:  mov    %eax,(%esp)
084c5206 +0xaa:  call   081253f4 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x157>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x157
084c520b +0xaf:  mov    $0x0,%eax
084c5210 +0xb4:  leave
084c5211 +0xb5:  ret
```

## 反编译 C

```c
// Inter_LoadTicket::dispatch_sig @ 0x84c515c

/* Inter_LoadTicket::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadTicket::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_10;
  
  if (param_2 == (char *)0x0) {
    uVar1 = 0x1a70;
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 == 0) {
      uVar1 = 0x1a72;
    }
    else if (*(int *)(param_3 + 4) == 1) {
      uVar1 = 0x1a79;
    }
    else if (*(int *)(param_3 + 8) < 100) {
      for (local_10 = 0; local_10 < *(int *)(param_3 + 8); local_10 = local_10 + 1) {
        CUser::AddTicket((CUser *)param_2,*(int *)(param_3 + 0xc + local_10 * 4),false);
      }
      CUser::EnableCharacInfo((CUser *)param_2,4);
      uVar1 = 0;
    }
    else {
      uVar1 = 0x1a7e;
    }
  }
  return uVar1;
}
```
