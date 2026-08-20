# loadScript

`_ZN4ARAD6SCRIPT13AvatarConvert10loadScriptEv`

`ARAD::SCRIPT::AvatarConvert::loadScript()`

| 类 | 地址 |
|---|---|
| `ARAD::SCRIPT::AvatarConvert` | `0x088b1b36` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088b1b36  _ZN4ARAD6SCRIPT13AvatarConvert10loadScriptEv
#           ARAD::SCRIPT::AvatarConvert::loadScript()
# range [0x088b1b36, 0x088b1dc1]
088b1b36 +0x000:  push   %ebp
088b1b37 +0x001:  mov    %esp,%ebp
088b1b39 +0x003:  push   %edi
088b1b3a +0x004:  push   %esi
088b1b3b +0x005:  push   %ebx
088b1b3c +0x006:  sub    $0x5c,%esp
088b1b3f +0x009:  movl   $"avatar_convert_jpn.etc",0x4(%esp)
088b1b47 +0x011:  movl   $"Etc/EmblemRenewal/",(%esp)
088b1b4e +0x018:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
088b1b53 +0x01d:  xor    $0x1,%eax
088b1b56 +0x020:  test   %al,%al
088b1b58 +0x022:  je     088b1b64 <+0x2e>
088b1b5a +0x024:  mov    $0xffffffff,%ebx
088b1b5f +0x029:  jmp    088b1db4 <+0x27e>
088b1b64 +0x02e:  lea    -0x38(%ebp),%eax
088b1b67 +0x031:  mov    %eax,(%esp)
088b1b6a +0x034:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
088b1b6f +0x039:  movb   $0x0,-0x39(%ebp)
088b1b73 +0x03d:  movb   $0x0,-0x3a(%ebp)
088b1b77 +0x041:  jmp    088b1b7a <+0x44>
088b1b79 +0x043:  nop
088b1b7a +0x044:  movl   $0x1,0x4(%esp)
088b1b82 +0x04c:  lea    -0x38(%ebp),%eax
088b1b85 +0x04f:  mov    %eax,(%esp)
088b1b88 +0x052:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
088b1b8d +0x057:  xor    $0x1,%eax
088b1b90 +0x05a:  test   %al,%al
088b1b92 +0x05c:  jne    088b1d81 <+0x24b>
088b1b98 +0x062:  movl   $0x0,-0x40(%ebp)
088b1b9f +0x069:  movl   $0x24,(%esp)
088b1ba6 +0x070:  call   08724450 <_Znwj>  ; operator new(unsigned int)
088b1bab +0x075:  mov    %eax,%ebx
088b1bad +0x077:  mov    %ebx,%esi
088b1baf +0x079:  mov    %esi,%edx
088b1bb1 +0x07b:  mov    $0x0,%eax
088b1bb6 +0x080:  mov    $0x8,%ecx
088b1bbb +0x085:  mov    %edx,%edi
088b1bbd +0x087:  rep stos %eax,%es:(%edi)
088b1bbf +0x089:  mov    %edi,%edx
088b1bc1 +0x08b:  mov    %al,(%edx)
088b1bc3 +0x08d:  add    $0x1,%edx
088b1bc6 +0x090:  mov    %esi,(%esp)
088b1bc9 +0x093:  call   088b1f42 <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x45>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x45
088b1bce +0x098:  jmp    088b1be5 <+0xaf>
088b1bd0 +0x09a:  mov    %edx,%esi
088b1bd2 +0x09c:  mov    %eax,%edi
088b1bd4 +0x09e:  mov    %ebx,(%esp)
088b1bd7 +0x0a1:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
088b1bdc +0x0a6:  mov    %edi,%eax
088b1bde +0x0a8:  mov    %esi,%edx
088b1be0 +0x0aa:  jmp    088b1d8e <+0x258>
088b1be5 +0x0af:  mov    %ebx,%eax
088b1be7 +0x0b1:  mov    %eax,-0x44(%ebp)
088b1bea +0x0b4:  mov    -0x44(%ebp),%ebx
088b1bed +0x0b7:  movl   $0x0,(%esp)
088b1bf4 +0x0be:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088b1bf9 +0x0c3:  mov    %eax,(%ebx)
088b1bfb +0x0c5:  movl   $0x0,(%esp)
088b1c02 +0x0cc:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088b1c07 +0x0d1:  mov    %eax,-0x1c(%ebp)
088b1c0a +0x0d4:  mov    -0x44(%ebp),%eax
088b1c0d +0x0d7:  cmpl   $0x1,-0x1c(%ebp)
088b1c11 +0x0db:  sete   %dl
088b1c14 +0x0de:  mov    %dl,0x20(%eax)
088b1c17 +0x0e1:  movl   $0x1,0xc(%esp)
088b1c1f +0x0e9:  lea    -0x3a(%ebp),%eax
088b1c22 +0x0ec:  mov    %eax,0x8(%esp)
088b1c26 +0x0f0:  lea    -0x38(%ebp),%eax
088b1c29 +0x0f3:  mov    %eax,0x4(%esp)
088b1c2d +0x0f7:  lea    -0x39(%ebp),%eax
088b1c30 +0x0fa:  mov    %eax,(%esp)
088b1c33 +0x0fd:  call   088bceaf <_Z13ScanTypeOrIntRbRSsS_b>  ; ScanTypeOrInt(bool&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool&, bool)
088b1c38 +0x102:  mov    %eax,-0x4c(%ebp)
088b1c3b +0x105:  movzbl -0x39(%ebp),%eax
088b1c3f +0x109:  test   %al,%al
088b1c41 +0x10b:  jne    088b1cad <+0x177>
088b1c43 +0x10d:  movzbl -0x3a(%ebp),%eax
088b1c47 +0x111:  xor    $0x1,%eax
088b1c4a +0x114:  test   %al,%al
088b1c4c +0x116:  jne    088b1cb0 <+0x17a>
088b1c4e +0x118:  movl   $0x0,(%esp)
088b1c55 +0x11f:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088b1c5a +0x124:  mov    %ax,-0x48(%ebp)
088b1c5e +0x128:  movl   $0x0,(%esp)
088b1c65 +0x12f:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088b1c6a +0x134:  mov    %ax,-0x46(%ebp)
088b1c6e +0x138:  mov    -0x44(%ebp),%eax
088b1c71 +0x13b:  lea    0x8(%eax),%edx
088b1c74 +0x13e:  lea    -0x4c(%ebp),%eax
088b1c77 +0x141:  mov    %eax,0x4(%esp)
088b1c7b +0x145:  mov    %edx,(%esp)
088b1c7e +0x148:  call   088b224e <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x351>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x351
088b1c83 +0x14d:  movzwl -0x46(%ebp),%eax
088b1c87 +0x151:  movswl %ax,%edx
088b1c8a +0x154:  mov    -0x40(%ebp),%eax
088b1c8d +0x157:  lea    (%edx,%eax,1),%eax
088b1c90 +0x15a:  mov    %eax,-0x40(%ebp)
088b1c93 +0x15d:  mov    -0x44(%ebp),%eax
088b1c96 +0x160:  lea    0x14(%eax),%edx
088b1c99 +0x163:  lea    -0x40(%ebp),%eax
088b1c9c +0x166:  mov    %eax,0x4(%esp)
088b1ca0 +0x16a:  mov    %edx,(%esp)
088b1ca3 +0x16d:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
088b1ca8 +0x172:  jmp    088b1c17 <+0xe1>
088b1cad +0x177:  nop
088b1cae +0x178:  jmp    088b1cb1 <+0x17b>
088b1cb0 +0x17a:  nop
088b1cb1 +0x17b:  movzbl -0x39(%ebp),%eax
088b1cb5 +0x17f:  test   %al,%al
088b1cb7 +0x181:  je     088b1b79 <+0x43>
088b1cbd +0x187:  mov    0x8(%ebp),%edx
088b1cc0 +0x18a:  lea    -0x34(%ebp),%eax
088b1cc3 +0x18d:  mov    %edx,0x4(%esp)
088b1cc7 +0x191:  mov    %eax,(%esp)
088b1cca +0x194:  call   088b22ee <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x3f1>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x3f1
088b1ccf +0x199:  sub    $0x4,%esp
088b1cd2 +0x19c:  mov    -0x44(%ebp),%eax
088b1cd5 +0x19f:  mov    %eax,%ecx
088b1cd7 +0x1a1:  mov    0x8(%ebp),%edx
088b1cda +0x1a4:  lea    -0x30(%ebp),%eax
088b1cdd +0x1a7:  mov    %ecx,0x8(%esp)
088b1ce1 +0x1ab:  mov    %edx,0x4(%esp)
088b1ce5 +0x1af:  mov    %eax,(%esp)
088b1ce8 +0x1b2:  call   088b22c2 <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x3c5>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x3c5
088b1ced +0x1b7:  sub    $0x4,%esp
088b1cf0 +0x1ba:  lea    -0x34(%ebp),%eax
088b1cf3 +0x1bd:  mov    %eax,0x4(%esp)
088b1cf7 +0x1c1:  lea    -0x30(%ebp),%eax
088b1cfa +0x1c4:  mov    %eax,(%esp)
088b1cfd +0x1c7:  call   088b2314 <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x417>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x417
088b1d02 +0x1cc:  test   %al,%al
088b1d04 +0x1ce:  je     088b1d56 <+0x220>
088b1d06 +0x1d0:  mov    -0x44(%ebp),%ebx
088b1d09 +0x1d3:  mov    -0x44(%ebp),%eax
088b1d0c +0x1d6:  add    $0x14,%eax
088b1d0f +0x1d9:  mov    %eax,(%esp)
088b1d12 +0x1dc:  call   0817ef6e <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x19f>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x19f
088b1d17 +0x1e1:  mov    (%eax),%eax
088b1d19 +0x1e3:  mov    %eax,0x4(%ebx)
088b1d1c +0x1e6:  mov    -0x44(%ebp),%eax
088b1d1f +0x1e9:  lea    -0x44(%ebp),%edx
088b1d22 +0x1ec:  mov    %edx,0x8(%esp)
088b1d26 +0x1f0:  mov    %eax,0x4(%esp)
088b1d2a +0x1f4:  lea    -0x24(%ebp),%eax
088b1d2d +0x1f7:  mov    %eax,(%esp)
088b1d30 +0x1fa:  call   088b2328 <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x42b>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x42b
088b1d35 +0x1ff:  mov    0x8(%ebp),%edx
088b1d38 +0x202:  lea    -0x2c(%ebp),%eax
088b1d3b +0x205:  lea    -0x24(%ebp),%ecx
088b1d3e +0x208:  mov    %ecx,0x8(%esp)
088b1d42 +0x20c:  mov    %edx,0x4(%esp)
088b1d46 +0x210:  mov    %eax,(%esp)
088b1d49 +0x213:  call   088b2356 <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x459>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x459
088b1d4e +0x218:  sub    $0x4,%esp
088b1d51 +0x21b:  jmp    088b1b7a <+0x44>
088b1d56 +0x220:  mov    -0x44(%ebp),%eax
088b1d59 +0x223:  mov    (%eax),%ebx
088b1d5b +0x225:  lea    -0x38(%ebp),%eax
088b1d5e +0x228:  mov    %eax,(%esp)
088b1d61 +0x22b:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
088b1d66 +0x230:  mov    %ebx,0x8(%esp)
088b1d6a +0x234:  mov    %eax,0x4(%esp)
088b1d6e +0x238:  movl   $"%s duplicate grade:%d",(%esp)
088b1d75 +0x23f:  call   0807db60 <_init+0x458>
088b1d7a +0x244:  mov    $0xfffffffe,%ebx
088b1d7f +0x249:  jmp    088b1da9 <+0x273>
088b1d81 +0x24b:  nop
088b1d82 +0x24c:  call   088bc054 <_Z20unloadRDARScriptFilev>  ; unloadRDARScriptFile()
088b1d87 +0x251:  mov    $0x0,%ebx
088b1d8c +0x256:  jmp    088b1da9 <+0x273>
088b1d8e +0x258:  mov    %edx,%ebx
088b1d90 +0x25a:  mov    %eax,%esi
088b1d92 +0x25c:  lea    -0x38(%ebp),%eax
088b1d95 +0x25f:  mov    %eax,(%esp)
088b1d98 +0x262:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088b1d9d +0x267:  mov    %esi,%eax
088b1d9f +0x269:  mov    %ebx,%edx
088b1da1 +0x26b:  mov    %eax,(%esp)
088b1da4 +0x26e:  call   08ae3750 <_Unwind_Resume>
088b1da9 +0x273:  lea    -0x38(%ebp),%eax
088b1dac +0x276:  mov    %eax,(%esp)
088b1daf +0x279:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088b1db4 +0x27e:  mov    %ebx,%eax
088b1db6 +0x280:  lea    -0xc(%ebp),%esp
088b1db9 +0x283:  add    $0x0,%esp
088b1dbc +0x286:  pop    %ebx
088b1dbd +0x287:  pop    %esi
088b1dbe +0x288:  pop    %edi
088b1dbf +0x289:  pop    %ebp
088b1dc0 +0x28a:  ret
088b1dc1 +0x28b:  nop
```

## 反编译 C

```c
// ARAD::SCRIPT::AvatarConvert::loadScript @ 0x88b1b36

