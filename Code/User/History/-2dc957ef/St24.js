fetch(chrome.runtime.getURL('colors.css'))
  .then(response => response.text())
  .then(css => {
    const style = document.createElement('style');
    style.textContent = css;
    document.head.appendChild(style);
  })
  .catch(error => console.error('Error loading colors.css:', error));