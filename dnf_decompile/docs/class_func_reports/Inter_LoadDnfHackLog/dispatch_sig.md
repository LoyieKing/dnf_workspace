# dispatch_sig

`_ZN20Inter_LoadDnfHackLog12dispatch_sigEP5CUserPci`

`Inter_LoadDnfHackLog::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadDnfHackLog` | `0x084d41aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d41aa  _ZN20Inter_LoadDnfHackLog12dispatch_sigEP5CUserPci
#           Inter_LoadDnfHackLog::dispatch_sig(CUser*, char*, int)
# range [0x084d41aa, 0x084d4229]
084d41aa +0x00:  push   %ebp
084d41ab +0x01:  mov    %esp,%ebp
084d41ad +0x03:  push   %esi
084d41ae +0x04:  push   %ebx
084d41af +0x05:  sub    $0x20,%esp
084d41b2 +0x08:  mov    0x10(%ebp),%eax
084d41b5 +0x0b:  mov    %eax,-0x10(%ebp)
084d41b8 +0x0e:  mov    0xc(%ebp),%eax
084d41bb +0x11:  mov    %eax,(%esp)
084d41be +0x14:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084d41c3 +0x19:  mov    -0x10(%ebp),%edx
084d41c6 +0x1c:  mov    (%edx),%edx
084d41c8 +0x1e:  cmp    %edx,%eax
084d41ca +0x20:  setne  %al
084d41cd +0x23:  test   %al,%al
084d41cf +0x25:  je     084d41d8 <+0x2e>
084d41d1 +0x27:  mov    $0x0,%eax
084d41d6 +0x2c:  jmp    084d4223 <+0x79>
084d41d8 +0x2e:  movl   $0x65,-0xc(%ebp)
084d41df +0x35:  jmp    084d4210 <+0x66>
084d41e1 +0x37:  mov    -0xc(%ebp),%eax
084d41e4 +0x3a:  lea    -0x65(%eax),%edx
084d41e7 +0x3d:  mov    -0x10(%ebp),%eax
084d41ea +0x40:  mov    0x4(%eax,%edx,4),%esi
084d41ee +0x44:  mov    -0xc(%ebp),%ebx
084d41f1 +0x47:  mov    0xc(%ebp),%eax
084d41f4 +0x4a:  mov    %eax,(%esp)
084d41f7 +0x4d:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
084d41fc +0x52:  mov    %esi,0x8(%esp)
084d4200 +0x56:  mov    %ebx,0x4(%esp)
084d4204 +0x5a:  mov    %eax,(%esp)
084d4207 +0x5d:  call   084eb57c <_GLOBAL__I__Z7getUserj+0x252e>  ; global constructors keyed to getUser(unsigned int)+0x252e
084d420c +0x62:  addl   $0x1,-0xc(%ebp)
084d4210 +0x66:  cmpl   $0xfa0,-0xc(%ebp)
084d4217 +0x6d:  setle  %al
084d421a +0x70:  test   %al,%al
084d421c +0x72:  jne    084d41e1 <+0x37>
084d421e +0x74:  mov    $0x0,%eax
084d4223 +0x79:  add    $0x20,%esp
084d4226 +0x7c:  pop    %ebx
084d4227 +0x7d:  pop    %esi
084d4228 +0x7e:  pop    %ebp
084d4229 +0x7f:  ret
```

## 反编译 C

```c
// Inter_LoadDnfHackLog::dispatch_sig @ 0x84d41aa

/* Inter_LoadDnfHackLog::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadDnfHackLog::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  CHackAnalyzer *pCVar3;
  undefined4 local_10;
  
  iVar2 = CUser::get_acc_id((CUser *)param_2);
  if (iVar2 == *(int *)param_3) {
    for (local_10 = 0x65; local_10 < 0xfa1; local_10 = local_10 + 1) {
      uVar1 = *(undefined4 *)(param_3 + 4 + (local_10 + -0x65) * 4);
      pCVar3 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
      WongWork::CHackAnalyzer::setServerHackAccumulatedCnt(pCVar3,local_10,uVar1);
    }
  }
  return 0;
}
```
