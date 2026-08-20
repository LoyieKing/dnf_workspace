# setItemCheckFlag

`_ZN15CItemDictionary16setItemCheckFlagEP5CUserjj`

`CItemDictionary::setItemCheckFlag(CUser*, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CItemDictionary` | `0x0811d8fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811d8fc  _ZN15CItemDictionary16setItemCheckFlagEP5CUserjj
#           CItemDictionary::setItemCheckFlag(CUser*, unsigned int, unsigned int)
# range [0x0811d8fc, 0x0811da31]
0811d8fc +0x000:  push   %ebp
0811d8fd +0x001:  mov    %esp,%ebp
0811d8ff +0x003:  push   %edi
0811d900 +0x004:  push   %esi
0811d901 +0x005:  push   %ebx
0811d902 +0x006:  sub    $0x4c,%esp
0811d905 +0x009:  cmpl   $0x0,0xc(%ebp)
0811d909 +0x00d:  je     0811da25 <+0x129>
0811d90f +0x013:  mov    0x14(%ebp),%eax
0811d912 +0x016:  shr    $0x3,%eax
0811d915 +0x019:  mov    %eax,-0x24(%ebp)
0811d918 +0x01c:  mov    0x14(%ebp),%eax
0811d91b +0x01f:  and    $0x7,%eax
0811d91e +0x022:  mov    %eax,-0x20(%ebp)
0811d921 +0x025:  cmpl   $0x0,-0x24(%ebp)
0811d925 +0x029:  js     0811d93c <+0x40>
0811d927 +0x02b:  cmpl   $0x1387,-0x24(%ebp)
0811d92e +0x032:  jg     0811d93c <+0x40>
0811d930 +0x034:  cmpl   $0x0,-0x20(%ebp)
0811d934 +0x038:  js     0811d93c <+0x40>
0811d936 +0x03a:  cmpl   $0x7,-0x20(%ebp)
0811d93a +0x03e:  jle    0811d999 <+0x9d>
0811d93c +0x040:  movl   $0xffffffff,0x4(%esp)
0811d944 +0x048:  mov    0xc(%ebp),%eax
0811d947 +0x04b:  mov    %eax,(%esp)
0811d94a +0x04e:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0811d94f +0x053:  mov    -0x20(%ebp),%edx
0811d952 +0x056:  mov    %edx,0x20(%esp)
0811d956 +0x05a:  mov    -0x24(%ebp),%edx
0811d959 +0x05d:  mov    %edx,0x1c(%esp)
0811d95d +0x061:  mov    0x14(%ebp),%edx
0811d960 +0x064:  mov    %edx,0x18(%esp)
0811d964 +0x068:  mov    %eax,0x14(%esp)
0811d968 +0x06c:  movl   $"setItemCheckFlag() characNo=%u, item_flag=%u, index=%d, flag=%d",0x10(%esp)
0811d970 +0x074:  movl   $0x62,0xc(%esp)
0811d978 +0x07c:  movl   $&_ZZN15CItemDictionary16setItemCheckFlagEP5CUserjjE19__PRETTY_FUNCTION__,0x8(%esp)
0811d980 +0x084:  movl   $"ItemDictionary.cpp",0x4(%esp)
0811d988 +0x08c:  movl   $0x1,(%esp)
0811d98f +0x093:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0811d994 +0x098:  jmp    0811da29 <+0x12d>
0811d999 +0x09d:  mov    -0x24(%ebp),%eax
0811d99c +0x0a0:  mov    0x8(%ebp),%edx
0811d99f +0x0a3:  movzbl 0x5(%edx,%eax,1),%eax
0811d9a4 +0x0a8:  mov    %al,-0x19(%ebp)
0811d9a7 +0x0ab:  movl   $0xffffffff,0x4(%esp)
0811d9af +0x0b3:  mov    0xc(%ebp),%eax
0811d9b2 +0x0b6:  mov    %eax,(%esp)
0811d9b5 +0x0b9:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0811d9ba +0x0be:  mov    0x14(%ebp),%edx
0811d9bd +0x0c1:  mov    %edx,0x8(%esp)
0811d9c1 +0x0c5:  mov    %eax,0x4(%esp)
0811d9c5 +0x0c9:  mov    0x8(%ebp),%eax
0811d9c8 +0x0cc:  mov    %eax,(%esp)
0811d9cb +0x0cf:  call   0811da32 <_ZNK15CItemDictionary16getItemCheckFlagEjj>  ; CItemDictionary::getItemCheckFlag(unsigned int, unsigned int) const
0811d9d0 +0x0d4:  xor    $0x1,%eax
0811d9d3 +0x0d7:  test   %al,%al
0811d9d5 +0x0d9:  je     0811da28 <+0x12c>
0811d9d7 +0x0db:  mov    -0x24(%ebp),%eax
0811d9da +0x0de:  mov    -0x24(%ebp),%edx
0811d9dd +0x0e1:  mov    0x8(%ebp),%ecx
0811d9e0 +0x0e4:  movzbl 0x5(%ecx,%edx,1),%ebx
0811d9e5 +0x0e9:  mov    -0x20(%ebp),%edx
0811d9e8 +0x0ec:  mov    $0x1,%esi
0811d9ed +0x0f1:  mov    %esi,%edi
0811d9ef +0x0f3:  mov    %edx,%ecx
0811d9f1 +0x0f5:  shl    %cl,%edi
0811d9f3 +0x0f7:  mov    %edi,%edx
0811d9f5 +0x0f9:  lea    (%ebx,%edx,1),%ecx
0811d9f8 +0x0fc:  mov    0x8(%ebp),%edx
0811d9fb +0x0ff:  mov    %cl,0x5(%edx,%eax,1)
0811d9ff +0x103:  mov    0x10(%ebp),%eax
0811da02 +0x106:  mov    %eax,0x8(%esp)
0811da06 +0x10a:  mov    0xc(%ebp),%eax
0811da09 +0x10d:  mov    %eax,0x4(%esp)
0811da0d +0x111:  mov    0x8(%ebp),%eax
0811da10 +0x114:  mov    %eax,(%esp)
0811da13 +0x117:  call   0811dce6 <_ZN15CItemDictionary22sendItemDictionaryInfoEP5CUserj>  ; CItemDictionary::sendItemDictionaryInfo(CUser*, unsigned int)
0811da18 +0x11c:  mov    0x8(%ebp),%eax
0811da1b +0x11f:  mov    %eax,(%esp)
0811da1e +0x122:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
0811da23 +0x127:  jmp    0811da29 <+0x12d>
0811da25 +0x129:  nop
0811da26 +0x12a:  jmp    0811da29 <+0x12d>
0811da28 +0x12c:  nop
0811da29 +0x12d:  add    $0x4c,%esp
0811da2c +0x130:  pop    %ebx
0811da2d +0x131:  pop    %esi
0811da2e +0x132:  pop    %edi
0811da2f +0x133:  pop    %ebp
0811da30 +0x134:  ret
0811da31 +0x135:  nop
```

