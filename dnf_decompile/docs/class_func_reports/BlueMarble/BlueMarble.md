# BlueMarble

`_ZN10BlueMarbleC1Ev`

`BlueMarble::BlueMarble()`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d8a5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d8a5c  _ZN10BlueMarbleC1Ev
#           BlueMarble::BlueMarble()
# range [0x080d8a5c, 0x080d8bad]
080d8a5c +0x000:  push   %ebp
080d8a5d +0x001:  mov    %esp,%ebp
080d8a5f +0x003:  push   %edi
080d8a60 +0x004:  push   %esi
080d8a61 +0x005:  push   %ebx
080d8a62 +0x006:  sub    $0x2c,%esp
080d8a65 +0x009:  mov    0x8(%ebp),%eax
080d8a68 +0x00c:  movl   $0xffffffff,(%eax)
080d8a6e +0x012:  mov    0x8(%ebp),%eax
080d8a71 +0x015:  add    $0x4,%eax
080d8a74 +0x018:  mov    %eax,(%esp)
080d8a77 +0x01b:  call   080da776 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x913>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x913
080d8a7c +0x020:  mov    0x8(%ebp),%eax
080d8a7f +0x023:  movl   $0x0,0x10(%eax)
080d8a86 +0x02a:  mov    0x8(%ebp),%eax
080d8a89 +0x02d:  movl   $0x0,0x18(%eax)
080d8a90 +0x034:  mov    0x8(%ebp),%eax
080d8a93 +0x037:  movl   $0x0,0x1c(%eax)
080d8a9a +0x03e:  mov    0x8(%ebp),%eax
080d8a9d +0x041:  add    $0x20,%eax
080d8aa0 +0x044:  mov    %eax,(%esp)
080d8aa3 +0x047:  call   080da3dc <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x579>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x579
080d8aa8 +0x04c:  mov    0x8(%ebp),%eax
080d8aab +0x04f:  movl   $0x0,0x38(%eax)
080d8ab2 +0x056:  mov    0x8(%ebp),%eax
080d8ab5 +0x059:  movl   $0x0,0x3c(%eax)
080d8abc +0x060:  movl   $0x2720,(%esp)
080d8ac3 +0x067:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
080d8ac8 +0x06c:  mov    %eax,%ebx
080d8aca +0x06e:  mov    %ebx,%eax
080d8acc +0x070:  mov    %eax,%esi
080d8ace +0x072:  mov    $0x3,%edi
080d8ad3 +0x077:  jmp    080d8ae6 <+0x8a>
080d8ad5 +0x079:  mov    %esi,(%esp)
080d8ad8 +0x07c:  call   080d9f48 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xe5>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xe5
080d8add +0x081:  add    $0x9c8,%esi
080d8ae3 +0x087:  sub    $0x1,%edi
080d8ae6 +0x08a:  cmp    $0xffffffff,%edi
080d8ae9 +0x08d:  setne  %al
080d8aec +0x090:  test   %al,%al
080d8aee +0x092:  jne    080d8ad5 <+0x79>
080d8af0 +0x094:  mov    %ebx,%edx
080d8af2 +0x096:  mov    0x8(%ebp),%eax
080d8af5 +0x099:  mov    %edx,0x14(%eax)
080d8af8 +0x09c:  movl   $0x0,(%esp)
080d8aff +0x0a3:  call   0807d750 <_init+0x48>
080d8b04 +0x0a8:  mov    %eax,-0x20(%ebp)
080d8b07 +0x0ab:  movl   $0x0,-0x1c(%ebp)
080d8b0e +0x0b2:  jmp    080d8b47 <+0xeb>
080d8b10 +0x0b4:  mov    %edx,%esi
080d8b12 +0x0b6:  mov    %eax,%edi
080d8b14 +0x0b8:  mov    %ebx,(%esp)
080d8b17 +0x0bb:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
080d8b1c +0x0c0:  mov    %edi,%eax
080d8b1e +0x0c2:  mov    %esi,%edx
080d8b20 +0x0c4:  jmp    080d8b70 <+0x114>
080d8b22 +0x0c6:  mov    -0x20(%ebp),%eax
080d8b25 +0x0c9:  mov    0x8(%ebp),%edx
080d8b28 +0x0cc:  mov    0x14(%edx),%ecx
080d8b2b +0x0cf:  mov    -0x1c(%ebp),%edx
080d8b2e +0x0d2:  imul   $0x9c8,%edx,%edx
080d8b34 +0x0d8:  lea    (%ecx,%edx,1),%edx
080d8b37 +0x0db:  mov    %eax,0x4(%esp)
080d8b3b +0x0df:  mov    %edx,(%esp)
080d8b3e +0x0e2:  call   080cbb1e <_GLOBAL__I__ZN10BingoEventC2Ev+0x96b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x96b
080d8b43 +0x0e7:  addl   $0x1,-0x1c(%ebp)
080d8b47 +0x0eb:  cmpl   $0x3,-0x1c(%ebp)
080d8b4b +0x0ef:  setle  %al
080d8b4e +0x0f2:  test   %al,%al
080d8b50 +0x0f4:  jne    080d8b22 <+0xc6>
080d8b52 +0x0f6:  mov    0x8(%ebp),%eax
080d8b55 +0x0f9:  add    $0x4,%eax
080d8b58 +0x0fc:  mov    %eax,(%esp)
080d8b5b +0x0ff:  call   080da7e8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x985>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x985
080d8b60 +0x104:  mov    0x8(%ebp),%eax
080d8b63 +0x107:  add    $0x20,%eax
080d8b66 +0x10a:  mov    %eax,(%esp)
080d8b69 +0x10d:  call   080da456 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x5f3>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x5f3
080d8b6e +0x112:  jmp    080d8ba6 <+0x14a>
080d8b70 +0x114:  mov    %edx,%ebx
080d8b72 +0x116:  mov    %eax,%esi
080d8b74 +0x118:  mov    0x8(%ebp),%eax
080d8b77 +0x11b:  add    $0x20,%eax
080d8b7a +0x11e:  mov    %eax,(%esp)
080d8b7d +0x121:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
080d8b82 +0x126:  mov    %esi,%eax
080d8b84 +0x128:  mov    %ebx,%edx
080d8b86 +0x12a:  jmp    080d8b88 <+0x12c>
080d8b88 +0x12c:  mov    %edx,%ebx
080d8b8a +0x12e:  mov    %eax,%esi
080d8b8c +0x130:  mov    0x8(%ebp),%eax
080d8b8f +0x133:  add    $0x4,%eax
080d8b92 +0x136:  mov    %eax,(%esp)
080d8b95 +0x139:  call   080da78a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x927>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x927
080d8b9a +0x13e:  mov    %esi,%eax
080d8b9c +0x140:  mov    %ebx,%edx
080d8b9e +0x142:  mov    %eax,(%esp)
080d8ba1 +0x145:  call   08ae3750 <_Unwind_Resume>
080d8ba6 +0x14a:  add    $0x2c,%esp
080d8ba9 +0x14d:  pop    %ebx
080d8baa +0x14e:  pop    %esi
080d8bab +0x14f:  pop    %edi
080d8bac +0x150:  pop    %ebp
080d8bad +0x151:  ret
```

## 反编译 C

```c
// BlueMarble::BlueMarble @ 0x80d8a5c

