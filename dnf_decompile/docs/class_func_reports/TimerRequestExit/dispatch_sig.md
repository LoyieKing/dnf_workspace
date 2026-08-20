# dispatch_sig

`_ZN16TimerRequestExit12dispatch_sigEiij`

`TimerRequestExit::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerRequestExit` | `0x08638f6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08638f6a  _ZN16TimerRequestExit12dispatch_sigEiij
#           TimerRequestExit::dispatch_sig(int, int, unsigned int)
# range [0x08638f6a, 0x08638fff]
08638f6a +0x00:  push   %ebp
08638f6b +0x01:  mov    %esp,%ebp
08638f6d +0x03:  sub    $0x28,%esp
08638f70 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08638f75 +0x0b:  movl   $0x2,0x8(%esp)
08638f7d +0x13:  mov    0xc(%ebp),%edx
08638f80 +0x16:  mov    %edx,0x4(%esp)
08638f84 +0x1a:  mov    %eax,(%esp)
08638f87 +0x1d:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
08638f8c +0x22:  mov    %eax,-0xc(%ebp)
08638f8f +0x25:  cmpl   $0x0,-0xc(%ebp)
08638f93 +0x29:  jne    08638f9c <+0x32>
08638f95 +0x2b:  mov    $0x0,%eax
08638f9a +0x30:  jmp    08638ffd <+0x93>
08638f9c +0x32:  mov    -0xc(%ebp),%eax
08638f9f +0x35:  mov    %eax,(%esp)
08638fa2 +0x38:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08638fa7 +0x3d:  test   %eax,%eax
08638fa9 +0x3f:  sete   %al
08638fac +0x42:  test   %al,%al
08638fae +0x44:  je     08638fb7 <+0x4d>
08638fb0 +0x46:  mov    $0x0,%eax
08638fb5 +0x4b:  jmp    08638ffd <+0x93>
08638fb7 +0x4d:  mov    -0xc(%ebp),%eax
08638fba +0x50:  mov    %eax,(%esp)
08638fbd +0x53:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08638fc2 +0x58:  mov    0x10(%ebp),%edx
08638fc5 +0x5b:  cmp    %edx,%eax
08638fc7 +0x5d:  setne  %al
08638fca +0x60:  test   %al,%al
08638fcc +0x62:  je     08638fd5 <+0x6b>
08638fce +0x64:  mov    $0x0,%eax
08638fd3 +0x69:  jmp    08638ffd <+0x93>
08638fd5 +0x6b:  movl   $0x0,0xc(%esp)
08638fdd +0x73:  movl   $0x1,0x8(%esp)
08638fe5 +0x7b:  movl   $0x2f,0x4(%esp)
08638fed +0x83:  mov    -0xc(%ebp),%eax
08638ff0 +0x86:  mov    %eax,(%esp)
08638ff3 +0x89:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
08638ff8 +0x8e:  mov    $0x1,%eax
08638ffd +0x93:  leave
08638ffe +0x94:  ret
08638fff +0x95:  nop
```

## 反编译 C

```c
// TimerRequestExit::dispatch_sig @ 0x8638f6a

/* TimerRequestExit::dispatch_sig(int, int, unsigned int) */

undefined4 TimerRequestExit::dispatch_sig(int param_1,int param_2,uint param_3)

{
  int iVar1;
  CUser *this;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = G_CGameManager();
  this = (CUser *)CGameManager::getUser(iVar1,param_2);
  if (this == (CUser *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
      if (uVar3 == param_3) {
        CUser::DisConnSig(this,0x2f,1,0);
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}
```
