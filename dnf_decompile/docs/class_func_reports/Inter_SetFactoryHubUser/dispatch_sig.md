# dispatch_sig

`_ZN23Inter_SetFactoryHubUser12dispatch_sigEP5CUserPci`

`Inter_SetFactoryHubUser::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_SetFactoryHubUser` | `0x084dcfec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084dcfec  _ZN23Inter_SetFactoryHubUser12dispatch_sigEP5CUserPci
#           Inter_SetFactoryHubUser::dispatch_sig(CUser*, char*, int)
# range [0x084dcfec, 0x084dd0c3]
084dcfec +0x00:  push   %ebp
084dcfed +0x01:  mov    %esp,%ebp
084dcfef +0x03:  push   %esi
084dcff0 +0x04:  push   %ebx
084dcff1 +0x05:  sub    $0x50,%esp
084dcff4 +0x08:  cmpl   $0x0,0xc(%ebp)
084dcff8 +0x0c:  je     084dd0b7 <+0xcb>
084dcffe +0x12:  mov    0x10(%ebp),%eax
084dd001 +0x15:  mov    %eax,-0xc(%ebp)
084dd004 +0x18:  mov    -0xc(%ebp),%eax
084dd007 +0x1b:  movzbl 0x2d(%eax),%eax
084dd00b +0x1f:  test   %al,%al
084dd00d +0x21:  je     084dd072 <+0x86>
084dd00f +0x23:  mov    -0xc(%ebp),%eax
084dd012 +0x26:  mov    0x30(%eax),%eax
084dd015 +0x29:  mov    %eax,%edx
084dd017 +0x2b:  mov    -0xc(%ebp),%eax
084dd01a +0x2e:  movzwl 0x2e(%eax),%eax
084dd01e +0x32:  cwtl
084dd01f +0x33:  mov    %edx,0x8(%esp)
084dd023 +0x37:  mov    %eax,0x4(%esp)
084dd027 +0x3b:  mov    0xc(%ebp),%eax
084dd02a +0x3e:  mov    %eax,(%esp)
084dd02d +0x41:  call   080f9968 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x174>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x174
084dd032 +0x46:  mov    %eax,%esi
084dd034 +0x48:  mov    -0xc(%ebp),%eax
084dd037 +0x4b:  movzwl 0x2e(%eax),%eax
084dd03b +0x4f:  movzwl %ax,%ebx
084dd03e +0x52:  mov    0xc(%ebp),%eax
084dd041 +0x55:  mov    %eax,(%esp)
084dd044 +0x58:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
084dd049 +0x5d:  movl   $0x0,0x14(%esp)
084dd051 +0x65:  mov    %esi,0x10(%esp)
084dd055 +0x69:  movl   $0x1,0xc(%esp)
084dd05d +0x71:  mov    %ebx,0x8(%esp)
084dd061 +0x75:  mov    0xc(%ebp),%edx
084dd064 +0x78:  mov    %edx,0x4(%esp)
084dd068 +0x7c:  mov    %eax,(%esp)
084dd06b +0x7f:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
084dd070 +0x84:  jmp    084dd0b7 <+0xcb>
084dd072 +0x86:  mov    -0xc(%ebp),%eax
084dd075 +0x89:  add    $0xf,%eax
084dd078 +0x8c:  movl   $0x1d,0x8(%esp)
084dd080 +0x94:  mov    %eax,0x4(%esp)
084dd084 +0x98:  lea    -0x29(%ebp),%eax
084dd087 +0x9b:  mov    %eax,(%esp)
084dd08a +0x9e:  call   0807d8d0 <_init+0x1c8>
084dd08f +0xa3:  mov    -0xc(%ebp),%eax
084dd092 +0xa6:  movzwl 0x2e(%eax),%eax
084dd096 +0xaa:  movzwl %ax,%ebx
084dd099 +0xad:  mov    0xc(%ebp),%eax
084dd09c +0xb0:  mov    %eax,(%esp)
084dd09f +0xb3:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084dd0a4 +0xb8:  mov    %ebx,0x8(%esp)
084dd0a8 +0xbc:  lea    -0x29(%ebp),%edx
084dd0ab +0xbf:  mov    %edx,0x4(%esp)
084dd0af +0xc3:  mov    %eax,(%esp)
084dd0b2 +0xc6:  call   08437c50 <_ZN24DB_Find_Factory_Hub_User11makeRequestEjPct>  ; DB_Find_Factory_Hub_User::makeRequest(unsigned int, char*, unsigned short)
084dd0b7 +0xcb:  mov    $0x0,%eax
084dd0bc +0xd0:  add    $0x50,%esp
084dd0bf +0xd3:  pop    %ebx
084dd0c0 +0xd4:  pop    %esi
084dd0c1 +0xd5:  pop    %ebp
084dd0c2 +0xd6:  ret
084dd0c3 +0xd7:  nop
```

## 反编译 C

```c
// Inter_SetFactoryHubUser::dispatch_sig @ 0x84dcfec

/* Inter_SetFactoryHubUser::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SetFactoryHubUser::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  CHackAnalyzer *pCVar4;
  uint uVar5;
  char local_2d [29];
  int local_10;
  
  if (param_2 != (char *)0x0) {
    local_10 = param_3;
    if (*(char *)(param_3 + 0x2d) == '\0') {
      strncpy(local_2d,(char *)(param_3 + 0xf),0x1d);
      uVar2 = *(ushort *)(local_10 + 0x2e);
      uVar5 = CUser::GetUID((CUser *)param_2);
      DB_Find_Factory_Hub_User::makeRequest(uVar5,local_2d,uVar2);
    }
    else {
      uVar3 = CUser::SetETC((CUser *)param_2,*(short *)(param_3 + 0x2e),*(int *)(param_3 + 0x30));
      uVar1 = *(undefined2 *)(local_10 + 0x2e);
      pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
      WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_2,uVar1,1,uVar3,0);
    }
  }
  return 0;
}
```
