# generateEquipGrade

`_ZN8WongWork21GenerateRandomUpgrade18generateEquipGradeEi`

`WongWork::GenerateRandomUpgrade::generateEquipGrade(int)`

| 类 | 地址 |
|---|---|
| `WongWork::GenerateRandomUpgrade` | `0x08533932` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08533932  _ZN8WongWork21GenerateRandomUpgrade18generateEquipGradeEi
#           WongWork::GenerateRandomUpgrade::generateEquipGrade(int)
# range [0x08533932, 0x08533b3d]
08533932 +0x000:  push   %ebp
08533933 +0x001:  mov    %esp,%ebp
08533935 +0x003:  sub    $0x78,%esp
08533938 +0x006:  movl   $0x5aa7,-0x44(%ebp)
0853393f +0x00d:  movl   $0xfa6,-0x40(%ebp)
08533946 +0x014:  movl   $0x6a23,-0x3c(%ebp)
0853394d +0x01b:  movl   $0x5df0,-0x38(%ebp)
08533954 +0x022:  movl   $0x7270,-0x34(%ebp)
0853395b +0x029:  movl   $0x3e8,-0x58(%ebp)
08533962 +0x030:  movl   $0x3e8,-0x54(%ebp)
08533969 +0x037:  movl   $0x3e8,-0x50(%ebp)
08533970 +0x03e:  movl   $0x3e8,-0x4c(%ebp)
08533977 +0x045:  movl   $0x3e8,-0x48(%ebp)
0853397e +0x04c:  movl   $0x1388,-0x2c(%ebp)
08533985 +0x053:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0853398a +0x058:  add    $0x540,%eax
0853398f +0x05d:  mov    %eax,-0x28(%ebp)
08533992 +0x060:  mov    -0x28(%ebp),%eax
08533995 +0x063:  mov    %eax,(%esp)
08533998 +0x066:  call   081b48ac <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x120>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x120
0853399d +0x06b:  test   %eax,%eax
0853399f +0x06d:  sete   %al
085339a2 +0x070:  test   %al,%al
085339a4 +0x072:  je     085339b0 <+0x7e>
085339a6 +0x074:  mov    $0x5aa7,%eax
085339ab +0x079:  jmp    08533b3b <+0x209>
085339b0 +0x07e:  mov    $0x3f800000,%eax
085339b5 +0x083:  mov    %eax,-0x24(%ebp)
085339b8 +0x086:  mov    -0x28(%ebp),%eax
085339bb +0x089:  mov    %eax,(%esp)
085339be +0x08c:  call   081b48ac <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x120>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x120
085339c3 +0x091:  test   %eax,%eax
085339c5 +0x093:  setne  %al
085339c8 +0x096:  test   %al,%al
085339ca +0x098:  je     08533aa6 <+0x174>
085339d0 +0x09e:  mov    -0x28(%ebp),%eax
085339d3 +0x0a1:  mov    %eax,(%esp)
085339d6 +0x0a4:  call   081b48ac <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x120>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x120
085339db +0x0a9:  sub    $0x1,%eax
085339de +0x0ac:  mov    %eax,-0x14(%ebp)
085339e1 +0x0af:  movl   $0x0,0x4(%esp)
085339e9 +0x0b7:  mov    -0x28(%ebp),%eax
085339ec +0x0ba:  mov    %eax,(%esp)
085339ef +0x0bd:  call   081b4a18 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x28c>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x28c
085339f4 +0x0c2:  mov    (%eax),%eax
085339f6 +0x0c4:  cmp    0xc(%ebp),%eax
085339f9 +0x0c7:  setl   %al
085339fc +0x0ca:  test   %al,%al
085339fe +0x0cc:  je     08533a1e <+0xec>
08533a00 +0x0ce:  movl   $0x0,0x4(%esp)
08533a08 +0x0d6:  mov    -0x28(%ebp),%eax
08533a0b +0x0d9:  mov    %eax,(%esp)
08533a0e +0x0dc:  call   081b4a18 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x28c>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x28c
08533a13 +0x0e1:  mov    0x4(%eax),%eax
08533a16 +0x0e4:  mov    %eax,-0x24(%ebp)
08533a19 +0x0e7:  jmp    08533aa6 <+0x174>
08533a1e +0x0ec:  mov    -0x14(%ebp),%eax
08533a21 +0x0ef:  mov    %eax,0x4(%esp)
08533a25 +0x0f3:  mov    -0x28(%ebp),%eax
08533a28 +0x0f6:  mov    %eax,(%esp)
08533a2b +0x0f9:  call   081b4a18 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x28c>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x28c
08533a30 +0x0fe:  mov    (%eax),%eax
08533a32 +0x100:  cmp    0xc(%ebp),%eax
08533a35 +0x103:  setg   %al
08533a38 +0x106:  test   %al,%al
08533a3a +0x108:  je     08533a56 <+0x124>
08533a3c +0x10a:  mov    -0x14(%ebp),%eax
08533a3f +0x10d:  mov    %eax,0x4(%esp)
08533a43 +0x111:  mov    -0x28(%ebp),%eax
08533a46 +0x114:  mov    %eax,(%esp)
08533a49 +0x117:  call   081b4a18 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x28c>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x28c
08533a4e +0x11c:  mov    0x4(%eax),%eax
08533a51 +0x11f:  mov    %eax,-0x24(%ebp)
08533a54 +0x122:  jmp    08533aa6 <+0x174>
08533a56 +0x124:  movl   $0x0,-0x10(%ebp)
08533a5d +0x12b:  jmp    08533a99 <+0x167>
08533a5f +0x12d:  mov    -0x10(%ebp),%eax
08533a62 +0x130:  mov    %eax,0x4(%esp)
08533a66 +0x134:  mov    -0x28(%ebp),%eax
08533a69 +0x137:  mov    %eax,(%esp)
08533a6c +0x13a:  call   081b4a18 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x28c>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x28c
08533a71 +0x13f:  mov    (%eax),%eax
08533a73 +0x141:  cmp    0xc(%ebp),%eax
08533a76 +0x144:  sete   %al
08533a79 +0x147:  test   %al,%al
08533a7b +0x149:  je     08533a95 <+0x163>
08533a7d +0x14b:  mov    -0x10(%ebp),%eax
08533a80 +0x14e:  mov    %eax,0x4(%esp)
08533a84 +0x152:  mov    -0x28(%ebp),%eax
08533a87 +0x155:  mov    %eax,(%esp)
08533a8a +0x158:  call   081b4a18 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x28c>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x28c
08533a8f +0x15d:  mov    0x4(%eax),%eax
08533a92 +0x160:  mov    %eax,-0x24(%ebp)
08533a95 +0x163:  addl   $0x1,-0x10(%ebp)
08533a99 +0x167:  mov    -0x10(%ebp),%eax
08533a9c +0x16a:  cmp    -0x14(%ebp),%eax
08533a9f +0x16d:  setle  %al
08533aa2 +0x170:  test   %al,%al
08533aa4 +0x172:  jne    08533a5f <+0x12d>
08533aa6 +0x174:  mov    -0x58(%ebp),%eax
08533aa9 +0x177:  mov    %eax,-0x20(%ebp)
08533aac +0x17a:  fildl  -0x20(%ebp)
08533aaf +0x17d:  fmuls  -0x24(%ebp)
08533ab2 +0x180:  fnstcw -0x5a(%ebp)
08533ab5 +0x183:  movzwl -0x5a(%ebp),%eax
08533ab9 +0x187:  mov    $0xc,%ah
08533abb +0x189:  mov    %ax,-0x5c(%ebp)
08533abf +0x18d:  fldcw  -0x5c(%ebp)
08533ac2 +0x190:  fistpl -0x60(%ebp)
08533ac5 +0x193:  fldcw  -0x5a(%ebp)
08533ac8 +0x196:  mov    -0x60(%ebp),%eax
08533acb +0x199:  mov    %eax,-0x58(%ebp)
08533ace +0x19c:  mov    -0x20(%ebp),%eax
08533ad1 +0x19f:  mov    -0x2c(%ebp),%edx
08533ad4 +0x1a2:  sub    %eax,%edx
08533ad6 +0x1a4:  mov    -0x58(%ebp),%eax
08533ad9 +0x1a7:  lea    (%edx,%eax,1),%eax
08533adc +0x1aa:  mov    %eax,-0x2c(%ebp)
08533adf +0x1ad:  mov    -0x2c(%ebp),%eax
08533ae2 +0x1b0:  mov    %eax,-0x30(%ebp)
08533ae5 +0x1b3:  mov    0x8(%ebp),%eax
08533ae8 +0x1b6:  mov    (%eax),%eax
08533aea +0x1b8:  lea    -0x30(%ebp),%edx
08533aed +0x1bb:  mov    %edx,0x4(%esp)
08533af1 +0x1bf:  mov    %eax,(%esp)
08533af4 +0x1c2:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
08533af9 +0x1c7:  mov    %eax,-0x1c(%ebp)
08533afc +0x1ca:  movl   $0x0,-0x18(%ebp)
08533b03 +0x1d1:  movl   $0x0,-0xc(%ebp)
08533b0a +0x1d8:  jmp    08533b2b <+0x1f9>
08533b0c +0x1da:  mov    -0xc(%ebp),%eax
08533b0f +0x1dd:  mov    -0x58(%ebp,%eax,4),%eax
08533b13 +0x1e1:  add    %eax,-0x18(%ebp)
08533b16 +0x1e4:  mov    -0x18(%ebp),%eax
08533b19 +0x1e7:  cmp    -0x1c(%ebp),%eax
08533b1c +0x1ea:  jl     08533b27 <+0x1f5>
08533b1e +0x1ec:  mov    -0xc(%ebp),%eax
08533b21 +0x1ef:  mov    -0x44(%ebp,%eax,4),%eax
08533b25 +0x1f3:  jmp    08533b3b <+0x209>
08533b27 +0x1f5:  addl   $0x1,-0xc(%ebp)
08533b2b +0x1f9:  cmpl   $0x4,-0xc(%ebp)
08533b2f +0x1fd:  setle  %al
08533b32 +0x200:  test   %al,%al
08533b34 +0x202:  jne    08533b0c <+0x1da>
08533b36 +0x204:  mov    $0x5aa7,%eax
08533b3b +0x209:  leave
08533b3c +0x20a:  ret
08533b3d +0x20b:  nop
```

## 反编译 C

```c
// WongWork::GenerateRandomUpgrade::generateEquipGrade @ 0x8533932

