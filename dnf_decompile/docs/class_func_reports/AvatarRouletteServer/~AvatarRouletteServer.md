# ~AvatarRouletteServer

`_ZN20AvatarRouletteServerD1Ev`

`AvatarRouletteServer::~AvatarRouletteServer()`

| 类 | 地址 |
|---|---|
| `AvatarRouletteServer` | `0x0817f372` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817f372  _ZN20AvatarRouletteServerD1Ev
#           AvatarRouletteServer::~AvatarRouletteServer()
# range [0x0817f372, 0x0817f385]
0817f372 +0x00:  push   %ebp
0817f373 +0x01:  mov    %esp,%ebp
0817f375 +0x03:  sub    $0x18,%esp
0817f378 +0x06:  mov    0x8(%ebp),%eax
0817f37b +0x09:  mov    %eax,(%esp)
0817f37e +0x0c:  call   081803da <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x71>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x71
0817f383 +0x11:  leave
0817f384 +0x12:  ret
0817f385 +0x13:  nop
```

## 反编译 C

```c
// AvatarRouletteServer::~AvatarRouletteServer @ 0x817f372

/* AvatarRouletteServer::~AvatarRouletteServer() */

void __thiscall AvatarRouletteServer::~AvatarRouletteServer(AvatarRouletteServer *this)

{
  std::
  map<unsigned_long,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>>>>
  ::~map((map<unsigned_long,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>>>>
          *)this);
  return;
}
```
