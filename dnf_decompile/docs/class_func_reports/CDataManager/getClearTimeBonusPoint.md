# getClearTimeBonusPoint

`_ZN12CDataManager22getClearTimeBonusPointEii`

`CDataManager::getClearTimeBonusPoint(int, int)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08363ac8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08363ac8  _ZN12CDataManager22getClearTimeBonusPointEii
#           CDataManager::getClearTimeBonusPoint(int, int)
# range [0x08363ac8, 0x08363c03]
08363ac8 +0x000:  push   %ebp
08363ac9 +0x001:  mov    %esp,%ebp
08363acb +0x003:  sub    $0x48,%esp
08363ace +0x006:  movl   $0x0,-0x10(%ebp)
08363ad5 +0x00d:  movl   $0x0,-0xc(%ebp)
08363adc +0x014:  cmpl   $0x0,0xc(%ebp)
08363ae0 +0x018:  je     08363ae8 <+0x20>
08363ae2 +0x01a:  cmpl   $0x0,0x10(%ebp)
08363ae6 +0x01e:  jne    08363af0 <+0x28>
08363ae8 +0x020:  mov    -0x10(%ebp),%eax
08363aeb +0x023:  jmp    08363c02 <+0x13a>
08363af0 +0x028:  lea    -0x20(%ebp),%eax
08363af3 +0x02b:  mov    %eax,(%esp)
08363af6 +0x02e:  call   08370d8c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xad58>  ; global constructors keyed to CServerEvent::m_nExpRate+0xad58
08363afb +0x033:  lea    -0x28(%ebp),%eax
08363afe +0x036:  mov    %eax,(%esp)
08363b01 +0x039:  call   08370d8c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xad58>  ; global constructors keyed to CServerEvent::m_nExpRate+0xad58
08363b06 +0x03e:  mov    0x10(%ebp),%eax
08363b09 +0x041:  mov    0xc(%ebp),%edx
08363b0c +0x044:  mov    %edx,%ecx
08363b0e +0x046:  sub    %eax,%ecx
08363b10 +0x048:  mov    %ecx,%eax
08363b12 +0x04a:  mov    %eax,-0xc(%ebp)
08363b15 +0x04d:  mov    0x8(%ebp),%eax
08363b18 +0x050:  lea    0x5120(%eax),%edx
08363b1e +0x056:  lea    -0x2c(%ebp),%eax
08363b21 +0x059:  mov    %edx,0x4(%esp)
08363b25 +0x05d:  mov    %eax,(%esp)
08363b28 +0x060:  call   08395060 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24b00>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24b00
08363b2d +0x065:  sub    $0x4,%esp
08363b30 +0x068:  mov    0x8(%ebp),%eax
08363b33 +0x06b:  lea    0x5120(%eax),%edx
08363b39 +0x071:  lea    -0x30(%ebp),%eax
08363b3c +0x074:  mov    %edx,0x4(%esp)
08363b40 +0x078:  mov    %eax,(%esp)
08363b43 +0x07b:  call   08395084 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24b24>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24b24
08363b48 +0x080:  sub    $0x4,%esp
08363b4b +0x083:  jmp    08363bdf <+0x117>
08363b50 +0x088:  lea    -0x2c(%ebp),%eax
08363b53 +0x08b:  mov    %eax,(%esp)
08363b56 +0x08e:  call   083950d6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24b76>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24b76
08363b5b +0x093:  mov    0x4(%eax),%edx
08363b5e +0x096:  mov    (%eax),%eax
08363b60 +0x098:  mov    %eax,-0x20(%ebp)
08363b63 +0x09b:  mov    %edx,-0x1c(%ebp)
08363b66 +0x09e:  mov    -0x20(%ebp),%eax
08363b69 +0x0a1:  cmp    -0xc(%ebp),%eax
08363b6c +0x0a4:  jle    08363bb6 <+0xee>
08363b6e +0x0a6:  mov    0x8(%ebp),%eax
08363b71 +0x0a9:  lea    0x5120(%eax),%edx
08363b77 +0x0af:  lea    -0x18(%ebp),%eax
08363b7a +0x0b2:  mov    %edx,0x4(%esp)
08363b7e +0x0b6:  mov    %eax,(%esp)
08363b81 +0x0b9:  call   08395060 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24b00>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24b00
08363b86 +0x0be:  sub    $0x4,%esp
08363b89 +0x0c1:  lea    -0x18(%ebp),%eax
08363b8c +0x0c4:  mov    %eax,0x4(%esp)
08363b90 +0x0c8:  lea    -0x2c(%ebp),%eax
08363b93 +0x0cb:  mov    %eax,(%esp)
08363b96 +0x0ce:  call   083950e0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24b80>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24b80
08363b9b +0x0d3:  test   %al,%al
08363b9d +0x0d5:  je     08363bab <+0xe3>
08363b9f +0x0d7:  movl   $0x0,-0x10(%ebp)
08363ba6 +0x0de:  mov    -0x10(%ebp),%eax
08363ba9 +0x0e1:  jmp    08363c02 <+0x13a>
08363bab +0x0e3:  mov    -0x24(%ebp),%eax
08363bae +0x0e6:  mov    %eax,-0x10(%ebp)
08363bb1 +0x0e9:  mov    -0x10(%ebp),%eax
08363bb4 +0x0ec:  jmp    08363c02 <+0x13a>
08363bb6 +0x0ee:  mov    -0x20(%ebp),%eax
08363bb9 +0x0f1:  mov    -0x1c(%ebp),%edx
08363bbc +0x0f4:  mov    %eax,-0x28(%ebp)
08363bbf +0x0f7:  mov    %edx,-0x24(%ebp)
08363bc2 +0x0fa:  lea    -0x14(%ebp),%eax
08363bc5 +0x0fd:  movl   $0x0,0x8(%esp)
08363bcd +0x105:  lea    -0x2c(%ebp),%edx
08363bd0 +0x108:  mov    %edx,0x4(%esp)
08363bd4 +0x10c:  mov    %eax,(%esp)
08363bd7 +0x10f:  call   0839510c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24bac>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24bac
08363bdc +0x114:  sub    $0x4,%esp
08363bdf +0x117:  lea    -0x30(%ebp),%eax
08363be2 +0x11a:  mov    %eax,0x4(%esp)
08363be6 +0x11e:  lea    -0x2c(%ebp),%eax
08363be9 +0x121:  mov    %eax,(%esp)
08363bec +0x124:  call   083950aa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24b4a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24b4a
08363bf1 +0x129:  test   %al,%al
08363bf3 +0x12b:  jne    08363b50 <+0x88>
08363bf9 +0x131:  mov    -0x24(%ebp),%eax
08363bfc +0x134:  mov    %eax,-0x10(%ebp)
08363bff +0x137:  mov    -0x10(%ebp),%eax
08363c02 +0x13a:  leave
08363c03 +0x13b:  ret
```