/* BlueMarble::BlueMarble() */

void __thiscall BlueMarble::BlueMarble(BlueMarble *this)

{
  CMTRand *pCVar1;
  ulong uVar2;
  CMTRand *this_00;
  int iVar3;
  int local_20;
  
  *(undefined4 *)this = 0xffffffff;
  std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::vector
            ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4));
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
                    /* try { // try from 080d8aa3 to 080d8aa7 has its CatchHandler @ 080d8b88 */
  std::set<int,std::less<int>,std::allocator<int>>::set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x20));
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
                    /* try { // try from 080d8ac3 to 080d8ac7 has its CatchHandler @ 080d8b70 */
  pCVar1 = operator_new__(0x2720);
  this_00 = pCVar1;
  for (iVar3 = 3; iVar3 != -1; iVar3 = iVar3 + -1) {
                    /* try { // try from 080d8ad8 to 080d8adc has its CatchHandler @ 080d8b10 */
    CMTRand::CMTRand(this_00);
    this_00 = this_00 + 0x9c8;
  }
  *(CMTRand **)(this + 0x14) = pCVar1;
  uVar2 = time((time_t *)0x0);
  for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
    CMTRand::seed((CMTRand *)(*(int *)(this + 0x14) + local_20 * 0x9c8),uVar2);
  }
                    /* try { // try from 080d8b5b to 080d8b6d has its CatchHandler @ 080d8b70 */
  std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::clear
            ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4));
  std::set<int,std::less<int>,std::allocator<int>>::clear
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x20));
  return;
}
```
