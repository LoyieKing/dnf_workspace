# AvatarRouletteServer

`_ZN20AvatarRouletteServerC1Ev`

`AvatarRouletteServer::AvatarRouletteServer()`

| 类 | 地址 |
|---|---|
| `AvatarRouletteServer` | `0x0817f354` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817f354  _ZN20AvatarRouletteServerC1Ev
#           AvatarRouletteServer::AvatarRouletteServer()
# range [0x0817f354, 0x0817f371]
0817f354 +0x00:  push   %ebp
0817f355 +0x01:  mov    %esp,%ebp
0817f357 +0x03:  sub    $0x18,%esp
0817f35a +0x06:  mov    0x8(%ebp),%eax
0817f35d +0x09:  mov    %eax,(%esp)
0817f360 +0x0c:  call   081806e6 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x37d>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x37d
0817f365 +0x11:  mov    0x8(%ebp),%eax
0817f368 +0x14:  movl   $0x0,0x18(%eax)
0817f36f +0x1b:  leave
0817f370 +0x1c:  ret
0817f371 +0x1d:  nop
```

## 反编译 C

```c
// AvatarRouletteServer::AvatarRouletteServer @ 0x817f354

/* AvatarRouletteServer::AvatarRouletteServer() */

void __thiscall AvatarRouletteServer::AvatarRouletteServer(AvatarRouletteServer *this)

{
  std::
  map<unsigned_long,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>>>>
  ::map((map<unsigned_long,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>>>>
         *)this);
  *(undefined4 *)(this + 0x18) = 0;
  return;
}
```