/* ARAD::SCRIPT::AvatarConvert::loadScript() */

undefined4 ARAD::SCRIPT::AvatarConvert::loadScript(void)

{
  char cVar1;
  ConvertResult *this;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  ConvertResult *pCVar6;
  byte bVar7;
  undefined4 local_50;
  undefined2 local_4c;
  short local_4a;
  ConvertResult *local_48;
  int local_44;
  bool local_3e;
  bool local_3d;
  string local_3c [4];
  map<int,ARAD::SCRIPT::AvatarConvert::ConvertResult*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>>
  local_38 [4];
  _Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>> local_34 [4];
  pair local_30 [8];
  pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*> local_28 [8];
  int local_20;
  
  bVar7 = 0;
  cVar1 = loadRDARScriptFile("Etc/EmblemRenewal/","avatar_convert_jpn.etc");
  if (cVar1 == '\x01') {
    std::string::string(local_3c);
    local_3d = false;
    local_3e = false;
                    /* try { // try from 088b1b88 to 088b1baa has its CatchHandler @ 088b1d8e */
    while (cVar1 = ScanType(local_3c,true), cVar1 == '\x01') {
      local_44 = 0;
      this = operator_new(0x24);
      pCVar6 = this;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pCVar6 = 0;
        pCVar6 = pCVar6 + (uint)bVar7 * -8 + 4;
      }
      *pCVar6 = (ConvertResult)0x0;
                    /* try { // try from 088b1bc9 to 088b1bcd has its CatchHandler @ 088b1bd0 */
      ConvertResult::ConvertResult(this);
      local_48 = this;
                    /* try { // try from 088b1bf4 to 088b1d86 has its CatchHandler @ 088b1d8e */
      uVar5 = ScanInt((bool *)0x0);
      *(undefined4 *)this = uVar5;
      local_20 = ScanInt((bool *)0x0);
      local_48[0x20] = (ConvertResult)(local_20 == 1);
      while ((local_50 = ScanTypeOrInt(&local_3d,local_3c,&local_3e,true), local_3d == false &&
             (local_3e == true))) {
        local_4c = ScanInt((bool *)0x0);
        local_4a = ScanInt((bool *)0x0);
        std::
        vector<ARAD::SCRIPT::AvatarConvert::GetInfo,std::allocator<ARAD::SCRIPT::AvatarConvert::GetInfo>>
        ::push_back((vector<ARAD::SCRIPT::AvatarConvert::GetInfo,std::allocator<ARAD::SCRIPT::AvatarConvert::GetInfo>>
                     *)(local_48 + 8),(GetInfo *)&local_50);
        local_44 = local_4a + local_44;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)(local_48 + 0x14),&local_44);
      }
      if (local_3d != false) {
        std::
        map<int,ARAD::SCRIPT::AvatarConvert::ConvertResult*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>>
        ::end(local_38);
        std::
        map<int,ARAD::SCRIPT::AvatarConvert::ConvertResult*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>>
        ::find((int *)local_34);
        cVar1 = std::
                _Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>
                ::operator==(local_34,(_Rb_tree_iterator *)local_38);
        pCVar6 = local_48;
        if (cVar1 == '\0') {
          uVar5 = *(undefined4 *)local_48;
          uVar3 = std::string::c_str(local_3c);
          printf("%s duplicate grade:%d",uVar3,uVar5);
          uVar5 = 0xfffffffe;
          goto LAB_088b1da9;
        }
        puVar2 = (undefined4 *)std::vector<int,std::allocator<int>>::back();
        *(undefined4 *)(pCVar6 + 4) = *puVar2;
        std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>::
        pair<int&,ARAD::SCRIPT::AvatarConvert::ConvertResult*&>(local_28,(int *)local_48,&local_48);
        std::
        map<int,ARAD::SCRIPT::AvatarConvert::ConvertResult*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>>
        ::insert(local_30);
      }
    }
    unloadRDARScriptFile();
    uVar5 = 0;
LAB_088b1da9:
    std::string::~string(local_3c);
  }
  else {
    uVar5 = 0xffffffff;
  }
  return uVar5;
}
```