/* WongWork::GenerateRandomUpgrade::generateEquipGrade(int) */

int __thiscall
WongWork::GenerateRandomUpgrade::generateEquipGrade(GenerateRandomUpgrade *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int local_5c [11];
  int local_30;
  vector<std::pair<int,float>,std::allocator<std::pair<int,float>>> *local_2c;
  float local_28;
  int local_24;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  
  local_5c[5] = 0x5aa7;
  local_5c[6] = 0xfa6;
  local_5c[7] = 0x6a23;
  local_5c[8] = 0x5df0;
  local_5c[9] = 0x7270;
  local_5c[0] = 1000;
  local_5c[1] = 1000;
  local_5c[2] = 1000;
  local_5c[3] = 1000;
  local_5c[4] = 1000;
  local_30 = 5000;
  iVar1 = G_CDataManager();
  local_2c = (vector<std::pair<int,float>,std::allocator<std::pair<int,float>>> *)(iVar1 + 0x540);
  iVar1 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::size(local_2c);
  if (iVar1 != 0) {
    local_28 = 1.0;
    iVar1 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::size(local_2c);
    if (iVar1 != 0) {
      iVar1 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::size(local_2c)
      ;
      local_18 = iVar1 - 1;
      piVar2 = (int *)std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::
                      operator[](local_2c,0);
      if (*piVar2 < param_1) {
        iVar1 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::operator[]
                          (local_2c,0);
        local_28 = *(float *)(iVar1 + 4);
      }
      else {
        piVar2 = (int *)std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::
                        operator[](local_2c,local_18);
        if (param_1 < *piVar2) {
          iVar1 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::operator[]
                            (local_2c,local_18);
          local_28 = *(float *)(iVar1 + 4);
        }
        else {
          for (local_14 = 0; (int)local_14 <= (int)local_18; local_14 = local_14 + 1) {
            piVar2 = (int *)std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::
                            operator[](local_2c,local_14);
            if (*piVar2 == param_1) {
              iVar1 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::
                      operator[](local_2c,local_14);
              local_28 = *(float *)(iVar1 + 4);
            }
          }
        }
      }
    }
    local_24 = local_5c[0];
    local_5c[10] = (local_30 - local_5c[0]) + (int)ROUND((float)local_5c[0] * local_28);
    local_5c[0] = (int)ROUND((float)local_5c[0] * local_28);
    local_30 = local_5c[10];
    iVar1 = CMTRand::randInt(*(CMTRand **)this,(ulong *)(local_5c + 10));
    local_1c = 0;
    for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
      local_1c = local_1c + local_5c[local_10];
      if (iVar1 <= local_1c) {
        return local_5c[local_10 + 5];
      }
    }
  }
  return 0x5aa7;
}
```
