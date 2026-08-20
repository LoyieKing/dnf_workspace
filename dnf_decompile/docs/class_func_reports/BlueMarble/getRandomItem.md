# getRandomItem

`_ZNK10BlueMarble13getRandomItemEv`

`BlueMarble::getRandomItem() const`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d7690` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d7690  _ZNK10BlueMarble13getRandomItemEv
#           BlueMarble::getRandomItem() const
# range [0x080d7690, 0x080d7745]
080d7690 +0x00:  push   %ebp
080d7691 +0x01:  mov    %esp,%ebp
080d7693 +0x03:  sub    $0x38,%esp
080d7696 +0x06:  mov    0x8(%ebp),%eax
080d7699 +0x09:  mov    0x38(%eax),%eax
080d769c +0x0c:  mov    0x4c(%eax),%eax
080d769f +0x0f:  mov    %eax,-0x1c(%ebp)
080d76a2 +0x12:  mov    0x8(%ebp),%eax
080d76a5 +0x15:  mov    0x14(%eax),%eax
080d76a8 +0x18:  lea    0x1d58(%eax),%edx
080d76ae +0x1e:  lea    -0x1c(%ebp),%eax
080d76b1 +0x21:  mov    %eax,0x4(%esp)
080d76b5 +0x25:  mov    %edx,(%esp)
080d76b8 +0x28:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
080d76bd +0x2d:  mov    %eax,-0x18(%ebp)
080d76c0 +0x30:  mov    0x8(%ebp),%eax
080d76c3 +0x33:  mov    0x38(%eax),%eax
080d76c6 +0x36:  add    $0x98,%eax
080d76cb +0x3b:  mov    %eax,(%esp)
080d76ce +0x3e:  call   080da546 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x6e3>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x6e3
080d76d3 +0x43:  mov    %eax,-0x14(%ebp)
080d76d6 +0x46:  movl   $0x0,-0x10(%ebp)
080d76dd +0x4d:  movl   $0x0,-0xc(%ebp)
080d76e4 +0x54:  jmp    080d7732 <+0xa2>
080d76e6 +0x56:  mov    -0xc(%ebp),%eax
080d76e9 +0x59:  mov    0x8(%ebp),%edx
080d76ec +0x5c:  mov    0x38(%edx),%edx
080d76ef +0x5f:  add    $0x98,%edx
080d76f5 +0x65:  mov    %eax,0x4(%esp)
080d76f9 +0x69:  mov    %edx,(%esp)
080d76fc +0x6c:  call   080da562 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x6ff>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x6ff
080d7701 +0x71:  mov    0x4(%eax),%eax
080d7704 +0x74:  add    %eax,-0x10(%ebp)
080d7707 +0x77:  mov    -0x10(%ebp),%eax
080d770a +0x7a:  cmp    -0x18(%ebp),%eax
080d770d +0x7d:  jl     080d772e <+0x9e>
080d770f +0x7f:  mov    -0xc(%ebp),%eax
080d7712 +0x82:  mov    0x8(%ebp),%edx
080d7715 +0x85:  mov    0x38(%edx),%edx
080d7718 +0x88:  add    $0x98,%edx
080d771e +0x8e:  mov    %eax,0x4(%esp)
080d7722 +0x92:  mov    %edx,(%esp)
080d7725 +0x95:  call   080da562 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x6ff>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x6ff
080d772a +0x9a:  mov    (%eax),%eax
080d772c +0x9c:  jmp    080d7744 <+0xb4>
080d772e +0x9e:  addl   $0x1,-0xc(%ebp)
080d7732 +0xa2:  mov    -0xc(%ebp),%eax
080d7735 +0xa5:  cmp    -0x14(%ebp),%eax
080d7738 +0xa8:  setl   %al
080d773b +0xab:  test   %al,%al
080d773d +0xad:  jne    080d76e6 <+0x56>
080d773f +0xaf:  mov    $0x0,%eax
080d7744 +0xb4:  leave
080d7745 +0xb5:  ret
```

## 反编译 C

```c
// BlueMarble::getRandomItem @ 0x80d7690

/* BlueMarble::getRandomItem() const */

undefined4 __thiscall BlueMarble::getRandomItem(BlueMarble *this)

{
  int iVar1;
  undefined4 *puVar2;
  ulong local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  local_20 = *(ulong *)(*(int *)(this + 0x38) + 0x4c);
  local_1c = CMTRand::randInt((CMTRand *)(*(int *)(this + 0x14) + 0x1d58),&local_20);
  local_18 = std::vector<BlueMarbleRandomItemInfo,std::allocator<BlueMarbleRandomItemInfo>>::size
                       ((vector<BlueMarbleRandomItemInfo,std::allocator<BlueMarbleRandomItemInfo>> *
                        )(*(int *)(this + 0x38) + 0x98));
  local_14 = 0;
  local_10 = 0;
  while( true ) {
    if (local_18 <= (int)local_10) {
      return 0;
    }
    iVar1 = std::vector<BlueMarbleRandomItemInfo,std::allocator<BlueMarbleRandomItemInfo>>::
            operator[]((vector<BlueMarbleRandomItemInfo,std::allocator<BlueMarbleRandomItemInfo>> *)
                       (*(int *)(this + 0x38) + 0x98),local_10);
    local_14 = local_14 + *(int *)(iVar1 + 4);
    if (local_1c <= local_14) break;
    local_10 = local_10 + 1;
  }
  puVar2 = (undefined4 *)
           std::vector<BlueMarbleRandomItemInfo,std::allocator<BlueMarbleRandomItemInfo>>::
           operator[]((vector<BlueMarbleRandomItemInfo,std::allocator<BlueMarbleRandomItemInfo>> *)
                      (*(int *)(this + 0x38) + 0x98),local_10);
  return *puVar2;
}
```
