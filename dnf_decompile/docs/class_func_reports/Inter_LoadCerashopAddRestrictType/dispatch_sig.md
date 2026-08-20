# dispatch_sig

`_ZN33Inter_LoadCerashopAddRestrictType12dispatch_sigEP5CUserPci`

`Inter_LoadCerashopAddRestrictType::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadCerashopAddRestrictType` | `0x080e2104` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e2104  _ZN33Inter_LoadCerashopAddRestrictType12dispatch_sigEP5CUserPci
#           Inter_LoadCerashopAddRestrictType::dispatch_sig(CUser*, char*, int)
# range [0x080e2104, 0x080e2219]
080e2104 +0x000:  push   %ebp
080e2105 +0x001:  mov    %esp,%ebp
080e2107 +0x003:  sub    $0x48,%esp
080e210a +0x006:  cmpl   $0x0,0xc(%ebp)
080e210e +0x00a:  je     080e2116 <+0x12>
080e2110 +0x00c:  cmpl   $0x0,0x10(%ebp)
080e2114 +0x010:  jne    080e215e <+0x5a>
080e2116 +0x012:  movl   $0x5,0xc(%esp)
080e211e +0x01a:  movl   $0x200,0x8(%esp)
080e2126 +0x022:  movl   $&_ZZN33Inter_LoadCerashopAddRestrictType12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
080e212e +0x02a:  lea    -0x30(%ebp),%eax
080e2131 +0x02d:  mov    %eax,(%esp)
080e2134 +0x030:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
080e2139 +0x035:  movl   $&_ZZN33Inter_LoadCerashopAddRestrictType12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
080e2141 +0x03d:  movl   $"[%s] pUser or p is null.",0x4(%esp)
080e2149 +0x045:  lea    -0x30(%ebp),%eax
080e214c +0x048:  mov    %eax,(%esp)
080e214f +0x04b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
080e2154 +0x050:  mov    $0x201,%eax
080e2159 +0x055:  jmp    080e2218 <+0x114>
080e215e +0x05a:  mov    0x10(%ebp),%eax
080e2161 +0x05d:  mov    %eax,-0x10(%ebp)
080e2164 +0x060:  cmpl   $0x0,-0x10(%ebp)
080e2168 +0x064:  jne    080e21af <+0xab>
080e216a +0x066:  movl   $0x5,0xc(%esp)
080e2172 +0x06e:  movl   $0x207,0x8(%esp)
080e217a +0x076:  movl   $&_ZZN33Inter_LoadCerashopAddRestrictType12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
080e2182 +0x07e:  lea    -0x20(%ebp),%eax
080e2185 +0x081:  mov    %eax,(%esp)
080e2188 +0x084:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
080e218d +0x089:  movl   $&_ZZN33Inter_LoadCerashopAddRestrictType12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
080e2195 +0x091:  movl   $"[%s] internal data is null.",0x4(%esp)
080e219d +0x099:  lea    -0x20(%ebp),%eax
080e21a0 +0x09c:  mov    %eax,(%esp)
080e21a3 +0x09f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
080e21a8 +0x0a4:  mov    $0x208,%eax
080e21ad +0x0a9:  jmp    080e2218 <+0x114>
080e21af +0x0ab:  mov    0xc(%ebp),%eax
080e21b2 +0x0ae:  add    $0x8d1e4,%eax
080e21b7 +0x0b3:  mov    %eax,-0xc(%ebp)
080e21ba +0x0b6:  mov    -0x10(%ebp),%eax
080e21bd +0x0b9:  mov    0x4(%eax),%eax
080e21c0 +0x0bc:  test   %eax,%eax
080e21c2 +0x0be:  je     080e21cb <+0xc7>
080e21c4 +0x0c0:  cmp    $0x1,%eax
080e21c7 +0x0c3:  je     080e21e9 <+0xe5>
080e21c9 +0x0c5:  jmp    080e2208 <+0x104>
080e21cb +0x0c7:  mov    -0xc(%ebp),%eax
080e21ce +0x0ca:  mov    -0xc(%ebp),%edx
080e21d1 +0x0cd:  lea    0x30(%edx),%ecx
080e21d4 +0x0d0:  mov    -0x10(%ebp),%edx
080e21d7 +0x0d3:  mov    %edx,0x8(%esp)
080e21db +0x0d7:  mov    %eax,0x4(%esp)
080e21df +0x0db:  mov    %ecx,(%esp)
080e21e2 +0x0de:  call   080e142a <_ZN19CerashopAddRestrict7Manager11LoadProcessERSt3mapIjjSt4lessIjESaISt4pairIKjjEEERS1_IjPNS_10paramDailyES3_SaIS4_IS5_SB_EEEP35SIG_LOAD_CERASHOP_ADD_RESTRICT_TYPE>  ; CerashopAddRestrict::Manager::LoadProcess(std::map<unsigned int, unsigned int, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned int> > >&, std::map<unsigned int, CerashopAddRestrict::paramDaily*, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, CerashopAddRestrict::paramDaily*> > >&, SIG_LOAD_CERASHOP_ADD_RESTRICT_TYPE*)
080e21e7 +0x0e3:  jmp    080e2208 <+0x104>
080e21e9 +0x0e5:  mov    -0xc(%ebp),%eax
080e21ec +0x0e8:  lea    0x18(%eax),%ecx
080e21ef +0x0eb:  mov    -0xc(%ebp),%eax
080e21f2 +0x0ee:  lea    0x48(%eax),%edx
080e21f5 +0x0f1:  mov    -0x10(%ebp),%eax
080e21f8 +0x0f4:  mov    %eax,0x8(%esp)
080e21fc +0x0f8:  mov    %ecx,0x4(%esp)
080e2200 +0x0fc:  mov    %edx,(%esp)
080e2203 +0x0ff:  call   080e142a <_ZN19CerashopAddRestrict7Manager11LoadProcessERSt3mapIjjSt4lessIjESaISt4pairIKjjEEERS1_IjPNS_10paramDailyES3_SaIS4_IS5_SB_EEEP35SIG_LOAD_CERASHOP_ADD_RESTRICT_TYPE>  ; CerashopAddRestrict::Manager::LoadProcess(std::map<unsigned int, unsigned int, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned int> > >&, std::map<unsigned int, CerashopAddRestrict::paramDaily*, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, CerashopAddRestrict::paramDaily*> > >&, SIG_LOAD_CERASHOP_ADD_RESTRICT_TYPE*)
080e2208 +0x104:  mov    0xc(%ebp),%eax
080e220b +0x107:  mov    %eax,(%esp)
080e220e +0x10a:  call   080e0dec <_ZN19CerashopAddRestrict7Manager14SendSyncPacketEP5CUser>  ; CerashopAddRestrict::Manager::SendSyncPacket(CUser*)
080e2213 +0x10f:  mov    $0x0,%eax
080e2218 +0x114:  leave
080e2219 +0x115:  ret
```

## 反编译 C

```c
// Inter_LoadCerashopAddRestrictType::dispatch_sig @ 0x80e2104

