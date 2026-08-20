# WarRoom

`_ZN7WarRoomC1Ev`

`WarRoom::WarRoom()`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086ba75c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ba75c  _ZN7WarRoomC1Ev
#           WarRoom::WarRoom()
# range [0x086ba75c, 0x086ba7e5]
086ba75c +0x00:  push   %ebp
086ba75d +0x01:  mov    %esp,%ebp
086ba75f +0x03:  push   %esi
086ba760 +0x04:  push   %ebx
086ba761 +0x05:  sub    $0x20,%esp
086ba764 +0x08:  mov    0x8(%ebp),%eax
086ba767 +0x0b:  add    $0x34,%eax
086ba76a +0x0e:  mov    %eax,(%esp)
086ba76d +0x11:  call   086c0b8e <_GLOBAL__I__ZN7WarRoomC2Ev+0x87>  ; global constructors keyed to WarRoom::WarRoom()+0x87
086ba772 +0x16:  mov    0x8(%ebp),%eax
086ba775 +0x19:  add    $0x1d8,%eax
086ba77a +0x1e:  mov    %eax,(%esp)
086ba77d +0x21:  call   084501c8 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dde>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dde
086ba782 +0x26:  movl   $0xffffffff,0x4(%esp)
086ba78a +0x2e:  mov    0x8(%ebp),%eax
086ba78d +0x31:  mov    %eax,(%esp)
086ba790 +0x34:  call   082a5a56 <_GLOBAL__I__ZN4CLog5this_E+0x1e7d>  ; global constructors keyed to CLog::this_+0x1e7d
086ba795 +0x39:  movl   $0x0,-0xc(%ebp)
086ba79c +0x40:  jmp    086ba7b3 <+0x57>
086ba79e +0x42:  mov    -0xc(%ebp),%edx
086ba7a1 +0x45:  mov    0x8(%ebp),%eax
086ba7a4 +0x48:  add    $0x48,%edx
086ba7a7 +0x4b:  movl   $0x0,0xc(%eax,%edx,4)
086ba7af +0x53:  addl   $0x1,-0xc(%ebp)
086ba7b3 +0x57:  cmpl   $0x5,-0xc(%ebp)
086ba7b7 +0x5b:  setle  %al
086ba7ba +0x5e:  test   %al,%al
086ba7bc +0x60:  jne    086ba79e <+0x42>
086ba7be +0x62:  jmp    086ba7de <+0x82>
086ba7c0 +0x64:  mov    %edx,%ebx
086ba7c2 +0x66:  mov    %eax,%esi
086ba7c4 +0x68:  mov    0x8(%ebp),%eax
086ba7c7 +0x6b:  add    $0x34,%eax
086ba7ca +0x6e:  mov    %eax,(%esp)
086ba7cd +0x71:  call   086c0ba4 <_GLOBAL__I__ZN7WarRoomC2Ev+0x9d>  ; global constructors keyed to WarRoom::WarRoom()+0x9d
086ba7d2 +0x76:  mov    %esi,%eax
086ba7d4 +0x78:  mov    %ebx,%edx
086ba7d6 +0x7a:  mov    %eax,(%esp)
086ba7d9 +0x7d:  call   08ae3750 <_Unwind_Resume>
086ba7de +0x82:  add    $0x20,%esp
086ba7e1 +0x85:  pop    %ebx
086ba7e2 +0x86:  pop    %esi
086ba7e3 +0x87:  pop    %ebp
086ba7e4 +0x88:  ret
086ba7e5 +0x89:  nop
```

## 反编译 C

```c
// WarRoom::WarRoom @ 0x86ba75c

/* WarRoom::WarRoom() */

void __thiscall WarRoom::WarRoom(WarRoom *this)

{
  int local_10;
  
  WarField::WarField((WarField *)(this + 0x34));
                    /* try { // try from 086ba77d to 086ba781 has its CatchHandler @ 086ba7c0 */
  std::
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>::
  map((map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
       *)(this + 0x1d8));
  SetState(this,0xffffffff);
  for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
    *(undefined4 *)(this + (local_10 + 0x48) * 4 + 0xc) = 0;
  }
  return;
}
```
