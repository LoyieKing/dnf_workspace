# freeze

`_ZN16StringDictionary6freezeEv`

`StringDictionary::freeze()`

| 类 | 地址 |
|---|---|
| `StringDictionary` | `0x08ab240e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab240e  _ZN16StringDictionary6freezeEv
#           StringDictionary::freeze()
# range [0x08ab240e, 0x08ab2527]
08ab240e +0x000:  push   %ebp
08ab240f +0x001:  mov    %esp,%ebp
08ab2411 +0x003:  push   %esi
08ab2412 +0x004:  push   %ebx
08ab2413 +0x005:  sub    $0x40,%esp
08ab2416 +0x008:  mov    0x8(%ebp),%eax
08ab2419 +0x00b:  lea    0x14(%eax),%edx
08ab241c +0x00e:  lea    -0x1c(%ebp),%eax
08ab241f +0x011:  mov    %edx,0x4(%esp)
08ab2423 +0x015:  mov    %eax,(%esp)
08ab2426 +0x018:  call   08ab2a94 <_ZN16StringDictionary9addStringEPKc+0x322>  ; StringDictionary::addString(char const*)+0x322
08ab242b +0x01d:  sub    $0x4,%esp
08ab242e +0x020:  mov    0x8(%ebp),%eax
08ab2431 +0x023:  lea    0x14(%eax),%edx
08ab2434 +0x026:  lea    -0x18(%ebp),%eax
08ab2437 +0x029:  mov    %edx,0x4(%esp)
08ab243b +0x02d:  mov    %eax,(%esp)
08ab243e +0x030:  call   08ab2a70 <_ZN16StringDictionary9addStringEPKc+0x2fe>  ; StringDictionary::addString(char const*)+0x2fe
08ab2443 +0x035:  sub    $0x4,%esp
08ab2446 +0x038:  mov    -0x1c(%ebp),%eax
08ab2449 +0x03b:  mov    %eax,0x4(%esp)
08ab244d +0x03f:  mov    -0x18(%ebp),%eax
08ab2450 +0x042:  mov    %eax,(%esp)
08ab2453 +0x045:  call   08ab2aba <_ZN16StringDictionary9addStringEPKc+0x348>  ; StringDictionary::addString(char const*)+0x348
08ab2458 +0x04a:  movl   $0x0,-0xc(%ebp)
08ab245f +0x051:  jmp    08ab24e8 <+0xda>
08ab2464 +0x056:  movl   $0x0,-0x28(%ebp)
08ab246b +0x05d:  movl   $0x0,-0x24(%ebp)
08ab2472 +0x064:  movl   $0x0,-0x20(%ebp)
08ab2479 +0x06b:  mov    -0xc(%ebp),%eax
08ab247c +0x06e:  shl    $0x18,%eax
08ab247f +0x071:  mov    %eax,-0x28(%ebp)
08ab2482 +0x074:  mov    -0xc(%ebp),%esi
08ab2485 +0x077:  mov    0x8(%ebp),%eax
08ab2488 +0x07a:  lea    0x14(%eax),%edx
08ab248b +0x07d:  lea    -0x14(%ebp),%eax
08ab248e +0x080:  mov    %edx,0x4(%esp)
08ab2492 +0x084:  mov    %eax,(%esp)
08ab2495 +0x087:  call   08ab2a94 <_ZN16StringDictionary9addStringEPKc+0x322>  ; StringDictionary::addString(char const*)+0x322
08ab249a +0x08c:  sub    $0x4,%esp
08ab249d +0x08f:  mov    0x8(%ebp),%eax
08ab24a0 +0x092:  lea    0x14(%eax),%edx
08ab24a3 +0x095:  lea    -0x10(%ebp),%eax
08ab24a6 +0x098:  mov    %edx,0x4(%esp)
08ab24aa +0x09c:  mov    %eax,(%esp)
08ab24ad +0x09f:  call   08ab2a70 <_ZN16StringDictionary9addStringEPKc+0x2fe>  ; StringDictionary::addString(char const*)+0x2fe
08ab24b2 +0x0a4:  sub    $0x4,%esp
08ab24b5 +0x0a7:  mov    0x8(%ebp),%ebx
08ab24b8 +0x0aa:  add    $0x8,%esi
08ab24bb +0x0ad:  lea    -0x2c(%ebp),%eax
08ab24be +0x0b0:  lea    -0x28(%ebp),%edx
08ab24c1 +0x0b3:  mov    %edx,0xc(%esp)
08ab24c5 +0x0b7:  mov    -0x14(%ebp),%edx
08ab24c8 +0x0ba:  mov    %edx,0x8(%esp)
08ab24cc +0x0be:  mov    -0x10(%ebp),%edx
08ab24cf +0x0c1:  mov    %edx,0x4(%esp)
08ab24d3 +0x0c5:  mov    %eax,(%esp)
08ab24d6 +0x0c8:  call   08ab2b1c <_ZN16StringDictionary9addStringEPKc+0x3aa>  ; StringDictionary::addString(char const*)+0x3aa
08ab24db +0x0cd:  sub    $0x4,%esp
08ab24de +0x0d0:  mov    -0x2c(%ebp),%eax
08ab24e1 +0x0d3:  mov    %eax,(%ebx,%esi,4)
08ab24e4 +0x0d6:  addl   $0x1,-0xc(%ebp)
08ab24e8 +0x0da:  cmpl   $0xff,-0xc(%ebp)
08ab24ef +0x0e1:  setbe  %al
08ab24f2 +0x0e4:  test   %al,%al
08ab24f4 +0x0e6:  jne    08ab2464 <+0x56>
08ab24fa +0x0ec:  mov    0x8(%ebp),%eax
08ab24fd +0x0ef:  lea    0x14(%eax),%edx
08ab2500 +0x0f2:  mov    0x8(%ebp),%ebx
08ab2503 +0x0f5:  lea    -0x2c(%ebp),%eax
08ab2506 +0x0f8:  mov    %edx,0x4(%esp)
08ab250a +0x0fc:  mov    %eax,(%esp)
08ab250d +0x0ff:  call   08ab2a94 <_ZN16StringDictionary9addStringEPKc+0x322>  ; StringDictionary::addString(char const*)+0x322
08ab2512 +0x104:  sub    $0x4,%esp
08ab2515 +0x107:  mov    -0x2c(%ebp),%eax
08ab2518 +0x10a:  mov    %eax,0x420(%ebx)
08ab251e +0x110:  lea    -0x8(%ebp),%esp
08ab2521 +0x113:  add    $0x0,%esp
08ab2524 +0x116:  pop    %ebx
08ab2525 +0x117:  pop    %esi
08ab2526 +0x118:  pop    %ebp
08ab2527 +0x119:  ret
```