## 反编译 C

```c
// CItemDictionary::setItemCheckFlag @ 0x811d8fc

/* CItemDictionary::setItemCheckFlag(CUser*, unsigned int, unsigned int) */

void __thiscall
CItemDictionary::setItemCheckFlag(CItemDictionary *this,CUser *param_1,uint param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (param_1 != (CUser *)0x0) {
    uVar2 = param_3 >> 3;
    uVar3 = param_3 & 7;
    if ((uVar2 < 5000) && (uVar3 < 8)) {
      uVar5 = CUser::get_charac_no(param_1,-1);
      cVar1 = getItemCheckFlag(this,uVar5,param_3);
      if (cVar1 != '\x01') {
        this[uVar2 + 5] = (CItemDictionary)((char)this[uVar2 + 5] + (char)(1 << (sbyte)uVar3));
        sendItemDictionaryInfo(this,param_1,param_2);
        charac_expand::CData::alter((CData *)this);
      }
    }
    else {
      uVar4 = CUser::get_charac_no(param_1,-1);
      LogManager::logFormat
                (1,"ItemDictionary.cpp",
                 "void CItemDictionary::setItemCheckFlag(CUser*, unsigned int, unsigned int)",0x62,
                 "setItemCheckFlag() characNo=%u, item_flag=%u, index=%d, flag=%d",uVar4,param_3,
                 uVar2,uVar3);
    }
  }
  return;
}
```
