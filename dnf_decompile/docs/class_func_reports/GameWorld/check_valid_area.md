# check_valid_area

`_ZN9GameWorld16check_valid_areaEii`

`GameWorld::check_valid_area(int, int)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c49ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c49ee  _ZN9GameWorld16check_valid_areaEii
#           GameWorld::check_valid_area(int, int)
# range [0x086c49ee, 0x086c4b09]
086c49ee +0x000:  push   %ebp
086c49ef +0x001:  mov    %esp,%ebp
086c49f1 +0x003:  sub    $0x28,%esp
086c49f4 +0x006:  cmpl   $0x0,0xc(%ebp)
086c49f8 +0x00a:  jle    086c4a05 <+0x17>
086c49fa +0x00c:  mov    0x8(%ebp),%eax
086c49fd +0x00f:  mov    0x18(%eax),%eax
086c4a00 +0x012:  cmp    0xc(%ebp),%eax
086c4a03 +0x015:  jge    086c4a4c <+0x5e>
086c4a05 +0x017:  mov    0x8(%ebp),%eax
086c4a08 +0x01a:  mov    0x18(%eax),%eax
086c4a0b +0x01d:  mov    %eax,0x18(%esp)
086c4a0f +0x021:  mov    0xc(%ebp),%eax
086c4a12 +0x024:  mov    %eax,0x14(%esp)
086c4a16 +0x028:  movl   $"[GameWorld::check_valid_area] invalid village : %d, m_iVillCount : %d",0x10(%esp)
086c4a1e +0x030:  movl   $0x4a2,0xc(%esp)
086c4a26 +0x038:  movl   $&_ZZN9GameWorld16check_valid_areaEiiE19__PRETTY_FUNCTION__,0x8(%esp)
086c4a2e +0x040:  movl   $"world.cpp",0x4(%esp)
086c4a36 +0x048:  movl   $0x1,(%esp)
086c4a3d +0x04f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086c4a42 +0x054:  mov    $0x0,%eax
086c4a47 +0x059:  jmp    086c4b07 <+0x119>
086c4a4c +0x05e:  mov    0x8(%ebp),%eax
086c4a4f +0x061:  mov    0x1c(%eax),%edx
086c4a52 +0x064:  mov    0xc(%ebp),%eax
086c4a55 +0x067:  imul   $0x34,%eax,%eax
086c4a58 +0x06a:  lea    (%edx,%eax,1),%eax
086c4a5b +0x06d:  mov    0x24(%eax),%eax
086c4a5e +0x070:  test   %eax,%eax
086c4a60 +0x072:  jne    086c4aab <+0xbd>
086c4a62 +0x074:  mov    0x8(%ebp),%eax
086c4a65 +0x077:  mov    0x1c(%eax),%edx
086c4a68 +0x07a:  mov    0xc(%ebp),%eax
086c4a6b +0x07d:  imul   $0x34,%eax,%eax
086c4a6e +0x080:  lea    (%edx,%eax,1),%eax
086c4a71 +0x083:  mov    0x24(%eax),%eax
086c4a74 +0x086:  mov    %eax,0x14(%esp)
086c4a78 +0x08a:  movl   $"[GameWorld::check_valid_area] invalid area count : %d",0x10(%esp)
086c4a80 +0x092:  movl   $0x4aa,0xc(%esp)
086c4a88 +0x09a:  movl   $&_ZZN9GameWorld16check_valid_areaEiiE19__PRETTY_FUNCTION__,0x8(%esp)
086c4a90 +0x0a2:  movl   $"world.cpp",0x4(%esp)
086c4a98 +0x0aa:  movl   $0x1,(%esp)
086c4a9f +0x0b1:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086c4aa4 +0x0b6:  mov    $0x0,%eax
086c4aa9 +0x0bb:  jmp    086c4b07 <+0x119>
086c4aab +0x0bd:  cmpl   $0x0,0x10(%ebp)
086c4aaf +0x0c1:  js     086c4ac8 <+0xda>
086c4ab1 +0x0c3:  mov    0x8(%ebp),%eax
086c4ab4 +0x0c6:  mov    0x1c(%eax),%edx
086c4ab7 +0x0c9:  mov    0xc(%ebp),%eax
086c4aba +0x0cc:  imul   $0x34,%eax,%eax
086c4abd +0x0cf:  lea    (%edx,%eax,1),%eax
086c4ac0 +0x0d2:  mov    0x24(%eax),%eax
086c4ac3 +0x0d5:  cmp    0x10(%ebp),%eax
086c4ac6 +0x0d8:  jg     086c4b02 <+0x114>
086c4ac8 +0x0da:  mov    0x10(%ebp),%eax
086c4acb +0x0dd:  mov    %eax,0x14(%esp)
086c4acf +0x0e1:  movl   $"[GameWorld::check_valid_area] invalid area : %d",0x10(%esp)
086c4ad7 +0x0e9:  movl   $0x4b2,0xc(%esp)
086c4adf +0x0f1:  movl   $&_ZZN9GameWorld16check_valid_areaEiiE19__PRETTY_FUNCTION__,0x8(%esp)
086c4ae7 +0x0f9:  movl   $"world.cpp",0x4(%esp)
086c4aef +0x101:  movl   $0x1,(%esp)
086c4af6 +0x108:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086c4afb +0x10d:  mov    $0x0,%eax
086c4b00 +0x112:  jmp    086c4b07 <+0x119>
086c4b02 +0x114:  mov    $0x1,%eax
086c4b07 +0x119:  leave
086c4b08 +0x11a:  ret
086c4b09 +0x11b:  nop
```

## 反编译 C

```c
// GameWorld::check_valid_area @ 0x86c49ee

/* GameWorld::check_valid_area(int, int) */

undefined4 __thiscall GameWorld::check_valid_area(GameWorld *this,int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 < 1) || (*(int *)(this + 0x18) < param_1)) {
    LogManager::logFormat
              (1,"world.cpp","bool GameWorld::check_valid_area(int, int)",0x4a2,
               "[GameWorld::check_valid_area] invalid village : %d, m_iVillCount : %d",param_1,
               *(undefined4 *)(this + 0x18));
    uVar1 = 0;
  }
  else if (*(int *)(*(int *)(this + 0x1c) + param_1 * 0x34 + 0x24) == 0) {
    LogManager::logFormat
              (1,"world.cpp","bool GameWorld::check_valid_area(int, int)",0x4aa,
               "[GameWorld::check_valid_area] invalid area count : %d",
               *(undefined4 *)(*(int *)(this + 0x1c) + param_1 * 0x34 + 0x24));
    uVar1 = 0;
  }
  else if ((param_2 < 0) || (*(int *)(*(int *)(this + 0x1c) + param_1 * 0x34 + 0x24) <= param_2)) {
    LogManager::logFormat
              (1,"world.cpp","bool GameWorld::check_valid_area(int, int)",0x4b2,
               "[GameWorld::check_valid_area] invalid area : %d",param_2);
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