## 反编译 C

```c
// StringDictionary::freeze @ 0x8ab240e

/* StringDictionary::freeze() */

void __thiscall StringDictionary::freeze(StringDictionary *this)

{
  uint uVar1;
  StringDictionary **ppSVar2;
  int local_50;
  StringDictionary *local_4c [2];
  int aiStack_44 [5];
  undefined4 local_30;
  int local_2c [3];
  undefined4 local_20;
  StringDictionary *local_1c;
  int local_18;
  undefined4 local_14;
  uint local_10;
  
  local_4c[1] = this + 0x14;
  local_4c[0] = (StringDictionary *)(local_2c + 3);
  std::vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>>::end();
  local_4c[1] = this + 0x14;
  local_4c[0] = (StringDictionary *)&local_1c;
  std::vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>>::begin
            ();
  ppSVar2 = local_4c;
  local_4c[1] = (StringDictionary *)local_20;
  local_4c[0] = local_1c;
  std::
  sort<__gnu_cxx::__normal_iterator<StringDictionary::StringEntity*,std::vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>>>>
            ();
  for (local_10 = 0; uVar1 = local_10, local_10 < 0x100; local_10 = local_10 + 1) {
    local_2c[1] = 0;
    local_2c[2] = 0;
    local_2c[0] = local_10 << 0x18;
    ppSVar2[1] = this + 0x14;
    *ppSVar2 = (StringDictionary *)&local_18;
    ppSVar2[-1] = (StringDictionary *)0x8ab249a;
    std::vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>>::end
              ();
    ppSVar2[1] = this + 0x14;
    *ppSVar2 = (StringDictionary *)&local_14;
    ppSVar2[-1] = (StringDictionary *)0x8ab24b2;
    std::vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>>::
    begin();
    ppSVar2[3] = (StringDictionary *)local_2c;
    ppSVar2[2] = (StringDictionary *)local_18;
    ppSVar2[1] = (StringDictionary *)local_14;
    *ppSVar2 = (StringDictionary *)&local_30;
    ppSVar2[-1] = (StringDictionary *)0x8ab24db;
    std::
    lower_bound<__gnu_cxx::__normal_iterator<StringDictionary::StringEntity*,std::vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>>>,StringDictionary::StringEntity>
              ();
    ppSVar2 = ppSVar2 + -1;
    *(undefined4 *)(this + (uVar1 + 8) * 4) = local_30;
  }
  ppSVar2[1] = this + 0x14;
  *ppSVar2 = (StringDictionary *)&local_30;
  ppSVar2[-1] = (StringDictionary *)0x8ab2512;
  std::vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>>::end();
  *(undefined4 *)(this + 0x420) = local_30;
  return;
}
```
