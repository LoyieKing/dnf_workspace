# getSeriaRoomAniDecoRewardItem

`_ZN12CDataManager29getSeriaRoomAniDecoRewardItemEi`

`CDataManager::getSeriaRoomAniDecoRewardItem(int)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08365d26` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08365d26  _ZN12CDataManager29getSeriaRoomAniDecoRewardItemEi
#           CDataManager::getSeriaRoomAniDecoRewardItem(int)
# range [0x08365d26, 0x08365de3]
08365d26 +0x00:  push   %ebp
08365d27 +0x01:  mov    %esp,%ebp
08365d29 +0x03:  sub    $0x28,%esp
08365d2c +0x06:  mov    0x8(%ebp),%eax
08365d2f +0x09:  add    $0x4c50,%eax
08365d34 +0x0e:  mov    %eax,(%esp)
08365d37 +0x11:  call   08395dae <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2584e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2584e
08365d3c +0x16:  test   %al,%al
08365d3e +0x18:  je     08365d4a <+0x24>
08365d40 +0x1a:  mov    $0x0,%eax
08365d45 +0x1f:  jmp    08365de1 <+0xbb>
08365d4a +0x24:  mov    0x8(%ebp),%eax
08365d4d +0x27:  lea    0x4c50(%eax),%edx
08365d53 +0x2d:  lea    -0x10(%ebp),%eax
08365d56 +0x30:  mov    %edx,0x4(%esp)
08365d5a +0x34:  mov    %eax,(%esp)
08365d5d +0x37:  call   08395df2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25892>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25892
08365d62 +0x3c:  sub    $0x4,%esp
08365d65 +0x3f:  mov    0x8(%ebp),%eax
08365d68 +0x42:  lea    0x4c50(%eax),%edx
08365d6e +0x48:  lea    -0x14(%ebp),%eax
08365d71 +0x4b:  mov    %edx,0x4(%esp)
08365d75 +0x4f:  mov    %eax,(%esp)
08365d78 +0x52:  call   08395e16 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x258b6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x258b6
08365d7d +0x57:  sub    $0x4,%esp
08365d80 +0x5a:  jmp    08365dc6 <+0xa0>
08365d82 +0x5c:  lea    -0x10(%ebp),%eax
08365d85 +0x5f:  mov    %eax,(%esp)
08365d88 +0x62:  call   08395e9c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2593c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2593c
08365d8d +0x67:  mov    (%eax),%eax
08365d8f +0x69:  cmp    0xc(%ebp),%eax
08365d92 +0x6c:  sete   %al
08365d95 +0x6f:  test   %al,%al
08365d97 +0x71:  je     08365da9 <+0x83>
08365d99 +0x73:  lea    -0x10(%ebp),%eax
08365d9c +0x76:  mov    %eax,(%esp)
08365d9f +0x79:  call   08395e9c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2593c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2593c
08365da4 +0x7e:  mov    0x4(%eax),%eax
08365da7 +0x81:  jmp    08365de1 <+0xbb>
08365da9 +0x83:  lea    -0xc(%ebp),%eax
08365dac +0x86:  movl   $0x0,0x8(%esp)
08365db4 +0x8e:  lea    -0x10(%ebp),%edx
08365db7 +0x91:  mov    %edx,0x4(%esp)
08365dbb +0x95:  mov    %eax,(%esp)
08365dbe +0x98:  call   08395e68 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25908>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25908
08365dc3 +0x9d:  sub    $0x4,%esp
08365dc6 +0xa0:  lea    -0x14(%ebp),%eax
08365dc9 +0xa3:  mov    %eax,0x4(%esp)
08365dcd +0xa7:  lea    -0x10(%ebp),%eax
08365dd0 +0xaa:  mov    %eax,(%esp)
08365dd3 +0xad:  call   08395e3c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x258dc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x258dc
08365dd8 +0xb2:  test   %al,%al
08365dda +0xb4:  jne    08365d82 <+0x5c>
08365ddc +0xb6:  mov    $0x0,%eax
08365de1 +0xbb:  leave
08365de2 +0xbc:  ret
08365de3 +0xbd:  nop
```

## 反编译 C

```c
// CDataManager::getSeriaRoomAniDecoRewardItem @ 0x8365d26

/* CDataManager::getSeriaRoomAniDecoRewardItem(int) */

undefined4 __thiscall CDataManager::getSeriaRoomAniDecoRewardItem(CDataManager *this,int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  __normal_iterator local_18 [4];
  __normal_iterator<seriaRoomDecoRewardInfo*,std::vector<seriaRoomDecoRewardInfo,std::allocator<seriaRoomDecoRewardInfo>>>
  local_14 [4];
  __normal_iterator<seriaRoomDecoRewardInfo*,std::vector<seriaRoomDecoRewardInfo,std::allocator<seriaRoomDecoRewardInfo>>>
  local_10 [12];
  
  cVar1 = std::vector<seriaRoomDecoRewardInfo,std::allocator<seriaRoomDecoRewardInfo>>::empty();
  if (cVar1 == '\0') {
    std::vector<seriaRoomDecoRewardInfo,std::allocator<seriaRoomDecoRewardInfo>>::begin();
    std::vector<seriaRoomDecoRewardInfo,std::allocator<seriaRoomDecoRewardInfo>>::end();
    while (bVar2 = __gnu_cxx::operator!=(local_14,local_18), bVar2) {
      piVar3 = (int *)__gnu_cxx::
                      __normal_iterator<seriaRoomDecoRewardInfo*,std::vector<seriaRoomDecoRewardInfo,std::allocator<seriaRoomDecoRewardInfo>>>
                      ::operator->(local_14);
      if (*piVar3 == param_1) {
        iVar4 = __gnu_cxx::
                __normal_iterator<seriaRoomDecoRewardInfo*,std::vector<seriaRoomDecoRewardInfo,std::allocator<seriaRoomDecoRewardInfo>>>
                ::operator->(local_14);
        return *(undefined4 *)(iVar4 + 4);
      }
      __gnu_cxx::
      __normal_iterator<seriaRoomDecoRewardInfo*,std::vector<seriaRoomDecoRewardInfo,std::allocator<seriaRoomDecoRewardInfo>>>
      ::operator++(local_10,(int)local_14);
    }
  }
  return 0;
}
```
