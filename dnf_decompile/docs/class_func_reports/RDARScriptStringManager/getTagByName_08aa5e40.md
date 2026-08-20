# getTagByName

`_ZNK23RDARScriptStringManager12getTagByNameEiPKwS1_b`

`RDARScriptStringManager::getTagByName(int, wchar_t const*, wchar_t const*, bool) const`

| 类 | 地址 |
|---|---|
| `RDARScriptStringManager` | `0x08aa5e40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08aa5e40  _ZNK23RDARScriptStringManager12getTagByNameEiPKwS1_b
#           RDARScriptStringManager::getTagByName(int, wchar_t const*, wchar_t const*, bool) const
# range [0x08aa5e40, 0x08aa60af]
08aa5e40 +0x000:  push   %ebp
08aa5e41 +0x001:  mov    %esp,%ebp
08aa5e43 +0x003:  push   %ebx
08aa5e44 +0x004:  sub    $0x44,%esp
08aa5e47 +0x007:  mov    0x18(%ebp),%eax
08aa5e4a +0x00a:  mov    %al,-0x2c(%ebp)
08aa5e4d +0x00d:  movl   $0xffffffff,-0x24(%ebp)
08aa5e54 +0x014:  mov    0xc(%ebp),%ebx
08aa5e57 +0x017:  mov    0x8(%ebp),%eax
08aa5e5a +0x01a:  add    $0x18,%eax
08aa5e5d +0x01d:  mov    %eax,(%esp)
08aa5e60 +0x020:  call   08aa68b2 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x194>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x194
08aa5e65 +0x025:  cmp    %eax,%ebx
08aa5e67 +0x027:  setb   %al
08aa5e6a +0x02a:  test   %al,%al
08aa5e6c +0x02c:  je     08aa6065 <+0x225>
08aa5e72 +0x032:  mov    0xc(%ebp),%eax
08aa5e75 +0x035:  mov    0x8(%ebp),%edx
08aa5e78 +0x038:  add    $0x18,%edx
08aa5e7b +0x03b:  mov    %eax,0x4(%esp)
08aa5e7f +0x03f:  mov    %edx,(%esp)
08aa5e82 +0x042:  call   08aa69ea <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x2cc>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x2cc
08aa5e87 +0x047:  mov    %eax,-0x20(%ebp)
08aa5e8a +0x04a:  mov    0x10(%ebp),%eax
08aa5e8d +0x04d:  mov    %eax,0x8(%esp)
08aa5e91 +0x051:  mov    0xc(%ebp),%eax
08aa5e94 +0x054:  mov    %eax,0x4(%esp)
08aa5e98 +0x058:  mov    0x8(%ebp),%eax
08aa5e9b +0x05b:  mov    %eax,(%esp)
08aa5e9e +0x05e:  call   08aa5cba <_ZNK23RDARScriptStringManager11getKeyIndexEiPKw>  ; RDARScriptStringManager::getKeyIndex(int, wchar_t const*) const
08aa5ea3 +0x063:  mov    %eax,-0x24(%ebp)
08aa5ea6 +0x066:  cmpl   $0xffffffff,-0x24(%ebp)
08aa5eaa +0x06a:  jne    08aa6007 <+0x1c7>
08aa5eb0 +0x070:  cmpl   $0x0,0x14(%ebp)
08aa5eb4 +0x074:  je     08aa5edb <+0x9b>
08aa5eb6 +0x076:  mov    0x14(%ebp),%eax
08aa5eb9 +0x079:  mov    (%eax),%eax
08aa5ebb +0x07b:  test   %eax,%eax
08aa5ebd +0x07d:  je     08aa5edb <+0x9b>
08aa5ebf +0x07f:  mov    0x14(%ebp),%eax
08aa5ec2 +0x082:  mov    %eax,0x8(%esp)
08aa5ec6 +0x086:  mov    0xc(%ebp),%eax
08aa5ec9 +0x089:  mov    %eax,0x4(%esp)
08aa5ecd +0x08d:  mov    0x8(%ebp),%eax
08aa5ed0 +0x090:  mov    %eax,(%esp)
08aa5ed3 +0x093:  call   08aa5cba <_ZNK23RDARScriptStringManager11getKeyIndexEiPKw>  ; RDARScriptStringManager::getKeyIndex(int, wchar_t const*) const
08aa5ed8 +0x098:  mov    %eax,-0x24(%ebp)
08aa5edb +0x09b:  movl   $0x0,-0x18(%ebp)
08aa5ee2 +0x0a2:  cmpl   $0xffffffff,-0x24(%ebp)
08aa5ee6 +0x0a6:  je     08aa5f01 <+0xc1>
08aa5ee8 +0x0a8:  mov    -0x20(%ebp),%eax
08aa5eeb +0x0ab:  mov    (%eax),%eax
08aa5eed +0x0ad:  mov    -0x24(%ebp),%edx
08aa5ef0 +0x0b0:  mov    %edx,0x4(%esp)
08aa5ef4 +0x0b4:  mov    %eax,(%esp)
08aa5ef7 +0x0b7:  call   08ab2628 <_ZNK16StringDictionary6getKeyEi>  ; StringDictionary::getKey(int) const
08aa5efc +0x0bc:  mov    %eax,-0x18(%ebp)
08aa5eff +0x0bf:  jmp    08aa5f12 <+0xd2>
08aa5f01 +0x0c1:  mov    0x8(%ebp),%eax
08aa5f04 +0x0c4:  add    $0x24,%eax
08aa5f07 +0x0c7:  mov    %eax,(%esp)
08aa5f0a +0x0ca:  call   0871c040 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6a24>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6a24
08aa5f0f +0x0cf:  mov    %eax,-0x18(%ebp)
08aa5f12 +0x0d2:  movl   $0x0,-0x14(%ebp)
08aa5f19 +0x0d9:  jmp    08aa5ff5 <+0x1b5>
08aa5f1e +0x0de:  mov    -0x14(%ebp),%eax
08aa5f21 +0x0e1:  mov    %eax,0xc(%esp)
08aa5f25 +0x0e5:  mov    -0x18(%ebp),%eax
08aa5f28 +0x0e8:  mov    %eax,0x8(%esp)
08aa5f2c +0x0ec:  movl   $"%s_%d",0x4(%esp)
08aa5f34 +0x0f4:  mov    %gs:0x0,%eax
08aa5f3a +0x0fa:  lea    -&_ZL12gTCharBuffer+0x9d18(%eax),%eax
08aa5f40 +0x100:  mov    %eax,(%esp)
08aa5f43 +0x103:  call   08aa69b4 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x296>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x296
08aa5f48 +0x108:  movb   $0x0,-0xd(%ebp)
08aa5f4c +0x10c:  movl   $0x0,-0xc(%ebp)
08aa5f53 +0x113:  jmp    08aa5f95 <+0x155>
08aa5f55 +0x115:  mov    -0x20(%ebp),%eax
08aa5f58 +0x118:  mov    (%eax),%eax
08aa5f5a +0x11a:  mov    -0xc(%ebp),%edx
08aa5f5d +0x11d:  mov    %edx,0x4(%esp)
08aa5f61 +0x121:  mov    %eax,(%esp)
08aa5f64 +0x124:  call   08ab2628 <_ZNK16StringDictionary6getKeyEi>  ; StringDictionary::getKey(int) const
08aa5f69 +0x129:  mov    %gs:0x0,%edx
08aa5f70 +0x130:  lea    -&_ZL12gTCharBuffer+0x9d18(%edx),%edx
08aa5f76 +0x136:  mov    %edx,0x4(%esp)
08aa5f7a +0x13a:  mov    %eax,(%esp)
08aa5f7d +0x13d:  call   0807e4e0 <_init+0xdd8>
08aa5f82 +0x142:  test   %eax,%eax
08aa5f84 +0x144:  sete   %al
08aa5f87 +0x147:  test   %al,%al
08aa5f89 +0x149:  je     08aa5f91 <+0x151>
08aa5f8b +0x14b:  movb   $0x1,-0xd(%ebp)
08aa5f8f +0x14f:  jmp    08aa5fac <+0x16c>
08aa5f91 +0x151:  addl   $0x1,-0xc(%ebp)
08aa5f95 +0x155:  mov    -0x20(%ebp),%eax
08aa5f98 +0x158:  mov    (%eax),%eax
08aa5f9a +0x15a:  mov    %eax,(%esp)
08aa5f9d +0x15d:  call   08ab2612 <_ZNK16StringDictionary8getCountEv>  ; StringDictionary::getCount() const
08aa5fa2 +0x162:  cmp    -0xc(%ebp),%eax
08aa5fa5 +0x165:  setg   %al
08aa5fa8 +0x168:  test   %al,%al
08aa5faa +0x16a:  jne    08aa5f55 <+0x115>
08aa5fac +0x16c:  movzbl -0xd(%ebp),%eax
08aa5fb0 +0x170:  xor    $0x1,%eax
08aa5fb3 +0x173:  test   %al,%al
08aa5fb5 +0x175:  je     08aa5ff1 <+0x1b1>
08aa5fb7 +0x177:  mov    0x10(%ebp),%edx
08aa5fba +0x17a:  mov    -0x20(%ebp),%eax
08aa5fbd +0x17d:  mov    (%eax),%eax
08aa5fbf +0x17f:  mov    %edx,0x8(%esp)
08aa5fc3 +0x183:  mov    %gs:0x0,%edx
08aa5fca +0x18a:  lea    -&_ZL12gTCharBuffer+0x9d18(%edx),%edx
08aa5fd0 +0x190:  mov    %edx,0x4(%esp)
08aa5fd4 +0x194:  mov    %eax,(%esp)
08aa5fd7 +0x197:  call   08ab2398 <_ZN16StringDictionary3addEPKcS1_>  ; StringDictionary::add(char const*, char const*)
08aa5fdc +0x19c:  mov    -0x20(%ebp),%eax
08aa5fdf +0x19f:  mov    (%eax),%eax
08aa5fe1 +0x1a1:  mov    %eax,(%esp)
08aa5fe4 +0x1a4:  call   08ab2612 <_ZNK16StringDictionary8getCountEv>  ; StringDictionary::getCount() const
08aa5fe9 +0x1a9:  sub    $0x1,%eax
08aa5fec +0x1ac:  mov    %eax,-0x24(%ebp)
08aa5fef +0x1af:  jmp    08aa6007 <+0x1c7>
08aa5ff1 +0x1b1:  addl   $0x1,-0x14(%ebp)
08aa5ff5 +0x1b5:  cmpl   $0x270f,-0x14(%ebp)
08aa5ffc +0x1bc:  setle  %al
08aa5fff +0x1bf:  test   %al,%al
08aa6001 +0x1c1:  jne    08aa5f1e <+0xde>
08aa6007 +0x1c7:  movl   $0x0,-0x1c(%ebp)
08aa600e +0x1ce:  cmpl   $0xffffffff,-0x24(%ebp)
08aa6012 +0x1d2:  je     08aa6065 <+0x225>
08aa6014 +0x1d4:  mov    -0x20(%ebp),%eax
08aa6017 +0x1d7:  mov    (%eax),%eax
08aa6019 +0x1d9:  mov    -0x24(%ebp),%edx
08aa601c +0x1dc:  mov    %edx,0x4(%esp)
08aa6020 +0x1e0:  mov    %eax,(%esp)
08aa6023 +0x1e3:  call   08ab2628 <_ZNK16StringDictionary6getKeyEi>  ; StringDictionary::getKey(int) const
08aa6028 +0x1e8:  mov    %eax,0xc(%esp)
08aa602c +0x1ec:  mov    0xc(%ebp),%eax
08aa602f +0x1ef:  mov    %eax,0x8(%esp)
08aa6033 +0x1f3:  movl   $"<%d::%s>",0x4(%esp)
08aa603b +0x1fb:  mov    %gs:0x0,%eax
08aa6041 +0x201:  lea    -&_ZL12gTCharBuffer+0x9d18(%eax),%eax
08aa6047 +0x207:  mov    %eax,(%esp)
08aa604a +0x20a:  call   08aa69b4 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x296>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x296
08aa604f +0x20f:  mov    %gs:0x0,%eax
08aa6055 +0x215:  lea    -&_ZL12gTCharBuffer+0x9d18(%eax),%eax
08aa605b +0x21b:  mov    %eax,(%esp)
08aa605e +0x21e:  call   08adf1b3 <_Z9toUnicodePKc>  ; toUnicode(char const*)
08aa6063 +0x223:  jmp    08aa60aa <+0x26a>
08aa6065 +0x225:  mov    0x8(%ebp),%eax
08aa6068 +0x228:  mov    0xc(%ebp),%edx
08aa606b +0x22b:  mov    %edx,0x4(%esp)
08aa606f +0x22f:  mov    %eax,(%esp)
08aa6072 +0x232:  call   088bad4e <_ZNK16STScriptFileList11GetFileNameEi>  ; STScriptFileList::GetFileName(int) const
08aa6077 +0x237:  mov    %eax,0xc(%esp)
08aa607b +0x23b:  mov    0x10(%ebp),%eax
08aa607e +0x23e:  mov    %eax,0x8(%esp)
08aa6082 +0x242:  movl   $"`%s is not found, %s`",0x4(%esp)
08aa608a +0x24a:  mov    %gs:0x0,%eax
08aa6090 +0x250:  lea    -&_ZL12gTCharBuffer+0x9c18(%eax),%eax
08aa6096 +0x256:  mov    %eax,(%esp)
08aa6099 +0x259:  call   08aa69b4 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x296>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x296
08aa609e +0x25e:  mov    %gs:0x0,%eax
08aa60a4 +0x264:  lea    -&_ZL12gTCharBuffer+0x9c18(%eax),%eax
08aa60aa +0x26a:  add    $0x44,%esp
08aa60ad +0x26d:  pop    %ebx
08aa60ae +0x26e:  pop    %ebp
08aa60af +0x26f:  ret
```

