# add

`_ZN16StringDictionary3addEPKcS1_`

`StringDictionary::add(char const*, char const*)`

| 类 | 地址 |
|---|---|
| `StringDictionary` | `0x08ab2398` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab2398  _ZN16StringDictionary3addEPKcS1_
#           StringDictionary::add(char const*, char const*)
# range [0x08ab2398, 0x08ab240d]
08ab2398 +0x00:  push   %ebp
08ab2399 +0x01:  mov    %esp,%ebp
08ab239b +0x03:  sub    $0x38,%esp
08ab239e +0x06:  mov    0xc(%ebp),%eax
08ab23a1 +0x09:  mov    %eax,0x4(%esp)
08ab23a5 +0x0d:  mov    0x8(%ebp),%eax
08ab23a8 +0x10:  mov    %eax,(%esp)
08ab23ab +0x13:  call   08ab2772 <_ZN16StringDictionary9addStringEPKc>  ; StringDictionary::addString(char const*)
08ab23b0 +0x18:  mov    %eax,-0x10(%ebp)
08ab23b3 +0x1b:  mov    0x10(%ebp),%eax
08ab23b6 +0x1e:  mov    %eax,0x4(%esp)
08ab23ba +0x22:  mov    0x8(%ebp),%eax
08ab23bd +0x25:  mov    %eax,(%esp)
08ab23c0 +0x28:  call   08ab2772 <_ZN16StringDictionary9addStringEPKc>  ; StringDictionary::addString(char const*)
08ab23c5 +0x2d:  mov    %eax,-0xc(%ebp)
08ab23c8 +0x30:  movl   $0x0,-0x1c(%ebp)
08ab23cf +0x37:  movl   $0x0,-0x18(%ebp)
08ab23d6 +0x3e:  movl   $0x0,-0x14(%ebp)
08ab23dd +0x45:  mov    -0x10(%ebp),%eax
08ab23e0 +0x48:  mov    %eax,(%esp)
08ab23e3 +0x4b:  call   08ab21f8 <_ZL18getStringHashValuePKc>  ; getStringHashValue(char const*)
08ab23e8 +0x50:  mov    %eax,-0x1c(%ebp)
08ab23eb +0x53:  mov    -0x10(%ebp),%eax
08ab23ee +0x56:  mov    %eax,-0x18(%ebp)
08ab23f1 +0x59:  mov    -0xc(%ebp),%eax
08ab23f4 +0x5c:  mov    %eax,-0x14(%ebp)
08ab23f7 +0x5f:  mov    0x8(%ebp),%eax
08ab23fa +0x62:  lea    0x14(%eax),%edx
08ab23fd +0x65:  lea    -0x1c(%ebp),%eax
08ab2400 +0x68:  mov    %eax,0x4(%esp)
08ab2404 +0x6c:  mov    %edx,(%esp)
08ab2407 +0x6f:  call   08ab29fc <_ZN16StringDictionary9addStringEPKc+0x28a>  ; StringDictionary::addString(char const*)+0x28a
08ab240c +0x74:  leave
08ab240d +0x75:  ret
```

## 反编译 C

```c
// StringDictionary::add @ 0x8ab2398

/* StringDictionary::add(char const*, char const*) */

void __thiscall StringDictionary::add(StringDictionary *this,char *param_1,char *param_2)

{
  undefined4 local_20;
  char *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  
  local_14 = (char *)addString(this,param_1);
  local_10 = addString(this,param_2);
  local_20 = 0;
  local_1c = (char *)0x0;
  local_18 = 0;
  local_20 = getStringHashValue(local_14);
  local_1c = local_14;
  local_18 = local_10;
  std::vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>>::
  push_back((vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>> *
            )(this + 0x14),(StringEntity *)&local_20);
  return;
}
```
