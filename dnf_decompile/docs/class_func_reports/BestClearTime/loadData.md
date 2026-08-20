# loadData

`_ZN13BestClearTime8loadDataEP5CUserPc`

`BestClearTime::loadData(CUser*, char*)`

| 类 | 地址 |
|---|---|
| `BestClearTime` | `0x080c8776` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c8776  _ZN13BestClearTime8loadDataEP5CUserPc
#           BestClearTime::loadData(CUser*, char*)
# range [0x080c8776, 0x080c883b]
080c8776 +0x00:  push   %ebp
080c8777 +0x01:  mov    %esp,%ebp
080c8779 +0x03:  sub    $0x58,%esp
080c877c +0x06:  mov    0x8(%ebp),%eax
080c877f +0x09:  mov    (%eax),%eax
080c8781 +0x0b:  add    $0x1c,%eax
080c8784 +0x0e:  mov    (%eax),%edx
080c8786 +0x10:  mov    0x8(%ebp),%eax
080c8789 +0x13:  mov    %eax,(%esp)
080c878c +0x16:  call   *%edx
080c878e +0x18:  mov    0x10(%ebp),%eax
080c8791 +0x1b:  mov    %eax,-0x10(%ebp)
080c8794 +0x1e:  movl   $0x0,-0xc(%ebp)
080c879b +0x25:  jmp    080c880c <+0x96>
080c879d +0x27:  mov    -0xc(%ebp),%edx
080c87a0 +0x2a:  mov    %edx,%eax
080c87a2 +0x2c:  add    %eax,%eax
080c87a4 +0x2e:  add    %edx,%eax
080c87a6 +0x30:  shl    $0x3,%eax
080c87a9 +0x33:  add    -0x10(%ebp),%eax
080c87ac +0x36:  lea    0xc(%eax),%ecx
080c87af +0x39:  mov    -0xc(%ebp),%edx
080c87b2 +0x3c:  mov    %edx,%eax
080c87b4 +0x3e:  add    %eax,%eax
080c87b6 +0x40:  add    %edx,%eax
080c87b8 +0x42:  shl    $0x3,%eax
080c87bb +0x45:  add    -0x10(%ebp),%eax
080c87be +0x48:  lea    0x8(%eax),%edx
080c87c1 +0x4b:  lea    -0x28(%ebp),%eax
080c87c4 +0x4e:  mov    %ecx,0x8(%esp)
080c87c8 +0x52:  mov    %edx,0x4(%esp)
080c87cc +0x56:  mov    %eax,(%esp)
080c87cf +0x59:  call   080c8d7f <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1d7>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1d7
080c87d4 +0x5e:  sub    $0x4,%esp
080c87d7 +0x61:  lea    -0x28(%ebp),%eax
080c87da +0x64:  mov    %eax,0x4(%esp)
080c87de +0x68:  lea    -0x40(%ebp),%eax
080c87e1 +0x6b:  mov    %eax,(%esp)
080c87e4 +0x6e:  call   080c8dbe <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x216>  ; global constructors keyed to BestClearTime::BestClearTime()+0x216
080c87e9 +0x73:  mov    0x8(%ebp),%eax
080c87ec +0x76:  lea    0x8(%eax),%ecx
080c87ef +0x79:  lea    -0x48(%ebp),%eax
080c87f2 +0x7c:  lea    -0x40(%ebp),%edx
080c87f5 +0x7f:  mov    %edx,0x8(%esp)
080c87f9 +0x83:  mov    %ecx,0x4(%esp)
080c87fd +0x87:  mov    %eax,(%esp)
080c8800 +0x8a:  call   080c8e06 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x25e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x25e
080c8805 +0x8f:  sub    $0x4,%esp
080c8808 +0x92:  addl   $0x1,-0xc(%ebp)
080c880c +0x96:  mov    -0x10(%ebp),%eax
080c880f +0x99:  mov    0x4(%eax),%eax
080c8812 +0x9c:  cmp    -0xc(%ebp),%eax
080c8815 +0x9f:  jle    080c8827 <+0xb1>
080c8817 +0xa1:  cmpl   $0x3e7,-0xc(%ebp)
080c881e +0xa8:  jg     080c8827 <+0xb1>
080c8820 +0xaa:  mov    $0x1,%eax
080c8825 +0xaf:  jmp    080c882c <+0xb6>
080c8827 +0xb1:  mov    $0x0,%eax
080c882c +0xb6:  test   %al,%al
080c882e +0xb8:  jne    080c879d <+0x27>
080c8834 +0xbe:  mov    $0x1,%eax
080c8839 +0xc3:  leave
080c883a +0xc4:  ret
080c883b +0xc5:  nop
```

## 反编译 C

```c
// BestClearTime::loadData @ 0x80c8776

/* BestClearTime::loadData(CUser*, char*) */

undefined4 __thiscall BestClearTime::loadData(BestClearTime *this,CUser *param_1,char *param_2)

{
  bool bVar1;
  pair local_4c [8];
  pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY> local_44 [24];
  int local_2c [6];
  char *local_14;
  int local_10;
  
  (**(code **)(*(int *)this + 0x1c))(this);
  local_14 = param_2;
  local_10 = 0;
  while( true ) {
    if ((local_10 < *(int *)(local_14 + 4)) && (local_10 < 1000)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) break;
    std::make_pair<int&,SIG_BEST_CLEAR_TIME_DIFFICULTY&>
              (local_2c,(SIG_BEST_CLEAR_TIME_DIFFICULTY *)(local_14 + local_10 * 0x18 + 8));
    std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>::pair<int,SIG_BEST_CLEAR_TIME_DIFFICULTY>
              (local_44,(pair *)local_2c);
    std::
    map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
    ::insert(local_4c);
    local_10 = local_10 + 1;
  }
  return 1;
}
```