## 反编译 C

```c
// RDARScriptStringManager::getTagByName @ 0x8aa5e40

/* RDARScriptStringManager::getTagByName(int, wchar_t const*, wchar_t const*, bool) const */

wchar_t * RDARScriptStringManager::getTagByName
                    (int param_1,wchar_t *param_2,wchar_t *param_3,bool param_4)

{
  bool bVar1;
  wchar_t *pwVar2;
  undefined4 *puVar3;
  char *__s1;
  int iVar4;
  undefined4 uVar5;
  int *in_GS_OFFSET;
  undefined3 in_stack_00000011;
  int local_28;
  undefined4 local_1c;
  int local_18;
  int local_10;
  
  pwVar2 = (wchar_t *)
           std::vector<StringDictionary*,std::allocator<StringDictionary*>>::size
                     ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)
                      (param_1 + 0x18));
  if (param_2 < pwVar2) {
    puVar3 = (undefined4 *)
             std::vector<StringDictionary*,std::allocator<StringDictionary*>>::operator[]
                       ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)
                        (param_1 + 0x18),(uint)param_2);
    local_28 = getKeyIndex((RDARScriptStringManager *)param_1,(int)param_2,param_3);
    if (local_28 == -1) {
      if ((_param_4 != (wchar_t *)0x0) && (*_param_4 != L'\0')) {
        local_28 = getKeyIndex((RDARScriptStringManager *)param_1,(int)param_2,_param_4);
      }
      if (local_28 == -1) {
        local_1c = std::wstring::c_str((wstring *)(param_1 + 0x24));
      }
      else {
        local_1c = StringDictionary::getKey((StringDictionary *)*puVar3,local_28);
      }
      for (local_18 = 0; local_18 < 10000; local_18 = local_18 + 1) {
        ss_sprintf<256u>((char *)(*in_GS_OFFSET + -0x3c248),"%s_%d",local_1c,local_18);
        bVar1 = false;
        for (local_10 = 0; iVar4 = StringDictionary::getCount((StringDictionary *)*puVar3),
            local_10 < iVar4; local_10 = local_10 + 1) {
          __s1 = (char *)StringDictionary::getKey((StringDictionary *)*puVar3,local_10);
          iVar4 = strcmp(__s1,(char *)(*in_GS_OFFSET + -0x3c248));
          if (iVar4 == 0) {
            bVar1 = true;
            break;
          }
        }
        if (!bVar1) {
          StringDictionary::add
                    ((StringDictionary *)*puVar3,(char *)(*in_GS_OFFSET + -0x3c248),(char *)param_3)
          ;
          local_28 = StringDictionary::getCount((StringDictionary *)*puVar3);
          local_28 = local_28 + -1;
          break;
        }
      }
    }
    if (local_28 != -1) {
      uVar5 = StringDictionary::getKey((StringDictionary *)*puVar3,local_28);
      ss_sprintf<256u>((char *)(*in_GS_OFFSET + -0x3c248),"<%d::%s>",param_2,uVar5);
      pwVar2 = toUnicode((char *)(*in_GS_OFFSET + -0x3c248));
      return pwVar2;
    }
  }
  uVar5 = STScriptFileList::GetFileName(param_1);
  ss_sprintf<256u>((char *)(*in_GS_OFFSET + -0x3c148),"`%s is not found, %s`",param_3,uVar5);
  return (wchar_t *)(*in_GS_OFFSET + -0x3c148);
}
```
