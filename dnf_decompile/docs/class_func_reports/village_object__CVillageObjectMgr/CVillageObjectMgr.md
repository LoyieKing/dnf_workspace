# CVillageObjectMgr

`_ZN14village_object17CVillageObjectMgrC1Ev`

`village_object::CVillageObjectMgr::CVillageObjectMgr()`

| 类 | 地址 |
|---|---|
| `village_object::CVillageObjectMgr` | `0x086b6f30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b6f30  _ZN14village_object17CVillageObjectMgrC1Ev
#           village_object::CVillageObjectMgr::CVillageObjectMgr()
# range [0x086b6f30, 0x086b6f43]
086b6f30 +0x00:  push   %ebp
086b6f31 +0x01:  mov    %esp,%ebp
086b6f33 +0x03:  sub    $0x18,%esp
086b6f36 +0x06:  mov    0x8(%ebp),%eax
086b6f39 +0x09:  mov    %eax,(%esp)
086b6f3c +0x0c:  call   086b74ea <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0xbb>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0xbb
086b6f41 +0x11:  leave
086b6f42 +0x12:  ret
086b6f43 +0x13:  nop
```

## 反编译 C

```c
// village_object::CVillageObjectMgr::CVillageObjectMgr @ 0x86b6f30

/* village_object::CVillageObjectMgr::CVillageObjectMgr() */

void __thiscall village_object::CVillageObjectMgr::CVillageObjectMgr(CVillageObjectMgr *this)

{
  std::
  map<village_object::Zone,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>,std::less<village_object::Zone>,std::allocator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>>
  ::map((map<village_object::Zone,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>,std::less<village_object::Zone>,std::allocator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>>
         *)this);
  return;
}
```
