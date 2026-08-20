# getData

`_ZNK19CMissionList_Charac7getDataEPc`

`CMissionList_Charac::getData(char*) const`

| 类 | 地址 |
|---|---|
| `CMissionList_Charac` | `0x085e4ac4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e4ac4  _ZNK19CMissionList_Charac7getDataEPc
#           CMissionList_Charac::getData(char*) const
# range [0x085e4ac4, 0x085e4bc7]
085e4ac4 +0x000:  push   %ebp
085e4ac5 +0x001:  mov    %esp,%ebp
085e4ac7 +0x003:  sub    $0x28,%esp
085e4aca +0x006:  mov    0xc(%ebp),%eax
085e4acd +0x009:  mov    %eax,-0x10(%ebp)
085e4ad0 +0x00c:  movl   $0x14a,0x8(%esp)
085e4ad8 +0x014:  movl   $0x0,0x4(%esp)
085e4ae0 +0x01c:  mov    -0x10(%ebp),%eax
085e4ae3 +0x01f:  mov    %eax,(%esp)
085e4ae6 +0x022:  call   0807dcc0 <_init+0x5b8>
085e4aeb +0x027:  mov    0x8(%ebp),%eax
085e4aee +0x02a:  mov    0x150(%eax),%edx
085e4af4 +0x030:  mov    -0x10(%ebp),%eax
085e4af7 +0x033:  mov    %edx,(%eax)
085e4af9 +0x035:  movl   $0x0,-0xc(%ebp)
085e4b00 +0x03c:  jmp    085e4b5e <+0x9a>
085e4b02 +0x03e:  mov    -0xc(%ebp),%edx
085e4b05 +0x041:  mov    -0xc(%ebp),%ecx
085e4b08 +0x044:  mov    0x8(%ebp),%eax
085e4b0b +0x047:  movzwl 0x7(%eax,%ecx,8),%ecx
085e4b10 +0x04c:  mov    -0x10(%ebp),%eax
085e4b13 +0x04f:  mov    %cx,0x6(%eax,%edx,8)
085e4b18 +0x054:  mov    -0xc(%ebp),%edx
085e4b1b +0x057:  mov    -0xc(%ebp),%ecx
085e4b1e +0x05a:  mov    0x8(%ebp),%eax
085e4b21 +0x05d:  movzwl 0x5(%eax,%ecx,8),%ecx
085e4b26 +0x062:  mov    -0x10(%ebp),%eax
085e4b29 +0x065:  mov    %cx,0x4(%eax,%edx,8)
085e4b2e +0x06a:  mov    -0xc(%ebp),%edx
085e4b31 +0x06d:  mov    -0xc(%ebp),%ecx
085e4b34 +0x070:  mov    0x8(%ebp),%eax
085e4b37 +0x073:  movzwl 0x9(%eax,%ecx,8),%ecx
085e4b3c +0x078:  mov    -0x10(%ebp),%eax
085e4b3f +0x07b:  mov    %cx,0x8(%eax,%edx,8)
085e4b44 +0x080:  mov    -0xc(%ebp),%edx
085e4b47 +0x083:  mov    -0xc(%ebp),%ecx
085e4b4a +0x086:  mov    0x8(%ebp),%eax
085e4b4d +0x089:  movzwl 0xb(%eax,%ecx,8),%ecx
085e4b52 +0x08e:  mov    -0x10(%ebp),%eax
085e4b55 +0x091:  mov    %cx,0xa(%eax,%edx,8)
085e4b5a +0x096:  addl   $0x1,-0xc(%ebp)
085e4b5e +0x09a:  cmpl   $0x23,-0xc(%ebp)
085e4b62 +0x09e:  setle  %al
085e4b65 +0x0a1:  test   %al,%al
085e4b67 +0x0a3:  jne    085e4b02 <+0x3e>
085e4b69 +0x0a5:  mov    -0x10(%ebp),%eax
085e4b6c +0x0a8:  lea    0x124(%eax),%edx
085e4b72 +0x0ae:  mov    0x8(%ebp),%eax
085e4b75 +0x0b1:  add    $0x128,%eax
085e4b7a +0x0b6:  mov    %edx,0x4(%esp)
085e4b7e +0x0ba:  mov    %eax,(%esp)
085e4b81 +0x0bd:  call   08a5a90a <_Z11BitsetToStrRKSt6bitsetILj256EEPh>  ; BitsetToStr(std::bitset<256u> const&, unsigned char*)
085e4b86 +0x0c2:  mov    0x8(%ebp),%eax
085e4b89 +0x0c5:  movzwl 0x148(%eax),%eax
085e4b90 +0x0cc:  mov    %eax,%edx
085e4b92 +0x0ce:  mov    -0x10(%ebp),%eax
085e4b95 +0x0d1:  mov    %dx,0x144(%eax)
085e4b9c +0x0d8:  mov    0x8(%ebp),%eax
085e4b9f +0x0db:  movzwl 0x14a(%eax),%eax
085e4ba6 +0x0e2:  mov    %eax,%edx
085e4ba8 +0x0e4:  mov    -0x10(%ebp),%eax
085e4bab +0x0e7:  mov    %dx,0x146(%eax)
085e4bb2 +0x0ee:  mov    0x8(%ebp),%eax
085e4bb5 +0x0f1:  movzwl 0x14c(%eax),%edx
085e4bbc +0x0f8:  mov    -0x10(%ebp),%eax
085e4bbf +0x0fb:  mov    %dx,0x148(%eax)
085e4bc6 +0x102:  leave
085e4bc7 +0x103:  ret
```

## 反编译 C

```c
// CMissionList_Charac::getData @ 0x85e4ac4

/* CMissionList_Charac::getData(char*) const */

void __thiscall CMissionList_Charac::getData(CMissionList_Charac *this,char *param_1)

{
  int local_10;
  
  memset(param_1,0,0x14a);
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0x150);
  for (local_10 = 0; local_10 < 0x24; local_10 = local_10 + 1) {
    *(undefined2 *)(param_1 + local_10 * 8 + 6) = *(undefined2 *)(this + local_10 * 8 + 7);
    *(undefined2 *)(param_1 + local_10 * 8 + 4) = *(undefined2 *)(this + local_10 * 8 + 5);
    *(undefined2 *)(param_1 + local_10 * 8 + 8) = *(undefined2 *)(this + local_10 * 8 + 9);
    *(undefined2 *)(param_1 + local_10 * 8 + 10) = *(undefined2 *)(this + local_10 * 8 + 0xb);
  }
  BitsetToStr((bitset *)(this + 0x128),(uchar *)(param_1 + 0x124));
  *(undefined2 *)(param_1 + 0x144) = *(undefined2 *)(this + 0x148);
  *(undefined2 *)(param_1 + 0x146) = *(undefined2 *)(this + 0x14a);
  *(undefined2 *)(param_1 + 0x148) = *(undefined2 *)(this + 0x14c);
  return;
}
```
