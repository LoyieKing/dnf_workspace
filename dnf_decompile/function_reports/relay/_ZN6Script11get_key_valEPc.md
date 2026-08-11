# _ZN6Script11get_key_valEPc

`Script::get_key_val(char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x804aaf4` | `0xd2` | `0x8056b60` | `0xd8` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,59 +1,58 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x24,%esp
+sub    $0x28,%esp
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    0x8(%ebp),%edx
 add    $0x108,%edx
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN5Token9get_tokenEPci>
 mov    0x8(%ebp),%eax
 add    $0x108,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5Token11get_n_tokenEv>
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    $0x1,%eax
-je     <T> <_ZN6Script11get_key_valEPc+0x50>
-cmp    $0x2,%eax
-je     <T> <_ZN6Script11get_key_valEPc+0x79>
-jmp    <T> <_ZN6Script11get_key_valEPc+0xc0>
+mov    %eax,-0x18(%ebp)
+cmpl   $0x1,-0x18(%ebp)
+jne    <T> <_ZN6Script11get_key_valEPc+0x75>
 mov    0x8(%ebp),%eax
 add    $0x108,%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN5Token11get_contextEi>
+mov    %eax,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6Script13on_parent_tagEPc>
-jmp    <T> <_ZN6Script11get_key_valEPc+0xc7>
+jmp    <T> <_ZN6Script11get_key_valEPc+0xd1>
+cmpl   $0x2,-0x18(%ebp)
+je     <T> <_ZN6Script11get_key_valEPc+0x82>
+mov    $0x0,%eax
+jmp    <T> <_ZN6Script11get_key_valEPc+0xd6>
+mov    0x8(%ebp),%eax
+add    $0x108,%eax
+movl   $0x0,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN5Token11get_contextEi>
+mov    %eax,-0x10(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x108,%eax
 movl   $0x1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN5Token11get_contextEi>
-mov    %eax,%ebx
-mov    0x8(%ebp),%eax
-add    $0x108,%eax
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN5Token11get_contextEi>
-mov    %ebx,0x8(%esp)
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6Script13on_keyval_tagEPcS0_>
-jmp    <T> <_ZN6Script11get_key_valEPc+0xc7>
-mov    $0x0,%eax
-jmp    <T> <_ZN6Script11get_key_valEPc+0xcc>
 mov    $0x1,%eax
-add    $0x24,%esp
-pop    %ebx
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Script::get_key_val(char*) */

undefined4 __thiscall Script::_ZN6Script11get_key_valEPc(Script *this,char *param_1)

{
  size_t sVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  sVar1 = strlen(param_1);
  Token::_ZN5Token9get_tokenEPci((Token *)(this + 0x108),param_1,sVar1);
  iVar2 = Token::get_n_token((Token *)(this + 0x108));
  if (iVar2 == 1) {
    pcVar3 = (char *)Token::get_context((Token *)(this + 0x108),0);
    on_parent_tag(this,pcVar3);
  }
  else {
    if (iVar2 != 2) {
      return 0;
    }
    pcVar3 = (char *)Token::get_context((Token *)(this + 0x108),1);
    pcVar4 = (char *)Token::get_context((Token *)(this + 0x108),0);
    on_keyval_tag(this,pcVar4,pcVar3);
  }
  return 1;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/Script.cpp](source/ChannelOld/DNFChannelBridge/Script.cpp)（约第 106 行）：

```cpp
bool Script::get_key_val(char* line)
{
    tok.get_token(line, strlen(line));
    int n_tok = tok.get_n_token();
    switch (n_tok)
    {
    case 1:
        on_parent_tag(tok.get_context(0));
        break;
    case 2:
        on_keyval_tag(tok.get_context(0), tok.get_context(1));
        break;
    default:
        return false;
    }
    return true;
}
```
