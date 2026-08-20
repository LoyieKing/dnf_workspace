# _getSectionIdx

`_ZN12CAchievement14_getSectionIdxE24ENUM_TITLE_BOOK_CATEGORYi`

`CAchievement::_getSectionIdx(ENUM_TITLE_BOOK_CATEGORY, int)`

| 类 | 地址 |
|---|---|
| `CAchievement` | `0x0828bcb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828bcb8  _ZN12CAchievement14_getSectionIdxE24ENUM_TITLE_BOOK_CATEGORYi
#           CAchievement::_getSectionIdx(ENUM_TITLE_BOOK_CATEGORY, int)
# range [0x0828bcb8, 0x0828bd5d]
0828bcb8 +0x00:  push   %ebp
0828bcb9 +0x01:  mov    %esp,%ebp
0828bcbb +0x03:  push   %esi
0828bcbc +0x04:  push   %ebx
0828bcbd +0x05:  sub    $0x60,%esp
0828bcc0 +0x08:  movl   $0x0,-0xc(%ebp)
0828bcc7 +0x0f:  jmp    0828bd2f <+0x77>
0828bcc9 +0x11:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0828bcce +0x16:  lea    0xa794(%eax),%edx
0828bcd4 +0x1c:  mov    -0xc(%ebp),%eax
0828bcd7 +0x1f:  mov    %eax,0x4(%esp)
0828bcdb +0x23:  mov    %edx,(%esp)
0828bcde +0x26:  call   0828dd32 <_GLOBAL__I__ZN12CAchievementC2Ev+0x4df>  ; global constructors keyed to CAchievement::CAchievement()+0x4df
0828bce3 +0x2b:  mov    %eax,0x4(%esp)
0828bce7 +0x2f:  lea    -0x4c(%ebp),%eax
0828bcea +0x32:  mov    %eax,(%esp)
0828bced +0x35:  call   0828dac2 <_GLOBAL__I__ZN12CAchievementC2Ev+0x26f>  ; global constructors keyed to CAchievement::CAchievement()+0x26f
0828bcf2 +0x3a:  mov    -0x4c(%ebp),%edx
0828bcf5 +0x3d:  mov    0x8(%ebp),%eax
0828bcf8 +0x40:  cmp    %eax,%edx
0828bcfa +0x42:  jne    0828bd16 <+0x5e>
0828bcfc +0x44:  mov    -0x40(%ebp),%eax
0828bcff +0x47:  cmp    0xc(%ebp),%eax
0828bd02 +0x4a:  jg     0828bd16 <+0x5e>
0828bd04 +0x4c:  mov    -0x3c(%ebp),%eax
0828bd07 +0x4f:  cmp    0xc(%ebp),%eax
0828bd0a +0x52:  jl     0828bd16 <+0x5e>
0828bd0c +0x54:  mov    -0xc(%ebp),%ebx
0828bd0f +0x57:  mov    $0x0,%esi
0828bd14 +0x5c:  jmp    0828bd1b <+0x63>
0828bd16 +0x5e:  mov    $0x1,%esi
0828bd1b +0x63:  lea    -0x4c(%ebp),%eax
0828bd1e +0x66:  mov    %eax,(%esp)
0828bd21 +0x69:  call   0828d972 <_GLOBAL__I__ZN12CAchievementC2Ev+0x11f>  ; global constructors keyed to CAchievement::CAchievement()+0x11f
0828bd26 +0x6e:  cmp    $0x1,%esi
0828bd29 +0x71:  jne    0828bd54 <+0x9c>
0828bd2b +0x73:  addl   $0x1,-0xc(%ebp)
0828bd2f +0x77:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0828bd34 +0x7c:  add    $0xa794,%eax
0828bd39 +0x81:  mov    %eax,(%esp)
0828bd3c +0x84:  call   0828dd16 <_GLOBAL__I__ZN12CAchievementC2Ev+0x4c3>  ; global constructors keyed to CAchievement::CAchievement()+0x4c3
0828bd41 +0x89:  cmp    -0xc(%ebp),%eax
0828bd44 +0x8c:  seta   %al
0828bd47 +0x8f:  test   %al,%al
0828bd49 +0x91:  jne    0828bcc9 <+0x11>
0828bd4f +0x97:  mov    $0xffffffff,%ebx
0828bd54 +0x9c:  mov    %ebx,%eax
0828bd56 +0x9e:  add    $0x60,%esp
0828bd59 +0xa1:  pop    %ebx
0828bd5a +0xa2:  pop    %esi
0828bd5b +0xa3:  pop    %ebp
0828bd5c +0xa4:  ret
0828bd5d +0xa5:  nop
```

## 反编译 C

```c
// CAchievement::_getSectionIdx @ 0x828bcb8

/* CAchievement::_getSectionIdx(ENUM_TITLE_BOOK_CATEGORY, int) */

uint CAchievement::_getSectionIdx(int param_1,int param_2)

{
  bool bVar1;
  stTitleSection *psVar2;
  int iVar3;
  uint uVar4;
  uint unaff_EBX;
  int local_50 [3];
  int local_44;
  int local_40;
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    iVar3 = G_CDataManager();
    uVar4 = std::vector<stTitleSection,std::allocator<stTitleSection>>::size
                      ((vector<stTitleSection,std::allocator<stTitleSection>> *)(iVar3 + 0xa794));
    if (uVar4 <= local_10) {
      return 0xffffffff;
    }
    iVar3 = G_CDataManager();
    psVar2 = (stTitleSection *)
             std::vector<stTitleSection,std::allocator<stTitleSection>>::operator[]
                       ((vector<stTitleSection,std::allocator<stTitleSection>> *)(iVar3 + 0xa794),
                        local_10);
    stTitleSection::stTitleSection((stTitleSection *)local_50,psVar2);
    if (((local_50[0] == param_1) && (local_44 <= param_2)) && (param_2 <= local_40)) {
      bVar1 = false;
      unaff_EBX = local_10;
    }
    else {
      bVar1 = true;
    }
    stTitleSection::~stTitleSection((stTitleSection *)local_50);
    if (!bVar1) break;
    local_10 = local_10 + 1;
  }
  return unaff_EBX;
}
```
