# def is_sorted(a, n):
#   for i in range(1, n):
#     if a[i] < a[i - 1]:
#       return False
#   return True


# def can_sort(a, n, k):
#   # Se a lista já estiver ordenada, então não é necessário nenhuma reversão.

#   if is_sorted(a, n):
#     return True

#   # Se a lista for de tamanho 1, então não é possível ordenar a lista.

#   if n == 1:
#     return False

#   # Se a lista for de tamanho 2, então podemos reverter a lista inteira se os números estiverem em ordem decrescente.

#   if n == 2 and a[0] > a[1]:
#     return True

#   # Para listas de tamanho maior, podemos dividir a lista em duas metades e tentar ordenar cada metade separadamente.

#   mid = n // 2
#   a1 = a[:mid]
#   a2 = a[mid:]

#   # Se cada metade puder ser ordenada com o número máximo de reversões permitido, então a lista inteira também pode ser ordenada.

#   if can_sort(a1, mid, k) and can_sort(a2, n - mid, k):
#     return True

#   # Se pelo menos uma metade não puder ser ordenada com o número máximo de reversões permitido, então a lista inteira também não pode ser ordenada.

#   return False


# def main():
#   """
#   Lê os dados de entrada e imprime a resposta.
#   """

#   t = int(input())
#   for _ in range(t):
#     n, k = map(int, input().split())
#     a = list(map(int, input().split()))

#     # Corrige o problema para levar em conta as inversões

#     for i in range(n - 1):
#       if a[i] > a[i + 1] and i < n - k:
#         a = a[i:i + k] + a[i + 1:]
#         break

#     print("YES" if is_sorted(a, n) else "NO")

# if __name__ == "__main__":
#   main()