## 反编译 C

```c
// CDataManager::getClearTimeBonusPoint @ 0x8363ac8

/* CDataManager::getClearTimeBonusPoint(int, int) */

int __thiscall CDataManager::getClearTimeBonusPoint(CDataManager *this,int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  __normal_iterator local_34 [4];
  __normal_iterator<stBonusPointValues*,std::vector<stBonusPointValues,std::allocator<stBonusPointValues>>>
  local_30 [4];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  __normal_iterator local_1c [4];
  __normal_iterator<stBonusPointValues*,std::vector<stBonusPointValues,std::allocator<stBonusPointValues>>>
  local_18 [4];
  undefined4 local_14;
  int local_10;
  
  local_14 = 0;
  local_10 = 0;
  if ((param_1 == 0) || (param_2 == 0)) {
    local_28 = 0;
  }
  else {
    stBonusPointValues::stBonusPointValues((stBonusPointValues *)&local_24);
    stBonusPointValues::stBonusPointValues((stBonusPointValues *)&local_2c);
    local_10 = param_1 - param_2;
    std::vector<stBonusPointValues,std::allocator<stBonusPointValues>>::begin();
    std::vector<stBonusPointValues,std::allocator<stBonusPointValues>>::end();
    while (bVar1 = __gnu_cxx::operator!=(local_30,local_34), bVar1) {
      piVar2 = (int *)__gnu_cxx::
                      __normal_iterator<stBonusPointValues*,std::vector<stBonusPointValues,std::allocator<stBonusPointValues>>>
                      ::operator*(local_30);
      local_20 = piVar2[1];
      local_24 = *piVar2;
      if (local_10 < local_24) {
        std::vector<stBonusPointValues,std::allocator<stBonusPointValues>>::begin();
        bVar1 = __gnu_cxx::operator==(local_30,local_1c);
        if (!bVar1) {
          return local_28;
        }
        return 0;
      }
      local_2c = local_24;
      local_28 = local_20;
      __gnu_cxx::
      __normal_iterator<stBonusPointValues*,std::vector<stBonusPointValues,std::allocator<stBonusPointValues>>>
      ::operator++(local_18,(int)local_30);
    }
  }
  return local_28;
}
```
