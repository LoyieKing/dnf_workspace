# Reset

`_ZN18online_preliminary22COnlinePreliminaryTeam5ResetEv`

`online_preliminary::COnlinePreliminaryTeam::Reset()`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryTeam` | `0x0858838a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858838a  _ZN18online_preliminary22COnlinePreliminaryTeam5ResetEv
#           online_preliminary::COnlinePreliminaryTeam::Reset()
# range [0x0858838a, 0x085883fd]
0858838a +0x00:  push   %ebp
0858838b +0x01:  mov    %esp,%ebp
0858838d +0x03:  sub    $0x18,%esp
08588390 +0x06:  mov    0x8(%ebp),%eax
08588393 +0x09:  movl   $0x0,(%eax)
08588399 +0x0f:  mov    0x8(%ebp),%eax
0858839c +0x12:  movl   $0x0,0x4(%eax)
085883a3 +0x19:  mov    0x8(%ebp),%eax
085883a6 +0x1c:  add    $0x14,%eax
085883a9 +0x1f:  movl   $0x10,0x8(%esp)
085883b1 +0x27:  movl   $0x0,0x4(%esp)
085883b9 +0x2f:  mov    %eax,(%esp)
085883bc +0x32:  call   0807dcc0 <_init+0x5b8>
085883c1 +0x37:  mov    0x8(%ebp),%eax
085883c4 +0x3a:  mov    $0x0,%edx
085883c9 +0x3f:  mov    %edx,0x8(%eax)
085883cc +0x42:  mov    0x8(%ebp),%eax
085883cf +0x45:  movl   $0x0,0xc(%eax)
085883d6 +0x4c:  mov    0x8(%ebp),%eax
085883d9 +0x4f:  movl   $0x0,0x10(%eax)
085883e0 +0x56:  mov    0x8(%ebp),%eax
085883e3 +0x59:  add    $0x24,%eax
085883e6 +0x5c:  mov    %eax,(%esp)
085883e9 +0x5f:  call   085892e4 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x5d7>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x5d7
085883ee +0x64:  mov    0x8(%ebp),%eax
085883f1 +0x67:  movb   $0x0,0x3c(%eax)
085883f5 +0x6b:  mov    0x8(%ebp),%eax
085883f8 +0x6e:  movb   $0x0,0x3d(%eax)
085883fc +0x72:  leave
085883fd +0x73:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryTeam::Reset @ 0x858838a

/* online_preliminary::COnlinePreliminaryTeam::Reset() */

void __thiscall online_preliminary::COnlinePreliminaryTeam::Reset(COnlinePreliminaryTeam *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  memset(this + 0x14,0,0x10);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  std::
  map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
  ::clear((map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
           *)(this + 0x24));
  this[0x3c] = (COnlinePreliminaryTeam)0x0;
  this[0x3d] = (COnlinePreliminaryTeam)0x0;
  return;
}
```
