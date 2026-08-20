# Prepare

`_ZN7WarRoom7PrepareEv`

`WarRoom::Prepare()`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bd5d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bd5d4  _ZN7WarRoom7PrepareEv
#           WarRoom::Prepare()
# range [0x086bd5d4, 0x086bd6d3]
086bd5d4 +0x00:  push   %ebp
086bd5d5 +0x01:  mov    %esp,%ebp
086bd5d7 +0x03:  push   %ebx
086bd5d8 +0x04:  sub    $0x34,%esp
086bd5db +0x07:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086bd5e0 +0x0c:  mov    0x8(%ebp),%edx
086bd5e3 +0x0f:  movzbl (%edx),%edx
086bd5e6 +0x12:  movzbl %dl,%edx
086bd5e9 +0x15:  add    $0x2228,%edx
086bd5ef +0x1b:  mov    0xc(%eax,%edx,4),%eax
086bd5f3 +0x1f:  mov    %eax,-0x14(%ebp)
086bd5f6 +0x22:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086bd5fb +0x27:  mov    -0x14(%ebp),%edx
086bd5fe +0x2a:  mov    %edx,0x4(%esp)
086bd602 +0x2e:  mov    %eax,(%esp)
086bd605 +0x31:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
086bd60a +0x36:  mov    %eax,-0x10(%ebp)
086bd60d +0x39:  cmpl   $0x0,-0x10(%ebp)
086bd611 +0x3d:  jne    086bd64c <+0x78>
086bd613 +0x3f:  movl   $0x0,0x14(%esp)
086bd61b +0x47:  movl   $"WARROOM G_CDataManager()->find_dungeon( %d) fail",0x10(%esp)
086bd623 +0x4f:  movl   $0x66e,0xc(%esp)
086bd62b +0x57:  movl   $&_ZZN7WarRoom7PrepareEvE19__PRETTY_FUNCTION__,0x8(%esp)
086bd633 +0x5f:  movl   $"WarRoom.cpp",0x4(%esp)
086bd63b +0x67:  movl   $0x1,(%esp)
086bd642 +0x6e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086bd647 +0x73:  jmp    086bd6ce <+0xfa>
086bd64c +0x78:  mov    0x8(%ebp),%eax
086bd64f +0x7b:  mov    -0x10(%ebp),%edx
086bd652 +0x7e:  mov    %edx,0x1d0(%eax)
086bd658 +0x84:  mov    0x8(%ebp),%eax
086bd65b +0x87:  mov    0x1d0(%eax),%eax
086bd661 +0x8d:  mov    0x704(%eax),%ebx
086bd667 +0x93:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086bd66c +0x98:  mov    %ebx,0x4(%esp)
086bd670 +0x9c:  mov    %eax,(%esp)
086bd673 +0x9f:  call   0835fa14 <_ZNK12CDataManager8find_mapEi>  ; CDataManager::find_map(int) const
086bd678 +0xa4:  mov    %eax,-0xc(%ebp)
086bd67b +0xa7:  cmpl   $0x0,-0xc(%ebp)
086bd67f +0xab:  jne    086bd6c2 <+0xee>
086bd681 +0xad:  mov    0x8(%ebp),%eax
086bd684 +0xb0:  mov    0x1d0(%eax),%eax
086bd68a +0xb6:  mov    0x704(%eax),%eax
086bd690 +0xbc:  mov    %eax,0x14(%esp)
086bd694 +0xc0:  movl   $"WARROOM Find Map[%d] Error",0x10(%esp)
086bd69c +0xc8:  movl   $0x678,0xc(%esp)
086bd6a4 +0xd0:  movl   $&_ZZN7WarRoom7PrepareEvE19__PRETTY_FUNCTION__,0x8(%esp)
086bd6ac +0xd8:  movl   $"WarRoom.cpp",0x4(%esp)
086bd6b4 +0xe0:  movl   $0x1,(%esp)
086bd6bb +0xe7:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086bd6c0 +0xec:  jmp    086bd6ce <+0xfa>
086bd6c2 +0xee:  mov    0x8(%ebp),%eax
086bd6c5 +0xf1:  mov    -0xc(%ebp),%edx
086bd6c8 +0xf4:  mov    %edx,0x1d4(%eax)
086bd6ce +0xfa:  add    $0x34,%esp
086bd6d1 +0xfd:  pop    %ebx
086bd6d2 +0xfe:  pop    %ebp
086bd6d3 +0xff:  ret
```

## 反编译 C

```c
// WarRoom::Prepare @ 0x86bd5d4

/* WarRoom::Prepare() */

void __thiscall WarRoom::Prepare(WarRoom *this)

{
  int iVar1;
  
  G_CDataManager();
  iVar1 = G_CDataManager();
  iVar1 = CDataManager::find_dungeon(iVar1);
  if (iVar1 == 0) {
    LogManager::logFormat
              (1,"WarRoom.cpp","void WarRoom::Prepare()",0x66e,
               "WARROOM G_CDataManager()->find_dungeon( %d) fail",0);
  }
  else {
    *(int *)(this + 0x1d0) = iVar1;
    iVar1 = G_CDataManager();
    iVar1 = CDataManager::find_map(iVar1);
    if (iVar1 == 0) {
      LogManager::logFormat
                (1,"WarRoom.cpp","void WarRoom::Prepare()",0x678,"WARROOM Find Map[%d] Error",
                 *(undefined4 *)(*(int *)(this + 0x1d0) + 0x704));
    }
    else {
      *(int *)(this + 0x1d4) = iVar1;
    }
  }
  return;
}
```