/* Inter_LoadCerashopAddRestrictType::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadCerashopAddRestrictType::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  int local_14;
  map *local_10;
  
  if ((param_2 == (char *)0x0) || (param_3 == 0)) {
    cMyTrace::cMyTrace(local_34,
                       "virtual int Inter_LoadCerashopAddRestrictType::dispatch_sig(CUser*, char*, int)"
                       ,0x200,5);
    cMyTrace::operator()
              (local_34,"[%s] pUser or p is null.",
               "virtual int Inter_LoadCerashopAddRestrictType::dispatch_sig(CUser*, char*, int)");
    uVar1 = 0x201;
  }
  else {
    local_14 = param_3;
    if (param_3 == 0) {
      cMyTrace::cMyTrace(local_24,
                         "virtual int Inter_LoadCerashopAddRestrictType::dispatch_sig(CUser*, char*, int)"
                         ,0x207,5);
      cMyTrace::operator()
                (local_24,"[%s] internal data is null.",
                 "virtual int Inter_LoadCerashopAddRestrictType::dispatch_sig(CUser*, char*, int)");
      uVar1 = 0x208;
    }
    else {
      local_10 = (map *)(param_2 + 0x8d1e4);
      if (*(int *)(param_3 + 4) == 0) {
        CerashopAddRestrict::Manager::LoadProcess
                  ((map *)(param_2 + 0x8d214),local_10,
                   (SIG_LOAD_CERASHOP_ADD_RESTRICT_TYPE *)param_3);
      }
      else if (*(int *)(param_3 + 4) == 1) {
        CerashopAddRestrict::Manager::LoadProcess
                  ((map *)(param_2 + 0x8d22c),(map *)(param_2 + 0x8d1fc),
                   (SIG_LOAD_CERASHOP_ADD_RESTRICT_TYPE *)param_3);
      }
      CerashopAddRestrict::Manager::SendSyncPacket((CUser *)param_2);
      uVar1 = 0;
    }
  }
  return uVar1;
}
```
