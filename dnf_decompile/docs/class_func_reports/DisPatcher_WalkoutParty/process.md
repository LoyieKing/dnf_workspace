# process

`_ZN23DisPatcher_WalkoutParty7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_WalkoutParty::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_WalkoutParty` | `0x081caf98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081caf98  _ZN23DisPatcher_WalkoutParty7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_WalkoutParty::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081caf98, 0x081cb061]
081caf98 +0x00:  push   %ebp
081caf99 +0x01:  mov    %esp,%ebp
081caf9b +0x03:  sub    $0x28,%esp
081caf9e +0x06:  mov    0x10(%ebp),%eax
081cafa1 +0x09:  mov    %eax,0x8(%esp)
081cafa5 +0x0d:  mov    0xc(%ebp),%eax
081cafa8 +0x10:  mov    %eax,0x4(%esp)
081cafac +0x14:  mov    0x8(%ebp),%eax
081cafaf +0x17:  mov    %eax,(%esp)
081cafb2 +0x1a:  call   081cb062 <_ZN23DisPatcher_WalkoutParty11check_errorEP5CUserR8MSG_BASE>  ; DisPatcher_WalkoutParty::check_error(CUser*, MSG_BASE&)
081cafb7 +0x1f:  mov    %eax,-0x18(%ebp)
081cafba +0x22:  cmpl   $0x0,-0x18(%ebp)
081cafbe +0x26:  jle    081cafc8 <+0x30>
081cafc0 +0x28:  mov    -0x18(%ebp),%eax
081cafc3 +0x2b:  jmp    081cb05f <+0xc7>
081cafc8 +0x30:  cmpl   $0x0,-0x18(%ebp)
081cafcc +0x34:  jns    081cafd8 <+0x40>
081cafce +0x36:  mov    $0xffffffff,%eax
081cafd3 +0x3b:  jmp    081cb05f <+0xc7>
081cafd8 +0x40:  mov    0x10(%ebp),%eax
081cafdb +0x43:  mov    %eax,-0x14(%ebp)
081cafde +0x46:  mov    0x14(%ebp),%eax
081cafe1 +0x49:  mov    %eax,-0x10(%ebp)
081cafe4 +0x4c:  mov    -0x10(%ebp),%eax
081cafe7 +0x4f:  movl   $0x0,0x4(%eax)
081cafee +0x56:  mov    0xc(%ebp),%eax
081caff1 +0x59:  mov    %eax,(%esp)
081caff4 +0x5c:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081caff9 +0x61:  mov    %eax,-0xc(%ebp)
081caffc +0x64:  cmpl   $0x0,-0xc(%ebp)
081cb000 +0x68:  jne    081cb013 <+0x7b>
081cb002 +0x6a:  mov    -0x10(%ebp),%eax
081cb005 +0x6d:  movl   $0x13,0x4(%eax)
081cb00c +0x74:  mov    $0x0,%eax
081cb011 +0x79:  jmp    081cb05f <+0xc7>
081cb013 +0x7b:  mov    -0x14(%ebp),%eax
081cb016 +0x7e:  movzbl 0xd(%eax),%eax
081cb01a +0x82:  movsbl %al,%eax
081cb01d +0x85:  movl   $0x0,0x8(%esp)
081cb025 +0x8d:  mov    %eax,0x4(%esp)
081cb029 +0x91:  mov    -0xc(%ebp),%eax
081cb02c +0x94:  mov    %eax,(%esp)
081cb02f +0x97:  call   0859cb00 <_ZN6CParty11SendWalkoutEi17ENUM_WALKOUT_TYPE>  ; CParty::SendWalkout(int, ENUM_WALKOUT_TYPE)
081cb034 +0x9c:  mov    -0x14(%ebp),%eax
081cb037 +0x9f:  movzbl 0xd(%eax),%eax
081cb03b +0xa3:  movsbl %al,%eax
081cb03e +0xa6:  mov    %eax,0x8(%esp)
081cb042 +0xaa:  mov    0xc(%ebp),%eax
081cb045 +0xad:  mov    %eax,0x4(%esp)
081cb049 +0xb1:  mov    -0xc(%ebp),%eax
081cb04c +0xb4:  mov    %eax,(%esp)
081cb04f +0xb7:  call   0859ca4a <_ZN6CParty14walkout_memberEP5CUseri>  ; CParty::walkout_member(CUser*, int)
081cb054 +0xbc:  mov    -0x10(%ebp),%edx
081cb057 +0xbf:  mov    %eax,0x4(%edx)
081cb05a +0xc2:  mov    $0x0,%eax
081cb05f +0xc7:  leave
081cb060 +0xc8:  ret
081cb061 +0xc9:  nop
```

## 反编译 C

```c
// DisPatcher_WalkoutParty::process @ 0x81caf98

/* DisPatcher_WalkoutParty::process(CUser*, MSG_BASE&, ParamBase&) */

int __thiscall
DisPatcher_WalkoutParty::process
          (DisPatcher_WalkoutParty *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  CParty *this_00;
  undefined4 uVar2;
  
  iVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      *(undefined4 *)(param_3 + 4) = 0;
      this_00 = (CParty *)CUser::GetParty(param_1);
      if (this_00 == (CParty *)0x0) {
        *(undefined4 *)(param_3 + 4) = 0x13;
        iVar1 = 0;
      }
      else {
        CParty::SendWalkout(this_00,(int)(char)param_2[0xd],0);
        uVar2 = CParty::walkout_member(this_00,param_1,(int)(char)param_2[0xd]);
        *(undefined4 *)(param_3 + 4) = uVar2;
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}
```
