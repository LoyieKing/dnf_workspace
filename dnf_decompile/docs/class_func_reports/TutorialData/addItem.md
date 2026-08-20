# addItem

`_ZN12TutorialData7addItemEii`

`TutorialData::addItem(int, int)`

| 类 | 地址 |
|---|---|
| `TutorialData` | `0x08ab8d1c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab8d1c  _ZN12TutorialData7addItemEii
#           TutorialData::addItem(int, int)
# range [0x08ab8d1c, 0x08ab8d5b]
08ab8d1c +0x00:  push   %ebp
08ab8d1d +0x01:  mov    %esp,%ebp
08ab8d1f +0x03:  sub    $0x28,%esp
08ab8d22 +0x06:  movl   $0x8,(%esp)
08ab8d29 +0x0d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08ab8d2e +0x12:  mov    %eax,-0xc(%ebp)
08ab8d31 +0x15:  mov    -0xc(%ebp),%eax
08ab8d34 +0x18:  mov    0xc(%ebp),%edx
08ab8d37 +0x1b:  mov    %edx,(%eax)
08ab8d39 +0x1d:  mov    -0xc(%ebp),%eax
08ab8d3c +0x20:  mov    0x10(%ebp),%edx
08ab8d3f +0x23:  mov    %edx,0x4(%eax)
08ab8d42 +0x26:  mov    0x8(%ebp),%eax
08ab8d45 +0x29:  lea    0x13c(%eax),%edx
08ab8d4b +0x2f:  lea    -0xc(%ebp),%eax
08ab8d4e +0x32:  mov    %eax,0x4(%esp)
08ab8d52 +0x36:  mov    %edx,(%esp)
08ab8d55 +0x39:  call   08aba262 <_GLOBAL__I__ZN12TutorialDataC2Ev+0xa9d>  ; global constructors keyed to TutorialData::TutorialData()+0xa9d
08ab8d5a +0x3e:  leave
08ab8d5b +0x3f:  ret
```

## 反编译 C

```c
// TutorialData::addItem @ 0x8ab8d1c

/* TutorialData::addItem(int, int) */

void __thiscall TutorialData::addItem(TutorialData *this,int param_1,int param_2)

{
  ItemData *local_10 [3];
  
  local_10[0] = operator_new(8);
  *(int *)local_10[0] = param_1;
  *(int *)(local_10[0] + 4) = param_2;
  std::vector<TutorialData::ItemData*,std::allocator<TutorialData::ItemData*>>::push_back
            ((vector<TutorialData::ItemData*,std::allocator<TutorialData::ItemData*>> *)
             (this + 0x13c),local_10);
  return;
}
```
