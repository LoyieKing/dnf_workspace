# getHashCode

`_ZN5CUser11getHashCodeEPh`

`CUser::getHashCode(unsigned char*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x084fa298` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084fa298  _ZN5CUser11getHashCodeEPh
#           CUser::getHashCode(unsigned char*)
# range [0x084fa298, 0x084fa313]
084fa298 +0x00:  push   %ebp
084fa299 +0x01:  mov    %esp,%ebp
084fa29b +0x03:  push   %ebx
084fa29c +0x04:  sub    $0xf4,%esp
084fa2a2 +0x0a:  lea    -0xe0(%ebp),%eax
084fa2a8 +0x10:  mov    %eax,(%esp)
084fa2ab +0x13:  call   080b2ae0 <_Z10md5_startsP11md5_context>  ; md5_starts(md5_context*)
084fa2b0 +0x18:  mov    0x8(%ebp),%eax
084fa2b3 +0x1b:  add    $0x796e8,%eax
084fa2b8 +0x20:  mov    %eax,(%esp)
084fa2bb +0x23:  call   081a0b9a <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x289>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x289
084fa2c0 +0x28:  imul   $0x14d1,%eax,%eax
084fa2c6 +0x2e:  mov    %eax,%ebx
084fa2c8 +0x30:  mov    0x8(%ebp),%eax
084fa2cb +0x33:  add    $0x796e8,%eax
084fa2d0 +0x38:  movl   $0x0,0x4(%esp)
084fa2d8 +0x40:  mov    %eax,(%esp)
084fa2db +0x43:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
084fa2e0 +0x48:  mov    %ebx,0x8(%esp)
084fa2e4 +0x4c:  mov    %eax,0x4(%esp)
084fa2e8 +0x50:  lea    -0xe0(%ebp),%eax
084fa2ee +0x56:  mov    %eax,(%esp)
084fa2f1 +0x59:  call   080b3a8d <_Z10md5_updateP11md5_contextPhi>  ; md5_update(md5_context*, unsigned char*, int)
084fa2f6 +0x5e:  mov    0xc(%ebp),%eax
084fa2f9 +0x61:  mov    %eax,0x4(%esp)
084fa2fd +0x65:  lea    -0xe0(%ebp),%eax
084fa303 +0x6b:  mov    %eax,(%esp)
084fa306 +0x6e:  call   080b3b8d <_Z10md5_finishP11md5_contextPh>  ; md5_finish(md5_context*, unsigned char*)
084fa30b +0x73:  add    $0xf4,%esp
084fa311 +0x79:  pop    %ebx
084fa312 +0x7a:  pop    %ebp
084fa313 +0x7b:  ret
```

## 反编译 C

```c
// CUser::getHashCode @ 0x84fa298

/* CUser::getHashCode(unsigned char*) */

void __thiscall CUser::getHashCode(CUser *this,uchar *param_1)

{
  int iVar1;
  uchar *puVar2;
  md5_context local_e4 [220];
  
  md5_starts(local_e4);
  iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                    ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8));
  puVar2 = (uchar *)std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                              ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8)
                               ,0);
  md5_update(local_e4,puVar2,iVar1 * 0x14d1);
  md5_finish(local_e4,param_1);
  return;
}
```
