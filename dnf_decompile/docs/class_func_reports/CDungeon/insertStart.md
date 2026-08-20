# insertStart

`_ZN8CDungeon11insertStartEiP4CMap`

`CDungeon::insertStart(int, CMap*)`

| 类 | 地址 |
|---|---|
| `CDungeon` | `0x0834be5a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834be5a  _ZN8CDungeon11insertStartEiP4CMap
#           CDungeon::insertStart(int, CMap*)
# range [0x0834be5a, 0x0834beb7]
0834be5a +0x00:  push   %ebp
0834be5b +0x01:  mov    %esp,%ebp
0834be5d +0x03:  sub    $0x38,%esp
0834be60 +0x06:  mov    0x10(%ebp),%eax
0834be63 +0x09:  mov    %eax,(%esp)
0834be66 +0x0c:  call   08134776 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x37d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x37d
0834be6b +0x11:  mov    %eax,-0xc(%ebp)
0834be6e +0x14:  lea    0x10(%ebp),%eax
0834be71 +0x17:  mov    %eax,0x8(%esp)
0834be75 +0x1b:  lea    -0xc(%ebp),%eax
0834be78 +0x1e:  mov    %eax,0x4(%esp)
0834be7c +0x22:  lea    -0x14(%ebp),%eax
0834be7f +0x25:  mov    %eax,(%esp)
0834be82 +0x28:  call   0838a138 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19bd8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19bd8
0834be87 +0x2d:  mov    0xc(%ebp),%edx
0834be8a +0x30:  mov    %edx,%eax
0834be8c +0x32:  shl    $0x2,%eax
0834be8f +0x35:  add    %edx,%eax
0834be91 +0x37:  shl    $0x2,%eax
0834be94 +0x3a:  add    $0x60,%eax
0834be97 +0x3d:  add    0x8(%ebp),%eax
0834be9a +0x40:  lea    0x4(%eax),%ecx
0834be9d +0x43:  lea    -0x20(%ebp),%eax
0834bea0 +0x46:  lea    -0x14(%ebp),%edx
0834bea3 +0x49:  mov    %edx,0x8(%esp)
0834bea7 +0x4d:  mov    %ecx,0x4(%esp)
0834beab +0x51:  mov    %eax,(%esp)
0834beae +0x54:  call   0838a166 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19c06>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19c06
0834beb3 +0x59:  sub    $0x4,%esp
0834beb6 +0x5c:  leave
0834beb7 +0x5d:  ret
```

## 反编译 C

```c
// CDungeon::insertStart @ 0x834be5a

/* CDungeon::insertStart(int, CMap*) */

void __thiscall CDungeon::insertStart(CDungeon *this,int param_1,CMap *param_2)

{
  hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> local_24 [12];
  pair<int_const,CMap*> local_18 [8];
  int local_10 [3];
  
  local_10[0] = CMap::get_index(param_2);
  std::pair<int_const,CMap*>::pair<int,CMap*&>(local_18,local_10,&param_2);
  __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
  insert(local_24,this + param_1 * 0x14 + 100);
  return;
}
```
