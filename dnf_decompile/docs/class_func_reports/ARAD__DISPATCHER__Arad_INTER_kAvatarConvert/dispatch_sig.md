# dispatch_sig

`_ZN4ARAD10DISPATCHER25Arad_INTER_kAvatarConvert12dispatch_sigEP5CUserPci`

`ARAD::DISPATCHER::Arad_INTER_kAvatarConvert::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_INTER_kAvatarConvert` | `0x0819a20e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819a20e  _ZN4ARAD10DISPATCHER25Arad_INTER_kAvatarConvert12dispatch_sigEP5CUserPci
#           ARAD::DISPATCHER::Arad_INTER_kAvatarConvert::dispatch_sig(CUser*, char*, int)
# range [0x0819a20e, 0x0819a2d9]
0819a20e +0x00:  push   %ebp
0819a20f +0x01:  mov    %esp,%ebp
0819a211 +0x03:  sub    $0x38,%esp
0819a214 +0x06:  cmpl   $0x0,0xc(%ebp)
0819a218 +0x0a:  jne    0819a224 <+0x16>
0819a21a +0x0c:  mov    $0x6d8,%eax
0819a21f +0x11:  jmp    0819a2d8 <+0xca>
0819a224 +0x16:  mov    0xc(%ebp),%eax
0819a227 +0x19:  mov    %eax,(%esp)
0819a22a +0x1c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0819a22f +0x21:  test   %eax,%eax
0819a231 +0x23:  sete   %al
0819a234 +0x26:  test   %al,%al
0819a236 +0x28:  je     0819a242 <+0x34>
0819a238 +0x2a:  mov    $0x6db,%eax
0819a23d +0x2f:  jmp    0819a2d8 <+0xca>
0819a242 +0x34:  mov    0x10(%ebp),%eax
0819a245 +0x37:  mov    %eax,-0xc(%ebp)
0819a248 +0x3a:  cmpl   $0x0,-0xc(%ebp)
0819a24c +0x3e:  jne    0819a281 <+0x73>
0819a24e +0x40:  movl   $"AVATAR CONVERT INTER_DSP(kAvatarConvert) null.",0x10(%esp)
0819a256 +0x48:  movl   $0x6e0,0xc(%esp)
0819a25e +0x50:  movl   $&_ZZN4ARAD10DISPATCHER25Arad_INTER_kAvatarConvert12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
0819a266 +0x58:  movl   $"localjapan/Arad_InterDispatcher.cpp",0x4(%esp)
0819a26e +0x60:  movl   $0x1,(%esp)
0819a275 +0x67:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0819a27a +0x6c:  mov    $0x6e1,%eax
0819a27f +0x71:  jmp    0819a2d8 <+0xca>
0819a281 +0x73:  call   0819afef <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0xcd5>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0xcd5
0819a286 +0x78:  mov    -0xc(%ebp),%edx
0819a289 +0x7b:  mov    %edx,0x8(%esp)
0819a28d +0x7f:  mov    0xc(%ebp),%edx
0819a290 +0x82:  mov    %edx,0x4(%esp)
0819a294 +0x86:  mov    %eax,(%esp)
0819a297 +0x89:  call   08192212 <_ZN19AvatarConvertServer14CheckConditionEP5CUserPN4arad20SigAradAvatarConvertE>  ; AvatarConvertServer::CheckCondition(CUser*, arad::SigAradAvatarConvert*)
0819a29c +0x8e:  xor    $0x1,%eax
0819a29f +0x91:  test   %al,%al
0819a2a1 +0x93:  je     0819a2aa <+0x9c>
0819a2a3 +0x95:  mov    $0x0,%eax
0819a2a8 +0x9a:  jmp    0819a2d8 <+0xca>
0819a2aa +0x9c:  call   0819afef <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0xcd5>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0xcd5
0819a2af +0xa1:  mov    -0xc(%ebp),%edx
0819a2b2 +0xa4:  mov    %edx,0x8(%esp)
0819a2b6 +0xa8:  mov    0xc(%ebp),%edx
0819a2b9 +0xab:  mov    %edx,0x4(%esp)
0819a2bd +0xaf:  mov    %eax,(%esp)
0819a2c0 +0xb2:  call   081926de <_ZN19AvatarConvertServer7ConvertEP5CUserPN4arad20SigAradAvatarConvertE>  ; AvatarConvertServer::Convert(CUser*, arad::SigAradAvatarConvert*)
0819a2c5 +0xb7:  xor    $0x1,%eax
0819a2c8 +0xba:  test   %al,%al
0819a2ca +0xbc:  je     0819a2d3 <+0xc5>
0819a2cc +0xbe:  mov    $0x0,%eax
0819a2d1 +0xc3:  jmp    0819a2d8 <+0xca>
0819a2d3 +0xc5:  mov    $0x0,%eax
0819a2d8 +0xca:  leave
0819a2d9 +0xcb:  ret
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_INTER_kAvatarConvert::dispatch_sig @ 0x819a20e

/* ARAD::DISPATCHER::Arad_INTER_kAvatarConvert::dispatch_sig(CUser*, char*, int) */

undefined4
ARAD::DISPATCHER::Arad_INTER_kAvatarConvert::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  AvatarConvertServer *pAVar4;
  
  if (param_2 == (char *)0x0) {
    uVar2 = 0x6d8;
  }
  else {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar3 == 0) {
      uVar2 = 0x6db;
    }
    else if (param_3 == 0) {
      LogManager::logFormat
                (1,"localjapan/Arad_InterDispatcher.cpp",
                 "virtual int ARAD::DISPATCHER::Arad_INTER_kAvatarConvert::dispatch_sig(CUser*, char*, int)"
                 ,0x6e0,"AVATAR CONVERT INTER_DSP(kAvatarConvert) null.");
      uVar2 = 0x6e1;
    }
    else {
      pAVar4 = (AvatarConvertServer *)Singleton<AvatarConvertServer>::Get();
      cVar1 = AvatarConvertServer::CheckCondition
                        (pAVar4,(CUser *)param_2,(SigAradAvatarConvert *)param_3);
      if (cVar1 == '\x01') {
        pAVar4 = (AvatarConvertServer *)Singleton<AvatarConvertServer>::Get();
        cVar1 = AvatarConvertServer::Convert
                          (pAVar4,(CUser *)param_2,(SigAradAvatarConvert *)param_3);
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}
```
